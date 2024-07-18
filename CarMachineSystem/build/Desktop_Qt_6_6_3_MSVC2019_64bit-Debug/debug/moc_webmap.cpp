/****************************************************************************
** Meta object code from reading C++ file 'webmap.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../webmap.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'webmap.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSWebmapENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSWebmapENDCLASS = QtMocHelpers::stringData(
    "Webmap",
    "release",
    "",
    "on_setCityBt_clicked",
    "on_startNavBt_clicked",
    "on_setStartPostionBt_clicked",
    "on_setEndPostionBt_clicked",
    "on_closeBt_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSWebmapENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[7];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[22];
    char stringdata5[29];
    char stringdata6[27];
    char stringdata7[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSWebmapENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSWebmapENDCLASS_t qt_meta_stringdata_CLASSWebmapENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "Webmap"
        QT_MOC_LITERAL(7, 7),  // "release"
        QT_MOC_LITERAL(15, 0),  // ""
        QT_MOC_LITERAL(16, 20),  // "on_setCityBt_clicked"
        QT_MOC_LITERAL(37, 21),  // "on_startNavBt_clicked"
        QT_MOC_LITERAL(59, 28),  // "on_setStartPostionBt_clicked"
        QT_MOC_LITERAL(88, 26),  // "on_setEndPostionBt_clicked"
        QT_MOC_LITERAL(115, 18)   // "on_closeBt_clicked"
    },
    "Webmap",
    "release",
    "",
    "on_setCityBt_clicked",
    "on_startNavBt_clicked",
    "on_setStartPostionBt_clicked",
    "on_setEndPostionBt_clicked",
    "on_closeBt_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSWebmapENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Webmap::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSWebmapENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSWebmapENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSWebmapENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Webmap, std::true_type>,
        // method 'release'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_setCityBt_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_startNavBt_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_setStartPostionBt_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_setEndPostionBt_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_closeBt_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Webmap::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Webmap *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->release(); break;
        case 1: _t->on_setCityBt_clicked(); break;
        case 2: _t->on_startNavBt_clicked(); break;
        case 3: _t->on_setStartPostionBt_clicked(); break;
        case 4: _t->on_setEndPostionBt_clicked(); break;
        case 5: _t->on_closeBt_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Webmap::*)();
            if (_t _q_method = &Webmap::release; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *Webmap::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Webmap::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSWebmapENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int Webmap::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void Webmap::release()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
