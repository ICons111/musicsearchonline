#include "main_widget.h"
#include "ui_main_widget.h"


Main_Widget::Main_Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Main_Widget)
{
    ui->setupUi(this);
    //禁止窗口改变尺寸大小
    this->setFixedSize(this->geometry().size());

    //去掉标题栏
    this -> setWindowFlag(Qt::FramelessWindowHint);
    ui->pushButton_Playpause->setStyleSheet(
        "QPushButton {"
        "    background-repeat: no-repeat;"
        "    background-position: center center;"
        "    border: none;"
        "}"
        "QPushButton:hover {"
        "    background-repeat: no-repeat;"
        "    background-position: center center;"
        "}"
        "QPushButton:pressed {"
        "    background-repeat: no-repeat;"
        "    background-position: center center;"
        "}"
        );
    ui->loopbox->setStyleSheet(
        "QCheckBox {"
        "    background-repeat: no-repeat;"
        "    background-position: center center;"
        "    border: none;"
        "}"
        "QCheckBox:hover {"
        "    background-repeat: no-repeat;"
        "    background-position: center center;"
        "}"
        "QCheckBox:pressed {"
        "    background-repeat: no-repeat;"
        "    background-position: center center;"
        "}"
        "QCheckBox::indicator {"
        "    width: 0px;"   // 隐藏复选框指示器
        "    height: 0px;"  // 隐藏复选框指示器
        "    border: none;" // 隐藏边框
        "}"
        );







    //1:判断数据库连接是否存在，存在就得到连接，如果不存在添加得到连接
    if(QSqlDatabase::contains("sql_default_connection"))
        //根据数据库默认连接名称得到连接
        db = QSqlDatabase::database("sql_default_connection");
    else
    {
        db = QSqlDatabase::addDatabase("QSQLITE");//添加数据库，得到该数据库的默认连接
        db.setDatabaseName("mp3listdatabase.db");
    }

    //2:打开数据库，打开表示（QSqlQuery类）
    if(!db.open())
        QMessageBox::critical(0,QObject::tr("Open Data Error."),db.lastError().text());
    else{

        //3：定义querry对象，得到打开的数据库标识
        QSqlQuery query;
        QString sql = "create table if not exists searchlist(id integer,name text,singer text,album_id text,hash text,album_audio_id text,encodeid text)";
        if(!query.exec(sql))
        {
            QMessageBox::critical(0,QObject::tr("create searchlist Error."),db.lastError().text());
        }

        //歌曲痕迹数据表
        sql = "create table if not exists historysong(id integer primary key,name text,singer text,album_id text,hash text,album_audio_id text,encodeid text)";

        if(!query.exec(sql))
        {
            QMessageBox::critical(0,QObject::tr("create historysong Error."),db.lastError().text());
        }

        //查询历史数据表中的插入歌曲数据
        sql = "select * from historysong";
        if(!query.exec(sql))
            QMessageBox::critical(0,QObject::tr("select historysong Error."),db.lastError().text());


        while(query.next())
        {
            QString name,singer;
            QSqlRecord rec = query.record();
            int ablumkey = rec.indexOf("name");
            int hashkey = rec.indexOf("singer");
            name = query.value(ablumkey).toString();
            singer = query.value(hashkey).toString();

            QString strshow = name + "--"+singer;

            QListWidgetItem *item =new  QListWidgetItem(strshow);
            ui -> listWidget_History -> addItem(item);
        }
    }

    player = new QMediaPlayer;
    playerlist = new QMediaPlayer;
    audioOutput = new QAudioOutput;

    player->setAudioOutput(audioOutput);


    connect(player,SIGNAL(positionChanged(qint64)),this,SLOT(updateDuration(qint64)));
    connect(this, SIGNAL(lyricShow(QString)), this, SLOT(lyricTextShow(QString)));
    connect(ui -> listWidget_Search,SIGNAL(doubleClicked(QModelIndex)),this,SLOT(playSearchMusic()));
    connect(ui -> listWidget_History,SIGNAL(doubleClicked(QModelIndex)),this,SLOT(playHistoryMusic()));

    num = 0;

    //更换软件皮肤菜单项
    QAction *actionbackgroundDefault = new QAction(QIcon(":/icons/Images/1.jpg"),"Default");
    connect(actionbackgroundDefault,&QAction::triggered,this,&Main_Widget::backgroundtodefault);


    QAction *actionbackgroundtoSetting = new QAction(QIcon(":/icons/Images/2.jpg"),"setting");
    connect(actionbackgroundtoSetting,&QAction::triggered,this,&Main_Widget::backgroundtoSetting);



    menuchangeskin = new QMenu(this);
    menuchangeskin -> addAction(actionbackgroundDefault);
    menuchangeskin -> addAction(actionbackgroundtoSetting);

    backgroundtodefault();

    initsystemtrayIcon();


}
//播放进度调整
static bool i = true;

