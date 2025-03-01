#ifndef MAIN_WIDGET_H
#define MAIN_WIDGET_H

#include <QWidget>
#include <QPainter> //实现窗口重绘

#include <QNetworkRequest>        //HTTP的URL请求管理
#include <QNetworkAccessManager>  //URL的上传管理
#include <QNetworkReply>          //网页回复数据触发信号的类
#include <QEventLoop>             //QEventLoop类提供一种进入和离开事件循环的方法
#include <QJsonArray>             //QJsonArray类用于封装JSON数组
#include <QJsonObject>            //QJsonObject类用于封装JSON对象
#include <QJsonDocument>

#include <QMediaPlayer>
#include <QtMultimedia>
#include <QDebug>


#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>

#include <QMessageBox>
#include <QTime>
#include <math.h>
#include <qevent.h>
#include <QTime>



//static QString kugouSearchApi = "http://mobilecdn.kugou.com/api/v3/search/song?";
static QString kugouSearchApi = "http://shybot.top/api/?ShyToken=bc8dff619d53362439a6daf83e91c748e056eefb08a992f9f5687312&type=kg&name=";
//static QString kugouDownloadApi = "https://wwwapi.kugou.com/yy/index.php?";
static QString kugouDownloadApi = "http://shybot.top/api/?type=";


//菜单处理
#include<QMenu>

//变换皮肤需要的头文件
#include <QFileDialog>
#include <QStandardPaths>

//系统托盘头文件
#include <QSystemTrayIcon>


QT_BEGIN_NAMESPACE
namespace Ui {
class Main_Widget;
}
QT_END_NAMESPACE

class Main_Widget : public QWidget
{
    Q_OBJECT

public:
    Main_Widget(QWidget *parent = nullptr);
    ~Main_Widget();

    //处理窗口UI图片
    void paintEvent(QPaintEvent *event);
signals:
    void finish(QByteArray);
    void lyricShow(QString);

private slots:
    void on_pushButton_Skin_clicked();//更换窗口皮肤
    void on_pushButton_About_clicked();//应用程序关于操作


    void on_pushButton_Search_clicked();//搜索音乐
    void on_VopSlider_valueChanged(int value);//音量调节


    void on_pushButton_Front_clicked();//上一曲
    void on_pushButton_Playpause_clicked();//暂停
    void on_pushButton_Next_clicked();//下一曲

    //播放状态发生变化
    void onMediaStatusChanged(QMediaPlayer::MediaStatus status);
    //循环播放
    void on_loopbox_checkStateChanged(const Qt::CheckState &checed);



    void on_progressSlider_valueChanged(int value);//播放进度
    void on_progressSlider_sliderPressed();
    void on_progressSlider_sliderReleased();


    //更新播放的进度条和显示时间
    void updateDuration(qint64);

    //读取网络数据的槽函数
    void netReply(QNetworkReply *);

    //显示歌词的槽函数
    void lyricTextShow(QString);


    //音乐播放
    void playSearchMusic();//双击搜索列表，播放音乐
    void playHistoryMusic();//双击历史播放列表，播放音乐


    //更换皮肤功能槽函数
    void backgroundtodefault(); //默认背景皮肤
    void backgroundtoSetting();//用用户自定义皮肤




    void on_pushButton_Min_clicked();

protected:
    //音乐歌曲下载和播放
    void downloadPlayer(QString,QString,QString,QString);
    //访问HTTP网页
    void httpAccess(QString);

    //音乐的hash和ablum_id值解析，使用JSON
    void hashJsonAnalysis(QByteArray);
    //搜索的音乐信息JSON解析，解析出真正的音乐文件和歌词
    QString musicJsonAnalysis(QByteArray);

private:
    Ui::Main_Widget *ui;

    //网络 播放器 SQLite数据库
    QNetworkRequest *request;
    QNetworkAccessManager *manager;
    QMediaPlayer *player;
    QMediaPlayer *playerlist;
    QAudioOutput *audioOutput;
    QSqlDatabase db;

    int num,row;

    //更换皮肤菜单
    QMenu *menuchangeskin;

    //系统托盘
    QSystemTrayIcon *mysystemTray;

    void systemtrayiconactivated(QSystemTrayIcon::ActivationReason reason);
    //系统托盘的初始化操作
    void initsystemtrayIcon();
    //退出应用程序
    void quitmusicplayer();

    //处理鼠标窗口移动属性
    QPoint m_mousePoint;
    QPoint movePoint;
    bool mousePress;

protected:



    // QWidget interface
protected:
    virtual void mousePressEvent(QMouseEvent *event) override;
    virtual void mouseReleaseEvent(QMouseEvent *event) override;
    virtual void mouseMoveEvent(QMouseEvent *event) override;
};


#endif // MAIN_WIDGET_H
