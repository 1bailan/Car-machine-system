/****************************************************************************
** Meta object code from reading C++ file 'musicplayer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../musicplayer.h"
#include <QtGui/qtextcursor.h>
#include <QtGui/qscreen.h>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'musicplayer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
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
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMusicPlayerENDCLASS_t {
    uint offsetsAndSizes[66];
    char stringdata0[12];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[28];
    char stringdata5[6];
    char stringdata6[17];
    char stringdata7[6];
    char stringdata8[19];
    char stringdata9[9];
    char stringdata10[19];
    char stringdata11[9];
    char stringdata12[19];
    char stringdata13[18];
    char stringdata14[19];
    char stringdata15[20];
    char stringdata16[19];
    char stringdata17[28];
    char stringdata18[12];
    char stringdata19[6];
    char stringdata20[20];
    char stringdata21[29];
    char stringdata22[6];
    char stringdata23[20];
    char stringdata24[31];
    char stringdata25[23];
    char stringdata26[19];
    char stringdata27[19];
    char stringdata28[8];
    char stringdata29[30];
    char stringdata30[5];
    char stringdata31[21];
    char stringdata32[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMusicPlayerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMusicPlayerENDCLASS_t qt_meta_stringdata_CLASSMusicPlayerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "MusicPlayer"
        QT_MOC_LITERAL(12, 7),  // "release"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 15),  // "do_stateChanged"
        QT_MOC_LITERAL(37, 27),  // "QMediaPlayer::PlaybackState"
        QT_MOC_LITERAL(65, 5),  // "state"
        QT_MOC_LITERAL(71, 16),  // "do_sourceChanged"
        QT_MOC_LITERAL(88, 5),  // "media"
        QT_MOC_LITERAL(94, 18),  // "do_durationChanged"
        QT_MOC_LITERAL(113, 8),  // "duration"
        QT_MOC_LITERAL(122, 18),  // "do_positionChanged"
        QT_MOC_LITERAL(141, 8),  // "position"
        QT_MOC_LITERAL(150, 18),  // "do_metaDataChanged"
        QT_MOC_LITERAL(169, 17),  // "on_btnAdd_clicked"
        QT_MOC_LITERAL(187, 18),  // "on_btnPlay_clicked"
        QT_MOC_LITERAL(206, 19),  // "on_btnPause_clicked"
        QT_MOC_LITERAL(226, 18),  // "on_btnStop_clicked"
        QT_MOC_LITERAL(245, 27),  // "on_listWidget_doubleClicked"
        QT_MOC_LITERAL(273, 11),  // "QModelIndex"
        QT_MOC_LITERAL(285, 5),  // "index"
        QT_MOC_LITERAL(291, 19),  // "on_btnClear_clicked"
        QT_MOC_LITERAL(311, 28),  // "on_sliderVolumn_valueChanged"
        QT_MOC_LITERAL(340, 5),  // "value"
        QT_MOC_LITERAL(346, 19),  // "on_btnSound_clicked"
        QT_MOC_LITERAL(366, 30),  // "on_sliderPosition_valueChanged"
        QT_MOC_LITERAL(397, 22),  // "on_btnPrevious_clicked"
        QT_MOC_LITERAL(420, 18),  // "on_btnNext_clicked"
        QT_MOC_LITERAL(439, 18),  // "on_btnLoop_clicked"
        QT_MOC_LITERAL(458, 7),  // "checked"
        QT_MOC_LITERAL(466, 29),  // "on_doubleSpinBox_valueChanged"
        QT_MOC_LITERAL(496, 4),  // "arg1"
        QT_MOC_LITERAL(501, 20),  // "on_btnRemove_clicked"
        QT_MOC_LITERAL(522, 19)   // "on_btnClose_clicked"
    },
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
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
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