Main_Widget::~Main_Widget()
{
    delete ui;
}

void Main_Widget::paintEvent(QPaintEvent *event)
{
    // Q_UNUSED(event)
    // QPainter painter(this);
    // painter.drawPixmap(0,0,width(),height(),QPixmap(":/icons/Images/default.jpg"));

}

void Main_Widget::on_pushButton_Skin_clicked()
{
    menuchangeskin -> exec(QCursor::pos());

}


void Main_Widget::on_pushButton_About_clicked()
{
    QMessageBox msgBox(this);
    msgBox.setIconPixmap(QPixmap(":/icons/Images/about.png"));  // 设置自定义图标
    msgBox.setWindowTitle("About");
    msgBox.setText("MP3音乐播放器搜索引擎\n"
                   "[作者]:账房先生\n"
                   "播放器功能如下：\n"
                   "搜索，暂停，上一曲，下一曲循环播放，换肤，最小化托盘，歌词显示，历史记录");
    msgBox.exec();  // 显示消息框
}

//搜索音乐
void Main_Widget::on_pushButton_Search_clicked()
{
    //将原有的歌曲数据清空
    ui -> listWidget_Search -> clear();

    //先清理数据库中已经存储的 hash等数据
    QSqlQuery query;
    QString sql = "delete from searchlist";

    if(!query.exec(sql))
        QMessageBox::critical(0,QObject::tr("Delete searchlist Error."),db.lastError().text());

    //根据用户输入的MP3名称，发起请求操作
    //QString url=kugouSearchApi + QString("format=json&keyword=%1&page=1&pagesize=20&showtype=1").arg(ui->lineEdit_Search->text());
    QString url=kugouSearchApi + QString("%1").arg(ui->lineEdit_Search->text());

    httpAccess(url);

    QByteArray JsonData;
    QEventLoop loop;

    auto c = connect(this,&Main_Widget::finish,[&](const QByteArray &data)
                     {
                         JsonData = data;
                         loop.exit(1);
                     });

    loop.exec();
    disconnect(c);

    //解析网页回复的数据，将搜索得到的音乐hash和album_id与列表的索引值存放到数据库
    hashJsonAnalysis(JsonData);


}


void Main_Widget::on_VopSlider_valueChanged(int value) // 音量调整
{
    // 将滑动条的值转换为 0.0 到 1.0 范围的浮动值
    float volume = value / 100.0f;

    // 设置音量
    audioOutput->setVolume(volume);

    // 更新显示的音量值
    ui->label_Vop->setText(QString::number(value));
}



void Main_Widget::on_pushButton_Front_clicked() //上一曲
{
    row--;
    if(row < 0)
        row = ui -> listWidget_History-> count();

    QSqlQuery query;
    QString sql = QString("select * from historysong where id=%1").arg(row+1);
    if(!query.exec(sql))
        QMessageBox::critical(0,QObject::tr("select historysong error."),db.lastError().text());

    QString album_id,hash,album_audio_id,encodeid;
    while(query.next())
    {
        QSqlRecord record = query.record();
        int albumkey = record.indexOf("album_id");
        int hashkey = record.indexOf("hash");
        int audiokey = record.indexOf("album_audio_id");
        int encodekey = record.indexOf("encodeid");

        album_id = query.value(albumkey).toString();
        hash = query.value(hashkey).toString();
        album_audio_id = query.value(audiokey).toString();
        encodeid=query.value(encodekey).toString();
    }

    downloadPlayer(hash,album_id,encodeid,album_audio_id);



}


