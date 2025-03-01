/********************************************************************************
** Form generated from reading UI file 'main_widget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WIDGET_H
#define UI_MAIN_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Main_Widget
{
public:
    QGroupBox *groupBox;
    QPushButton *pushButton_Search;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *pushButton_Front;
    QSpacerItem *horizontalSpacer_7;
    QSpacerItem *horizontalSpacer_6;
    QPushButton *pushButton_Playpause;
    QSpacerItem *horizontalSpacer_8;
    QSpacerItem *horizontalSpacer_5;
    QPushButton *pushButton_Next;
    QSpacerItem *horizontalSpacer_4;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *loopbox;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSlider *VopSlider;
    QLabel *label_Vop;
    QLineEdit *lineEdit_Search;
    QPushButton *pushButton_Name;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSlider *progressSlider;
    QLabel *label_Time;
    QGroupBox *groupBox_2;
    QListWidget *listWidget_Search;
    QLabel *label;
    QTextBrowser *textBrowser_Lyric;
    QListWidget *listWidget_History;
    QLabel *label_2;
    QLabel *label_3;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_About;
    QPushButton *pushButton_Skin;
    QPushButton *pushButton_Min;
    QPushButton *pushButton_Close;

    void setupUi(QWidget *Main_Widget)
    {
        if (Main_Widget->objectName().isEmpty())
            Main_Widget->setObjectName("Main_Widget");
        Main_Widget->resize(877, 667);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/Images/player.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        Main_Widget->setWindowIcon(icon);
        groupBox = new QGroupBox(Main_Widget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 80, 821, 61));
        pushButton_Search = new QPushButton(groupBox);
        pushButton_Search->setObjectName("pushButton_Search");
        pushButton_Search->setGeometry(QRect(620, 10, 161, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(14);
        font.setBold(true);
        pushButton_Search->setFont(font);
        pushButton_Search->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 50);"));
        layoutWidget = new QWidget(Main_Widget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(30, 580, 801, 42));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget);
        horizontalLayout_3->setObjectName("horizontalLayout_3");
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        pushButton_Front = new QPushButton(layoutWidget);
        pushButton_Front->setObjectName("pushButton_Front");
        pushButton_Front->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_Front->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"}\n"
"QPushButton:hover{\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:pressed{\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"}\n"
""));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/Images/pre-hover.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_Front->setIcon(icon1);
        pushButton_Front->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton_Front);

        horizontalSpacer_7 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_7);

        horizontalSpacer_6 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_6);

        pushButton_Playpause = new QPushButton(layoutWidget);
        pushButton_Playpause->setObjectName("pushButton_Playpause");
        pushButton_Playpause->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_Playpause->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"}\n"
"QPushButton:hover{\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:pressed{\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"}\n"
""));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/icons/Images/pause.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        icon2.addFile(QString::fromUtf8(":/icons/Images/pase-hover.png"), QSize(), QIcon::Mode::Normal, QIcon::State::On);
        pushButton_Playpause->setIcon(icon2);
        pushButton_Playpause->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton_Playpause);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_8);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_5);

        pushButton_Next = new QPushButton(layoutWidget);
        pushButton_Next->setObjectName("pushButton_Next");
        pushButton_Next->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_Next->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"}\n"
"QPushButton:hover{\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:pressed{\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"}\n"
""));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/icons/Images/next-hover.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_Next->setIcon(icon3);
        pushButton_Next->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton_Next);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        loopbox = new QCheckBox(layoutWidget);
        loopbox->setObjectName("loopbox");
        loopbox->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        loopbox->setContextMenuPolicy(Qt::ContextMenuPolicy::DefaultContextMenu);
        loopbox->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"border:none;\n"
"}\n"
"QPushButton:hover{\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"}\n"
"QPushButton:pressed{\n"
"background-repeat:no-repeat;\n"
"background-position:center center;\n"
"}\n"
""));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/icons/Images/loop-hover.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        loopbox->setIcon(icon4);
        loopbox->setIconSize(QSize(20, 20));
        loopbox->setCheckable(true);
        loopbox->setChecked(false);

        horizontalLayout_3->addWidget(loopbox);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer);

        VopSlider = new QSlider(layoutWidget);
        VopSlider->setObjectName("VopSlider");
        VopSlider->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        VopSlider->setMaximum(100);
        VopSlider->setValue(30);
        VopSlider->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_3->addWidget(VopSlider);

        label_Vop = new QLabel(layoutWidget);
        label_Vop->setObjectName("label_Vop");
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(12);
        font1.setBold(true);
        label_Vop->setFont(font1);
        label_Vop->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(label_Vop);

        lineEdit_Search = new QLineEdit(Main_Widget);
        lineEdit_Search->setObjectName("lineEdit_Search");
        lineEdit_Search->setGeometry(QRect(200, 90, 431, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\346\226\260\345\256\213\344\275\223")});
        font2.setPointSize(14);
        font2.setBold(false);
        lineEdit_Search->setFont(font2);
        pushButton_Name = new QPushButton(Main_Widget);
        pushButton_Name->setObjectName("pushButton_Name");
        pushButton_Name->setGeometry(QRect(30, 90, 161, 41));
        pushButton_Name->setFont(font);
        pushButton_Name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 50);"));
        layoutWidget_2 = new QWidget(Main_Widget);
        layoutWidget_2->setObjectName("layoutWidget_2");
        layoutWidget_2->setGeometry(QRect(30, 550, 801, 24));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_2);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        progressSlider = new QSlider(layoutWidget_2);
        progressSlider->setObjectName("progressSlider");
        progressSlider->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        progressSlider->setMaximum(100);
        progressSlider->setOrientation(Qt::Orientation::Horizontal);

        horizontalLayout_2->addWidget(progressSlider);

        label_Time = new QLabel(layoutWidget_2);
        label_Time->setObjectName("label_Time");
        label_Time->setFont(font1);
        label_Time->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(label_Time);

        groupBox_2 = new QGroupBox(Main_Widget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(20, 160, 821, 371));
        listWidget_Search = new QListWidget(groupBox_2);
        listWidget_Search->setObjectName("listWidget_Search");
        listWidget_Search->setGeometry(QRect(20, 50, 241, 311));
        listWidget_Search->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 50);"));
        label = new QLabel(groupBox_2);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 15, 121, 21));
        QFont font3;
        font3.setPointSize(14);
        font3.setBold(true);
        label->setFont(font3);
        label->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));
        textBrowser_Lyric = new QTextBrowser(groupBox_2);
        textBrowser_Lyric->setObjectName("textBrowser_Lyric");
        textBrowser_Lyric->setGeometry(QRect(280, 50, 311, 311));
        textBrowser_Lyric->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 50);"));
        listWidget_History = new QListWidget(groupBox_2);
        listWidget_History->setObjectName("listWidget_History");
        listWidget_History->setGeometry(QRect(610, 50, 191, 311));
        listWidget_History->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 50);"));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(330, 20, 121, 21));
        label_2->setFont(font3);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(630, 20, 121, 21));
        label_3->setFont(font3);
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));
        widget = new QWidget(Main_Widget);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(680, 20, 172, 42));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_About = new QPushButton(widget);
        pushButton_About->setObjectName("pushButton_About");
        pushButton_About->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_About->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:0px;\n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color: rgba(230,0,0,0.5);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgba(95, 95, 95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgba(0,0,0,100);\n"
"\n"
"}\n"
""));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/icons/Images/about.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_About->setIcon(icon5);
        pushButton_About->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_About);

        pushButton_Skin = new QPushButton(widget);
        pushButton_Skin->setObjectName("pushButton_Skin");
        pushButton_Skin->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_Skin->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:0px;\n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color: rgba(230,0,0,0.5);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgba(95, 95, 95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgba(0,0,0,100);\n"
"\n"
"}\n"
""));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/icons/Images/skin.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_Skin->setIcon(icon6);
        pushButton_Skin->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_Skin);

        pushButton_Min = new QPushButton(widget);
        pushButton_Min->setObjectName("pushButton_Min");
        pushButton_Min->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:0px;\n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color: rgba(230,0,0,0.5);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgba(95, 95, 95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgba(0,0,0,100);\n"
"\n"
"}\n"
""));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/icons/Images/min.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_Min->setIcon(icon7);
        pushButton_Min->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_Min);

        pushButton_Close = new QPushButton(widget);
        pushButton_Close->setObjectName("pushButton_Close");
        pushButton_Close->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_Close->setStyleSheet(QString::fromUtf8("QPushButton\n"
"{\n"
"border-radius:0px;\n"
"background-repeat:no-repeat;\n"
"border:none;\n"
"background-position:center center;\n"
"\n"
"}\n"
"QPushButton:hover{\n"
"\n"
"background-color: rgba(230,0,0,0.5);\n"
"}\n"
"QPushButton:pressed{\n"
"background-color: rgba(95, 95, 95,100);\n"
"border-color:rgba(255,255,255,30);\n"
"border-style:inset;\n"
"color:rgba(0,0,0,100);\n"
"\n"
"}\n"
""));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/icons/Images/quit.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_Close->setIcon(icon8);
        pushButton_Close->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_Close);


        retranslateUi(Main_Widget);
        QObject::connect(pushButton_Close, &QPushButton::clicked, Main_Widget, qOverload<>(&QWidget::close));

        QMetaObject::connectSlotsByName(Main_Widget);
    } // setupUi

    void retranslateUi(QWidget *Main_Widget)
    {
        Main_Widget->setWindowTitle(QCoreApplication::translate("Main_Widget", "Widget", nullptr));
        groupBox->setTitle(QString());
        pushButton_Search->setText(QCoreApplication::translate("Main_Widget", "\346\220\234 \347\264\242...", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_Front->setToolTip(QCoreApplication::translate("Main_Widget", "\344\270\212\344\270\200\346\233\262", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_Front->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_Playpause->setToolTip(QCoreApplication::translate("Main_Widget", "\346\222\255\346\224\276|\346\232\202\345\201\234", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_Playpause->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_Next->setToolTip(QCoreApplication::translate("Main_Widget", "\344\270\213\344\270\200\346\233\262", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_Next->setText(QString());
        loopbox->setText(QString());
        label_Vop->setText(QCoreApplication::translate("Main_Widget", "000", nullptr));
        lineEdit_Search->setText(QCoreApplication::translate("Main_Widget", "\344\270\203\351\207\214\351\246\231", nullptr));
        pushButton_Name->setText(QCoreApplication::translate("Main_Widget", "\346\220\234\347\264\242\346\255\214\346\233\262\345\220\215\347\247\260", nullptr));
        label_Time->setText(QCoreApplication::translate("Main_Widget", "00:00", nullptr));
        groupBox_2->setTitle(QString());
        label->setText(QCoreApplication::translate("Main_Widget", "\346\220\234\347\264\242\346\255\214\346\233\262", nullptr));
        label_2->setText(QCoreApplication::translate("Main_Widget", "\346\220\234\347\264\242\346\255\214\350\257\215", nullptr));
        label_3->setText(QCoreApplication::translate("Main_Widget", "\346\222\255\346\224\276\346\255\214\346\233\262\347\227\225\350\277\271", nullptr));
        pushButton_About->setText(QString());
        pushButton_Skin->setText(QString());
        pushButton_Min->setText(QString());
        pushButton_Close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Main_Widget: public Ui_Main_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WIDGET_H
