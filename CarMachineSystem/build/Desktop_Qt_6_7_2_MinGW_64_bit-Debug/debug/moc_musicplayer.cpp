/****************************************************************************
** Meta object code from reading C++ file 'musicplayer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../musicplayer.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'musicplayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.2. It"
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

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMusicPlayerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMusicPlayerENDCLASS = QtMocHelpers::stringData(
    "MusicPlayer",
    "release",
    "",
    "do_stateChanged",
    "QMediaPlayer::PlaybackState",
    "state",
    "do_sourceChanged",
    "media",
    "do_durationChanged",
    "duration",
    "do_positionChanged",
    "position",
    "do_metaDataChanged",
    "on_btnAdd_clicked",
    "on_btnPlay_clicked",
    "on_btnPause_clicked",
    "on_btnStop_clicked",
    "on_listWidget_doubleClicked",
    "QModelIndex",
    "index",
    "on_btnClear_clicked",
    "on_sliderVolumn_valueChanged",
    "value",
    "on_btnSound_clicked",
    "on_sliderPosition_valueChanged",
    "on_btnPrevious_clicked",
    "on_btnNext_clicked",
    "on_btnLoop_clicked",
    "checked",
    "on_doubleSpinBox_valueChanged",
    "arg1",
    "on_btnRemove_clicked",
    "on_btnClose_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMusicPlayerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  140,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,  141,    2, 0x08,    2 /* Private */,
       6,    1,  144,    2, 0x08,    4 /* Private */,
       8,    1,  147,    2, 0x08,    6 /* Private */,
      10,    1,  150,    2, 0x08,    8 /* Private */,
      12,    0,  153,    2, 0x08,   10 /* Private */,
      13,    0,  154,    2, 0x08,   11 /* Private */,
      14,    0,  155,    2, 0x08,   12 /* Private */,
      15,    0,  156,    2, 0x08,   13 /* Private */,
      16,    0,  157,    2, 0x08,   14 /* Private */,
      17,    1,  158,    2, 0x08,   15 /* Private */,
      20,    0,  161,    2, 0x08,   17 /* Private */,
      21,    1,  162,    2, 0x08,   18 /* Private */,
      23,    0,  165,    2, 0x08,   20 /* Private */,
      24,    1,  166,    2, 0x08,   21 /* Private */,
      25,    0,  169,    2, 0x08,   23 /* Private */,
      26,    0,  170,    2, 0x08,   24 /* Private */,
      27,    1,  171,    2, 0x08,   25 /* Private */,
      29,    1,  174,    2, 0x08,   27 /* Private */,
      31,    0,  177,    2, 0x08,   29 /* Private */,
      32,    0,  178,    2, 0x08,   30 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QUrl,    7,
    QMetaType::Void, QMetaType::LongLong,    9,
    QMetaType::Void, QMetaType::LongLong,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   22,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   28,
    QMetaType::Void, QMetaType::Double,   30,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MusicPlayer::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSMusicPlayerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMusicPlayerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMusicPlayerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MusicPlayer, std::true_type>,
        // method 'release'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'do_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMediaPlayer::PlaybackState, std::false_type>,
        // method 'do_sourceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'do_durationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'do_positionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'do_metaDataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnAdd_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnPlay_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnPause_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnStop_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_listWidget_doubleClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'on_btnClear_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sliderVolumn_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_btnSound_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_sliderPosition_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_btnPrevious_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnNext_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnLoop_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_doubleSpinBox_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        // method 'on_btnRemove_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnClose_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MusicPlayer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MusicPlayer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->release(); break;
        case 1: _t->do_stateChanged((*reinterpret_cast< std::add_pointer_t<QMediaPlayer::PlaybackState>>(_a[1]))); break;
        case 2: _t->do_sourceChanged((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 3: _t->do_durationChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 4: _t->do_positionChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 5: _t->do_metaDataChanged(); break;
        case 6: _t->on_btnAdd_clicked(); break;
        case 7: _t->on_btnPlay_clicked(); break;
        case 8: _t->on_btnPause_clicked(); break;
        case 9: _t->on_btnStop_clicked(); break;
        case 10: _t->on_listWidget_doubleClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 11: _t->on_btnClear_clicked(); break;
        case 12: _t->on_sliderVolumn_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->on_btnSound_clicked(); break;
        case 14: _t->on_sliderPosition_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->on_btnPrevious_clicked(); break;
        case 16: _t->on_btnNext_clicked(); break;
        case 17: _t->on_btnLoop_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 18: _t->on_doubleSpinBox_valueChanged((*reinterpret_cast< std::add_pointer_t<double>>(_a[1]))); break;
        case 19: _t->on_btnRemove_clicked(); break;
        case 20: _t->on_btnClose_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MusicPlayer::*)();
            if (_t _q_method = &MusicPlayer::release; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *MusicPlayer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MusicPlayer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMusicPlayerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MusicPlayer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void MusicPlayer::release()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