void Main_Widget::on_pushButton_Playpause_clicked()
{
    // 播放暂停图标（实现切换）
    if (player->playbackState() == QMediaPlayer::PlayingState) {
        // 切换为暂停图标
        ui->pushButton_Playpause->setIcon(QIcon(":/icons/Images/pase-hover.png"));
        player->pause(); // 暂停播放
    } else if (player->playbackState() == QMediaPlayer::PausedState) {
        // 切换为播放图标
        ui->pushButton_Playpause->setIcon(QIcon(":/icons/Images/pause.png"));
        player->play(); // 继续播放
    }
}





void Main_Widget::on_pushButton_Next_clicked() //下一曲
{
    row++;
    if(row > ui -> listWidget_History -> count())
        row = 0;

    QSqlQuery query;
    QString sql = QString("select * from historysong where id=%1").arg(row+1);
    if(!query.exec(sql))
        QMessageBox::critical(0,QObject::tr("select historysong error."),db.lastError().text());

    QString album_id,hash,album_audio_id,encodeid;
    while(query.next())
    {
        QSqlRecord record = query.record();
        int albumkey = record.indexOf("album_id");
        int hashkey = record.indexOf("hash");
        int audiokey = record.indexOf("album_audio_id");
        int encodekey = record.indexOf("encodeid");

        album_id = query.value(albumkey).toString();
        hash = query.value(hashkey).toString();
        album_audio_id = query.value(audiokey).toString();
        encodeid=query.value(encodekey).toString();
    }

    downloadPlayer(hash,album_id,encodeid,album_audio_id);

}



void Main_Widget::onMediaStatusChanged(QMediaPlayer::MediaStatus status)
{
    // 如果播放完了当前的媒体，重置到开始并重新播放
    if (status == QMediaPlayer::EndOfMedia) {
        if(ui -> loopbox -> isChecked())
        {
        player->setPosition(0);  // 设置播放位置为0，开始重新播放
        player->play();  // 重新播放
        }
        else
        {
            player->setPosition(0);
            row = ui -> listWidget_History -> currentRow();
            row++;
            if(row > ui -> listWidget_History -> count())
                row = 0;

            QSqlQuery query;
            QString sql = QString("select * from historysong where id=%1").arg(row+1);
            if(!query.exec(sql))
                QMessageBox::critical(0,QObject::tr("select historysong error."),db.lastError().text());

            QString album_id,hash,album_audio_id,encodeid;
            while(query.next())
            {
                QSqlRecord record = query.record();
                int albumkey = record.indexOf("album_id");
                int hashkey = record.indexOf("hash");
                int audiokey = record.indexOf("album_audio_id");
                int encodekey = record.indexOf("encodeid");

                album_id = query.value(albumkey).toString();
                hash = query.value(hashkey).toString();
                album_audio_id = query.value(audiokey).toString();
                encodeid=query.value(encodekey).toString();
            }

            downloadPlayer(hash,album_id,encodeid,album_audio_id);

        }
    }
}



void Main_Widget::on_loopbox_checkStateChanged(const Qt::CheckState &checked)
{
    if (checked == Qt::Checked) {
        // 启用循环播放
        ui -> loopbox -> setIcon(QIcon(":/icons/Images/loop.png"));
        connect(player, &QMediaPlayer::mediaStatusChanged, this, &Main_Widget::onMediaStatusChanged);
    } else {
        // 禁用循环播放
        ui -> loopbox -> setIcon(QIcon(":/icons/Images/loop-hover.png"));
        connect(player,&QMediaPlayer::mediaStatusChanged,this,&Main_Widget::onMediaStatusChanged);


    }
}


void Main_Widget::on_progressSlider_valueChanged(int value)
{
    QTime time(0,value/60000,qRound((value%60000)/1000.0));

    ui -> label_Time -> setText(time.toString("mm:ss"));
    if(i == false)
        player -> setPosition(qint64(value));


}


void Main_Widget::on_progressSlider_sliderPressed()
{
    i = false;

}


void Main_Widget::on_progressSlider_sliderReleased()
{
    i = true;

}

