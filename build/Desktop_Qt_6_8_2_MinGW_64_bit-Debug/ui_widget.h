/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
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

class Ui_Widget
{
public:
    QLabel *label;
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
    QPushButton *pushButton_Loopplay;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer;
    QSlider *VopSlider;
    QLabel *label_Vop;
    QLineEdit *lineEdit_Search;
    QPushButton *pushButton_Name;
    QListWidget *listWidget_Search;
    QWidget *layoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QSlider *progressSlider;
    QLabel *label_Time;
    QGroupBox *groupBox_2;
    QLabel *label_2;
    QLabel *label_3;
    QListWidget *listWidget_History;
    QTextBrowser *textBrowser_Lyric;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton_About;
    QPushButton *pushButton_Skin;
    QPushButton *pushButton_Close;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName("Widget");
        Widget->resize(919, 701);
        label = new QLabel(Widget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 160, 91, 21));
        QFont font;
        font.setFamilies({QString::fromUtf8("Arial")});
        font.setPointSize(12);
        font.setBold(true);
        label->setFont(font);
        label->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));
        groupBox = new QGroupBox(Widget);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 80, 821, 61));
        pushButton_Search = new QPushButton(groupBox);
        pushButton_Search->setObjectName("pushButton_Search");
        pushButton_Search->setGeometry(QRect(620, 10, 161, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Arial")});
        font1.setPointSize(14);
        font1.setBold(true);
        pushButton_Search->setFont(font1);
        pushButton_Search->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 50);"));
        layoutWidget = new QWidget(Widget);
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
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/new/prefix1/images/pre-hover.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_Front->setIcon(icon);
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
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/new/prefix1/images/pase-hover.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_Playpause->setIcon(icon1);
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
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/new/prefix1/images/next-hover.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_Next->setIcon(icon2);
        pushButton_Next->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton_Next);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        pushButton_Loopplay = new QPushButton(layoutWidget);
        pushButton_Loopplay->setObjectName("pushButton_Loopplay");
        pushButton_Loopplay->setCursor(QCursor(Qt::CursorShape::PointingHandCursor));
        pushButton_Loopplay->setStyleSheet(QString::fromUtf8("QPushButton\n"
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
        icon3.addFile(QString::fromUtf8(":/new/prefix1/images/loop-hover.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_Loopplay->setIcon(icon3);
        pushButton_Loopplay->setIconSize(QSize(32, 32));

        horizontalLayout_3->addWidget(pushButton_Loopplay);

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
        label_Vop->setFont(font);
        label_Vop->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));

        horizontalLayout_3->addWidget(label_Vop);

        lineEdit_Search = new QLineEdit(Widget);
        lineEdit_Search->setObjectName("lineEdit_Search");
        lineEdit_Search->setGeometry(QRect(200, 90, 431, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("\346\226\260\345\256\213\344\275\223")});
        font2.setPointSize(14);
        font2.setBold(false);
        lineEdit_Search->setFont(font2);
        pushButton_Name = new QPushButton(Widget);
        pushButton_Name->setObjectName("pushButton_Name");
        pushButton_Name->setGeometry(QRect(30, 90, 161, 41));
        pushButton_Name->setFont(font1);
        pushButton_Name->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 50);"));
        listWidget_Search = new QListWidget(Widget);
        listWidget_Search->setObjectName("listWidget_Search");
        listWidget_Search->setGeometry(QRect(30, 190, 241, 321));
        listWidget_Search->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::PointingHandCursor)));
        listWidget_Search->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 50);"));
        layoutWidget_2 = new QWidget(Widget);
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
        label_Time->setFont(font);
        label_Time->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));

        horizontalLayout_2->addWidget(label_Time);

        groupBox_2 = new QGroupBox(Widget);
        groupBox_2->setObjectName("groupBox_2");
        groupBox_2->setGeometry(QRect(20, 150, 821, 371));
        label_2 = new QLabel(groupBox_2);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(270, 10, 91, 21));
        label_2->setFont(font);
        label_2->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(570, 10, 131, 21));
        label_3->setFont(font);
        label_3->setStyleSheet(QString::fromUtf8("color:rgb(255, 255, 255);"));
        listWidget_History = new QListWidget(groupBox_2);
        listWidget_History->setObjectName("listWidget_History");
        listWidget_History->setGeometry(QRect(570, 40, 241, 321));
        listWidget_History->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::PointingHandCursor)));
        listWidget_History->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 50);"));
        textBrowser_Lyric = new QTextBrowser(groupBox_2);
        textBrowser_Lyric->setObjectName("textBrowser_Lyric");
        textBrowser_Lyric->setGeometry(QRect(270, 40, 281, 321));
        textBrowser_Lyric->viewport()->setProperty("cursor", QVariant(QCursor(Qt::CursorShape::PointingHandCursor)));
        textBrowser_Lyric->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgba(255, 255, 255, 50);"));
        layoutWidget_3 = new QWidget(Widget);
        layoutWidget_3->setObjectName("layoutWidget_3");
        layoutWidget_3->setGeometry(QRect(700, 20, 146, 42));
        horizontalLayout = new QHBoxLayout(layoutWidget_3);
        horizontalLayout->setObjectName("horizontalLayout");
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton_About = new QPushButton(layoutWidget_3);
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
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/new/prefix1/images/about.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_About->setIcon(icon4);
        pushButton_About->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_About);

        pushButton_Skin = new QPushButton(layoutWidget_3);
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
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/new/prefix1/images/skin.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_Skin->setIcon(icon5);
        pushButton_Skin->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_Skin);

        pushButton_Close = new QPushButton(layoutWidget_3);
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
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/prefix1/images/quit.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        pushButton_Close->setIcon(icon6);
        pushButton_Close->setIconSize(QSize(32, 32));

        horizontalLayout->addWidget(pushButton_Close);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\346\220\234\347\264\242\346\255\214\346\233\262", nullptr));
        groupBox->setTitle(QString());
        pushButton_Search->setText(QCoreApplication::translate("Widget", "\346\220\234 \347\264\242...", nullptr));
#if QT_CONFIG(tooltip)
        pushButton_Front->setToolTip(QCoreApplication::translate("Widget", "\344\270\212\344\270\200\346\233\262", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_Front->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_Playpause->setToolTip(QCoreApplication::translate("Widget", "\346\222\255\346\224\276|\346\232\202\345\201\234", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_Playpause->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_Next->setToolTip(QCoreApplication::translate("Widget", "\344\270\213\344\270\200\346\233\262", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_Next->setText(QString());
#if QT_CONFIG(tooltip)
        pushButton_Loopplay->setToolTip(QCoreApplication::translate("Widget", "\345\276\252\347\216\257\346\222\255\346\224\276", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButton_Loopplay->setText(QString());
        label_Vop->setText(QCoreApplication::translate("Widget", "000", nullptr));
        lineEdit_Search->setText(QCoreApplication::translate("Widget", "\347\245\235\344\275\240\344\270\200\350\267\257\351\241\272\351\243\216", nullptr));
        pushButton_Name->setText(QCoreApplication::translate("Widget", "\346\220\234\347\264\242\346\255\214\346\233\262\345\220\215\347\247\260", nullptr));
        label_Time->setText(QCoreApplication::translate("Widget", "00:00", nullptr));
        groupBox_2->setTitle(QString());
        label_2->setText(QCoreApplication::translate("Widget", "\346\255\214\346\233\262\346\255\214\350\257\215", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\346\222\255\346\224\276\346\255\214\346\233\262\347\227\225\350\277\271", nullptr));
        pushButton_About->setText(QString());
        pushButton_Skin->setText(QString());
        pushButton_Close->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
