/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
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
#error "The header file 'mainwindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "onMusicButtonClicked",
    "",
    "onGPSButtonClicked",
    "onPaidButtonClicked",
    "onRescueButtonClicked",
    "onSeatButtonClicked",
    "onBackCarButtonClicked",
    "myplayVideo"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[11];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[20];
    char stringdata5[22];
    char stringdata6[20];
    char stringdata7[23];
    char stringdata8[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 20),  // "onMusicButtonClicked"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 18),  // "onGPSButtonClicked"
        QT_MOC_LITERAL(52, 19),  // "onPaidButtonClicked"
        QT_MOC_LITERAL(72, 21),  // "onRescueButtonClicked"
        QT_MOC_LITERAL(94, 19),  // "onSeatButtonClicked"
        QT_MOC_LITERAL(114, 22),  // "onBackCarButtonClicked"
        QT_MOC_LITERAL(137, 11)   // "myplayVideo"
    },
    "MainWindow",
    "onMusicButtonClicked",
    "",
    "onGPSButtonClicked",
    "onPaidButtonClicked",
    "onRescueButtonClicked",
    "onSeatButtonClicked",
    "onBackCarButtonClicked",
    "myplayVideo"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x09,    1 /* Protected */,
       3,    0,   57,    2, 0x09,    2 /* Protected */,
       4,    0,   58,    2, 0x09,    3 /* Protected */,
       5,    0,   59,    2, 0x09,    4 /* Protected */,
       6,    0,   60,    2, 0x09,    5 /* Protected */,
       7,    0,   61,    2, 0x09,    6 /* Protected */,
       8,    0,   62,    2, 0x09,    7 /* Protected */,

 // slots: parameters
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
        // method 'onBackCarButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'myplayVideo'
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
        case 0: _t->onMusicButtonClicked(); break;
        case 1: _t->onGPSButtonClicked(); break;
        case 2: _t->onPaidButtonClicked(); break;
        case 3: _t->onRescueButtonClicked(); break;
        case 4: _t->onSeatButtonClicked(); break;
        case 5: _t->onBackCarButtonClicked(); break;
        case 6: _t->myplayVideo(); break;
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
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