void Main_Widget::updateDuration(qint64 value)
{
    ui -> progressSlider ->setRange(0,player-> duration());
    ui -> progressSlider -> setValue(value);

}

void Main_Widget::netReply(QNetworkReply *reply)
{
    //获取响应的信息，状态码为200属于正常
    QVariant status_code = reply -> attribute(QNetworkRequest::HttpStatusCodeAttribute);
    qDebug()<<status_code;

    reply-> attribute(QNetworkRequest::RedirectPolicyAttribute);

    //没有错误返回
    if(reply-> error() == QNetworkReply::NoError)
    {
        QByteArray data = reply -> readAll();
        emit finish(data);
    }
    else
        qDebug() << "网络错误: " << reply->errorString();

    reply -> deleteLater();

}

void Main_Widget::lyricTextShow(QString lyrics)
{
    qDebug() << "Lyric received: " << lyrics;
    ui->textBrowser_Lyric->setFont(QFont("宋体", 10, QFont::Bold));
    ui->textBrowser_Lyric->setTextColor(Qt::white);
    ui->textBrowser_Lyric->setText(lyrics);
}

void Main_Widget::playSearchMusic()  //双击搜索列表，播放音乐
{
    /// 获取双击的歌曲对应索引，就是数据库当中数据表的ID号
    int row=ui->listWidget_Search->currentRow();
    qDebug()<<"row-->"<<row;

    // 查询搜索数据库中数据表中存储的音乐的数据信息
    QSqlQuery query;
    QString sql=QString("select *from searchlist where id=%1;").arg(row);
    if(!query.exec(sql))
    {
        QMessageBox::critical(0,QObject::tr("select searchlist table Error."),db.lastError().text());

    }

    //将选中的音乐数据信息存入历史数据表

    QString name,singer,album_id,hash,album_audio_id,encodeid;
    while(query.next())
    {
        QSqlRecord record = query.record();
        int namekey = record.indexOf("name");
        int singerkey = record.indexOf("singer");
        int albumkey = record.indexOf("album_id");
        int hashkey = record.indexOf("hash");
        int audiokey = record.indexOf("album_audio_id");
        int encodekey = record.indexOf("encodeid");

        name = query.value(namekey).toString();
        singer = query.value(singerkey).toString();
        album_id = query.value(albumkey).toString();
        hash = query.value(hashkey).toString();
        album_audio_id = query.value(audiokey).toString();
        encodeid=query.value(encodekey).toString();


        sql = QString("select hash from historysong where hash = '%1';").arg(hash);
        if(!query.exec(sql))
        {
            QMessageBox::critical(0,QObject::tr("select hash Error."),db.lastError().text());
        }

        if(query.next() == NULL)
        {
            sql = QString("insert into historysong values(NULL,'%1','%2','%3','%4','%5','%6')").arg(name).arg(singer).arg(album_id).arg(hash).arg(album_audio_id).arg(encodeid);
            if(!query.exec(sql))
            {
                QMessageBox::critical(0,QObject::tr("insert historysong Error"),db.lastError().text());
            }

            //将解析的音乐名称，保存在listWidget_History列表控件当中
            QString show = name +"--"+singer;
            QListWidgetItem *item = new QListWidgetItem(show);
            ui -> listWidget_History -> addItem(item);
        }
    }

    downloadPlayer(hash,album_id,encodeid,album_audio_id);


}



void Main_Widget::playHistoryMusic()
{
    //获取双击的哪一行的索引，其实就是数据库中的id编号
    row = ui -> listWidget_History -> currentRow();

    qDebug()<<"row -->"<<row;

    //查询搜索数据库中数据表的历史记录存储的音乐数据信息

    QSqlQuery query;
    QString sql = QString("select * from historysong where id=%1;").arg(row+1);
    if(!query.exec(sql))
    {
        QMessageBox::critical(0,QObject::tr("select historysong Error"),db.lastError().text());
    }
    QString album_id,hash,album_audio_id,encodeid;
    while(query.next())
    {
        QSqlRecord record = query.record();
        int albumkey = record.indexOf("album_id");
        int hashkey = record.indexOf("hash");
        int audiokey = record.indexOf("album_audio_id");
        int encodekey = record.indexOf("encodeid");

        album_id = query.value(albumkey).toString();
        hash = query.value(hashkey).toString();
        album_audio_id = query.value(audiokey).toString();
        encodeid=query.value(encodekey).toString();
    }

    downloadPlayer(hash,album_id,encodeid,album_audio_id);



}

