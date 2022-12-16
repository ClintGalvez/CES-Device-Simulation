/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "C:/Users/croso/Downloads/team51/3004-Team-51/CES-Device/mainwindow.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
namespace {
struct qt_meta_stringdata_MainWindow_t {
    uint offsetsAndSizes[38];
    char stringdata0[11];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[3];
    char stringdata5[5];
    char stringdata6[5];
    char stringdata7[6];
    char stringdata8[11];
    char stringdata9[7];
    char stringdata10[8];
    char stringdata11[7];
    char stringdata12[12];
    char stringdata13[8];
    char stringdata14[16];
    char stringdata15[16];
    char stringdata16[14];
    char stringdata17[17];
    char stringdata18[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_MainWindow_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 7),  // "startup"
        QT_MOC_LITERAL(19, 0),  // ""
        QT_MOC_LITERAL(20, 11),  // "loadStartup"
        QT_MOC_LITERAL(32, 2),  // "up"
        QT_MOC_LITERAL(35, 4),  // "down"
        QT_MOC_LITERAL(40, 4),  // "left"
        QT_MOC_LITERAL(45, 5),  // "right"
        QT_MOC_LITERAL(51, 10),  // "returnMain"
        QT_MOC_LITERAL(62, 6),  // "record"
        QT_MOC_LITERAL(69, 7),  // "history"
        QT_MOC_LITERAL(77, 6),  // "select"
        QT_MOC_LITERAL(84, 11),  // "togglePower"
        QT_MOC_LITERAL(96, 7),  // "softOff"
        QT_MOC_LITERAL(104, 15),  // "softOffComplete"
        QT_MOC_LITERAL(120, 15),  // "sessionFinished"
        QT_MOC_LITERAL(136, 13),  // "updateBattery"
        QT_MOC_LITERAL(150, 16),  // "updateConnection"
        QT_MOC_LITERAL(167, 18)   // "updateStatusBarGUI"
    },
    "MainWindow",
    "startup",
    "",
    "loadStartup",
    "up",
    "down",
    "left",
    "right",
    "returnMain",
    "record",
    "history",
    "select",
    "togglePower",
    "softOff",
    "softOffComplete",
    "sessionFinished",
    "updateBattery",
    "updateConnection",
    "updateStatusBarGUI"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  116,    2, 0x0a,    1 /* Public */,
       3,    0,  119,    2, 0x0a,    3 /* Public */,
       4,    0,  120,    2, 0x0a,    4 /* Public */,
       5,    0,  121,    2, 0x0a,    5 /* Public */,
       6,    0,  122,    2, 0x0a,    6 /* Public */,
       7,    0,  123,    2, 0x0a,    7 /* Public */,
       8,    0,  124,    2, 0x0a,    8 /* Public */,
       9,    0,  125,    2, 0x0a,    9 /* Public */,
      10,    0,  126,    2, 0x0a,   10 /* Public */,
      11,    0,  127,    2, 0x0a,   11 /* Public */,
      12,    0,  128,    2, 0x0a,   12 /* Public */,
      13,    0,  129,    2, 0x0a,   13 /* Public */,
      14,    0,  130,    2, 0x0a,   14 /* Public */,
      15,    0,  131,    2, 0x0a,   15 /* Public */,
      16,    1,  132,    2, 0x0a,   16 /* Public */,
      17,    1,  135,    2, 0x0a,   18 /* Public */,
      18,    0,  138,    2, 0x0a,   20 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.offsetsAndSizes,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_MainWindow_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'startup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'loadStartup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'up'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'down'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'left'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'right'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'returnMain'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'record'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'history'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'select'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'togglePower'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'softOff'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'softOffComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sessionFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateBattery'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'updateStatusBarGUI'
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
        case 0: _t->startup((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->loadStartup(); break;
        case 2: _t->up(); break;
        case 3: _t->down(); break;
        case 4: _t->left(); break;
        case 5: _t->right(); break;
        case 6: _t->returnMain(); break;
        case 7: _t->record(); break;
        case 8: _t->history(); break;
        case 9: _t->select(); break;
        case 10: _t->togglePower(); break;
        case 11: _t->softOff(); break;
        case 12: _t->softOffComplete(); break;
        case 13: _t->sessionFinished(); break;
        case 14: _t->updateBattery((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->updateConnection((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->updateStatusBarGUI(); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
