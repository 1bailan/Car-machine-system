/****************************************************************************
** Meta object code from reading C++ file 'musicbt.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../musicbt.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'musicbt.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMusicBtENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMusicBtENDCLASS = QtMocHelpers::stringData(
    "MusicBt",
    "pressed",
    "",
    "release"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMusicBtENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    1 /* Public */,
       3,    0,   27,    2, 0x06,    2 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MusicBt::staticMetaObject = { {
    QMetaObject::SuperData::link<AppBt::staticMetaObject>(),
    qt_meta_stringdata_CLASSMusicBtENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMusicBtENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMusicBtENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MusicBt, std::true_type>,
        // method 'pressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'release'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MusicBt::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MusicBt *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pressed(); break;
        case 1: _t->release(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MusicBt::*)();
            if (_t _q_method = &MusicBt::pressed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (MusicBt::*)();
            if (_t _q_method = &MusicBt::release; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *MusicBt::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MusicBt::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMusicBtENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AppBt::qt_metacast(_clname);
}

int MusicBt::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AppBt::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void MusicBt::pressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void MusicBt::release()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