void Main_Widget::downloadPlayer(QString hash, QString album_id,QString encodeid,QString album_audio_id )
{
    QString url = kugouDownloadApi+ QString("kg_url&hash=%1&album_id=%2&encodeid=%3&album_audio_id=%4&down=1&ShyToken=bc8dff619d53362439a6daf83e91c748e056eefb08a992f9f5687312").arg(hash).arg(album_id).arg(encodeid).arg(album_audio_id);

    QString url2 = kugouDownloadApi+ QString("kg_lrc&f=1&hash=%1&ShyToken=bc8dff619d53362439a6daf83e91c748e056eefb08a992f9f5687312").arg(hash);

    qDebug()<<url;
    qDebug()<<url2;

    httpAccess(url);
    httpAccess(url2);

    QByteArray JsonData;
    QEventLoop loop;
    auto d = connect(this, &Main_Widget::finish, [&](const QByteArray & data){
        JsonData = data;
        loop.exit(1);
    });
    loop.exec();
    disconnect(d);


    //解析将要播放音乐
    QString music = musicJsonAnalysis(JsonData);


    player -> setSource(QUrl(url));

    //设置音量
    ui -> VopSlider -> setValue(100);

    player -> play();


}

void Main_Widget::httpAccess(QString url)
{
    // 实例化网络请求操作事项
        request = new QNetworkRequest;

    // 将url网页地址存入 request请求当中
    request->setUrl(url);

    // 实例化网络管理（访问）
    manager = new QNetworkAccessManager;

    // 通过get方法，上传具体的请求
    manager->get(*request);

    // 当网页回复消息时，触发 finished信号，我们才能够读取数据信息
    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(netReply(QNetworkReply*)));
}


void Main_Widget::hashJsonAnalysis(QByteArray JsonData)
{
    QJsonDocument document = QJsonDocument::fromJson(JsonData);

    if (document.isArray()) {
        qDebug() << "Array";
        QJsonArray jsonArray = document.array();
        for (int i = 0; i < jsonArray.size(); i++) {
            QJsonObject album = jsonArray.at(i).toObject();
            QString name = album.value("name").toString();
            QString singer = album.value("singer").toString();
            QString album_id = album.value("album_id").toString();
            QString hash = album.value("hash").toString();
            QString album_audio_id = album.value("album_audio_id").toString();
            QString encodeid = album.value("encodeid").toString();

            // 确保数据库连接有效
            if (!db.isOpen()) {
                qDebug() << "Database is not open!";
                return;
            }

            // 插入数据到数据库
            QSqlQuery query;

            QString insertSql = QString("insert into searchList values(%1, '%2', '%3', '%4', '%5','%6','%7')").arg(QString::number(i)).arg(name).arg(singer).arg(album_id).arg(hash).arg(album_audio_id).arg(encodeid);

            if (!query.exec(insertSql)) {
                qDebug() << "SQL Error:" << query.lastError().text();  // 输出详细的 SQL 错误信息
                qDebug() << "Insert SQL:" << insertSql;

                QMessageBox::critical(0, QObject::tr("Insert Error!"), query.lastError().text());
            }


            // 将解析的音乐名称，存入 listWidget_Search 控件列表进行显示
            QString show = name + "--" + singer;
            QListWidgetItem *item = new QListWidgetItem(show);
            ui->listWidget_Search->addItem(item);
        }
    } else {
        qDebug() << "Unknown JSON format.";
    }
}



