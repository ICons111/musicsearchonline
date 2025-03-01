/****************************************************************************
** Meta object code from reading C++ file 'main_widget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../main_widget.h"
#include <QtNetwork/QSslError>
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'main_widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {
struct qt_meta_tag_ZN11Main_WidgetE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN11Main_WidgetE = QtMocHelpers::stringData(
    "Main_Widget",
    "finish",
    "",
    "lyricShow",
    "on_pushButton_Skin_clicked",
    "on_pushButton_About_clicked",
    "on_pushButton_Search_clicked",
    "on_VopSlider_valueChanged",
    "value",
    "on_pushButton_Front_clicked",
    "on_pushButton_Playpause_clicked",
    "on_pushButton_Next_clicked",
    "onMediaStatusChanged",
    "QMediaPlayer::MediaStatus",
    "status",
    "on_loopbox_checkStateChanged",
    "Qt::CheckState",
    "checed",
    "on_progressSlider_valueChanged",
    "on_progressSlider_sliderPressed",
    "on_progressSlider_sliderReleased",
    "updateDuration",
    "netReply",
    "QNetworkReply*",
    "lyricTextShow",
    "playSearchMusic",
    "playHistoryMusic",
    "backgroundtodefault",
    "backgroundtoSetting",
    "on_pushButton_Min_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN11Main_WidgetE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  146,    2, 0x06,    1 /* Public */,
       3,    1,  149,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,  152,    2, 0x08,    5 /* Private */,
       5,    0,  153,    2, 0x08,    6 /* Private */,
       6,    0,  154,    2, 0x08,    7 /* Private */,
       7,    1,  155,    2, 0x08,    8 /* Private */,
       9,    0,  158,    2, 0x08,   10 /* Private */,
      10,    0,  159,    2, 0x08,   11 /* Private */,
      11,    0,  160,    2, 0x08,   12 /* Private */,
      12,    1,  161,    2, 0x08,   13 /* Private */,
      15,    1,  164,    2, 0x08,   15 /* Private */,
      18,    1,  167,    2, 0x08,   17 /* Private */,
      19,    0,  170,    2, 0x08,   19 /* Private */,
      20,    0,  171,    2, 0x08,   20 /* Private */,
      21,    1,  172,    2, 0x08,   21 /* Private */,
      22,    1,  175,    2, 0x08,   23 /* Private */,
      24,    1,  178,    2, 0x08,   25 /* Private */,
      25,    0,  181,    2, 0x08,   27 /* Private */,
      26,    0,  182,    2, 0x08,   28 /* Private */,
      27,    0,  183,    2, 0x08,   29 /* Private */,
      28,    0,  184,    2, 0x08,   30 /* Private */,
      29,    0,  185,    2, 0x08,   31 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong,    2,
    QMetaType::Void, 0x80000000 | 23,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Main_Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_ZN11Main_WidgetE.offsetsAndSizes,
    qt_meta_data_ZN11Main_WidgetE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN11Main_WidgetE_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Main_Widget, std::true_type>,
        // method 'finish'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        // method 'lyricShow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'on_pushButton_Skin_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_About_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_Search_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_VopSlider_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pushButton_Front_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_Playpause_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_Next_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMediaStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMediaPlayer::MediaStatus, std::false_type>,
        // method 'on_loopbox_checkStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Qt::CheckState &, std::false_type>,
        // method 'on_progressSlider_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_progressSlider_sliderPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_progressSlider_sliderReleased'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateDuration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'netReply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'lyricTextShow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'playSearchMusic'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'playHistoryMusic'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'backgroundtodefault'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'backgroundtoSetting'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButton_Min_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Main_Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Main_Widget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->finish((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 1: _t->lyricShow((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->on_pushButton_Skin_clicked(); break;
        case 3: _t->on_pushButton_About_clicked(); break;
        case 4: _t->on_pushButton_Search_clicked(); break;
        case 5: _t->on_VopSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->on_pushButton_Front_clicked(); break;
        case 7: _t->on_pushButton_Playpause_clicked(); break;
        case 8: _t->on_pushButton_Next_clicked(); break;
        case 9: _t->onMediaStatusChanged((*reinterpret_cast< std::add_pointer_t<QMediaPlayer::MediaStatus>>(_a[1]))); break;
        case 10: _t->on_loopbox_checkStateChanged((*reinterpret_cast< std::add_pointer_t<Qt::CheckState>>(_a[1]))); break;
        case 11: _t->on_progressSlider_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 12: _t->on_progressSlider_sliderPressed(); break;
        case 13: _t->on_progressSlider_sliderReleased(); break;
        case 14: _t->updateDuration((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 15: _t->netReply((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 16: _t->lyricTextShow((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 17: _t->playSearchMusic(); break;
        case 18: _t->playHistoryMusic(); break;
        case 19: _t->backgroundtodefault(); break;
        case 20: _t->backgroundtoSetting(); break;
        case 21: _t->on_pushButton_Min_clicked(); break;
        default: ;
        }
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (Main_Widget::*)(QByteArray );
            if (_q_method_type _q_method = &Main_Widget::finish; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (Main_Widget::*)(QString );
            if (_q_method_type _q_method = &Main_Widget::lyricShow; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *Main_Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Main_Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN11Main_WidgetE.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Main_Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void Main_Widget::finish(QByteArray _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Main_Widget::lyricShow(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
