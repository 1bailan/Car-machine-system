/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "onCustomButtonClicked",
    "",
    "onMusicButtonClicked",
    "onGPSButtonClicked",
    "onPaidButtonClicked",
    "onRescueButtonClicked",
    "onSeatButtonClicked",
    "onVoiceButtonClicked",
    "onBackCarButtonClicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x09,    1 /* Protected */,
       3,    0,   63,    2, 0x09,    2 /* Protected */,
       4,    0,   64,    2, 0x09,    3 /* Protected */,
       5,    0,   65,    2, 0x09,    4 /* Protected */,
       6,    0,   66,    2, 0x09,    5 /* Protected */,
       7,    0,   67,    2, 0x09,    6 /* Protected */,
       8,    0,   68,    2, 0x09,    7 /* Protected */,
       9,    0,   69,    2, 0x09,    8 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'onCustomButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMusicButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onGPSButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onPaidButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRescueButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSeatButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onVoiceButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onBackCarButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onCustomButtonClicked(); break;
        case 1: _t->onMusicButtonClicked(); break;
        case 2: _t->onGPSButtonClicked(); break;
        case 3: _t->onPaidButtonClicked(); break;
        case 4: _t->onRescueButtonClicked(); break;
        case 5: _t->onSeatButtonClicked(); break;
        case 6: _t->onVoiceButtonClicked(); break;
        case 7: _t->onBackCarButtonClicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