QString Main_Widget::musicJsonAnalysis(QByteArray JsonData)
{
    QJsonDocument document = QJsonDocument::fromJson(JsonData);
    if (document.isObject())
    {
        QJsonObject data = document.object();
        qDebug() << "Complete JSON Data: " << data;  // 打印整个 JSON 对象

        // 检查是否有错误码
        if (data.contains("err_code"))
        {
            int errCode = data.value("err_code").toInt();
            qDebug() << "API 返回错误码: " << errCode;
            // 根据错误码进行相应的处理
            if (errCode == 30020) {
                qDebug() << "错误码 30020: 请求失败，请检查API请求参数或联系技术支持。";
            }
            return QString();  // 返回空字符串表示无法获取播放链接
        }

        // 直接从最外层对象提取 "lyric" 字段
        if (data.contains("lyric")) {
            QString lyric = data.value("lyric").toString();
            qDebug() << "Lyric extracted: " << lyric;
            emit lyricShow(lyric);  // 发送歌词
        } else {
            qDebug() << "No lyric field found in the data.";
        }
    }

    return QString();  // 如果没有找到有效的播放链接，返回空字符串
}







void Main_Widget::mousePressEvent(QMouseEvent *event)
{
    if(event -> button() == Qt::LeftButton)
    {
        mousePress = true;
    }

    movePoint=(event->globalPosition()-pos()).toPoint();

}

void Main_Widget::mouseReleaseEvent(QMouseEvent *event)
{
    Q_UNUSED(event)
    mousePress=false;
}

void Main_Widget::mouseMoveEvent(QMouseEvent *event)
{
    if(mousePress)
    {
        QPoint movepos = (event -> globalPosition()).toPoint();
        move(movepos-movePoint);
    }
}

void Main_Widget:: backgroundtodefault()//默认背景皮肤
{
    //获取widget的palette
    QPalette palette=this->palette();
    palette.setBrush(QPalette::Window,
                     QBrush(QPixmap(":/icons/Images/default2.jpg").scaled( // 维族背景图
                         this->size(),Qt::IgnoreAspectRatio, // 不限制原图片的长宽比例
                         Qt::SmoothTransformation))); // 使用平滑的缩放方式

    this->setPalette(palette);


}
void Main_Widget::backgroundtoSetting() // 用用户自定义皮肤
{
    // 设置指定的文件夹路径
    QString defaultFolder = "D:/Qtproject/musicsearch/skin";

    // 选择打开图片作为皮肤，默认打开指定的文件夹
    QString strFileName = QFileDialog::getOpenFileName(
        this,
        "请选择自定义背景图片",
        defaultFolder, // 指定默认打开的文件夹路径
        u8"图片(*.jpg *.png)" // 文件类型过滤
        );

    if (strFileName.isEmpty()) {
        return; // 如果没有选择文件，直接返回
    }

    // 获取widget的palette
    QPalette palette = this->palette();
    palette.setBrush(QPalette::Window,
                     QBrush(QPixmap(strFileName).scaled( // 设置背景图
                         this->size(), Qt::IgnoreAspectRatio, // 不限制原图片的长宽比例
                         Qt::SmoothTransformation))); // 使用平滑的缩放方式

    this->setPalette(palette); // 设置背景
}
void Main_Widget::systemtrayiconactivated(QSystemTrayIcon::ActivationReason reason)//双击响应
{
    switch (reason)
    {
    case QSystemTrayIcon::DoubleClick:
        //显示 隐藏 界面
        if(isHidden())
            show();
        else
            hide();
    default:
        break;
    }
}
void Main_Widget::initsystemtrayIcon()//系统托盘的初始化操作
{
    mysystemTray = new QSystemTrayIcon(this);
    mysystemTray -> setIcon(QIcon(":/icons/Images/music.jpg"));
    connect(mysystemTray,&QSystemTrayIcon::activated,this,&Main_Widget::systemtrayiconactivated);

    //添加退出应用程序菜单
    QAction *actionsystemquit=new QAction(QIcon(":/new/prefix1/images/quit.jpg"),u8"退出程序");
    connect(actionsystemquit,&QAction::triggered,this,&Main_Widget::quitmusicplayer);

    QMenu *pcontextmenu = new QMenu(this);
    pcontextmenu -> addAction(actionsystemquit);
    mysystemTray -> setContextMenu(pcontextmenu);
    mysystemTray -> show();



}
void Main_Widget::quitmusicplayer()//退出应用程序
{
    QCoreApplication::quit();
}






void Main_Widget::on_pushButton_Min_clicked()
{
    hide();
}

