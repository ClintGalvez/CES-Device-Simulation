/****************************************************************************
** Meta object code from reading C++ file 'device.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../CES-Device/device.h"
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'device.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_Device_t {
    uint offsetsAndSizes[24];
    char stringdata0[7];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[11];
    char stringdata5[14];
    char stringdata6[18];
    char stringdata7[16];
    char stringdata8[15];
    char stringdata9[20];
    char stringdata10[14];
    char stringdata11[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Device_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Device_t qt_meta_stringdata_Device = {
    {
        QT_MOC_LITERAL(0, 6),  // "Device"
        QT_MOC_LITERAL(7, 14),  // "batteryReduced"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 15),  // "sessionFinished"
        QT_MOC_LITERAL(39, 10),  // "setBattery"
        QT_MOC_LITERAL(50, 13),  // "setConnection"
        QT_MOC_LITERAL(64, 17),  // "setCurrentSession"
        QT_MOC_LITERAL(82, 15),  // "setSessionGroup"
        QT_MOC_LITERAL(98, 14),  // "setSessionType"
        QT_MOC_LITERAL(113, 19),  // "setSessionIntensity"
        QT_MOC_LITERAL(133, 13),  // "reduceBattery"
        QT_MOC_LITERAL(147, 10)   // "endSession"
    },
    "Device",
    "batteryReduced",
    "",
    "sessionFinished",
    "setBattery",
    "setConnection",
    "setCurrentSession",
    "setSessionGroup",
    "setSessionType",
    "setSessionIntensity",
    "reduceBattery",
    "endSession"
};
#undef QT_MOC_LITERAL
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_Device[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    1 /* Public */,
       3,    0,   75,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   76,    2, 0x0a,    3 /* Public */,
       5,    1,   79,    2, 0x0a,    5 /* Public */,
       6,    1,   82,    2, 0x0a,    7 /* Public */,
       7,    1,   85,    2, 0x0a,    9 /* Public */,
       8,    1,   88,    2, 0x0a,   11 /* Public */,
       9,    1,   91,    2, 0x0a,   13 /* Public */,
      10,    0,   94,    2, 0x0a,   15 /* Public */,
      11,    0,   95,    2, 0x0a,   16 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Device::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_Device.offsetsAndSizes,
    qt_meta_data_Device,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_Device_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Device, std::true_type>,
        // method 'batteryReduced'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sessionFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setBattery'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setCurrentSession'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setSessionGroup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setSessionType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setSessionIntensity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'reduceBattery'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'endSession'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Device::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Device *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->batteryReduced(); break;
        case 1: _t->sessionFinished(); break;
        case 2: _t->setBattery((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->setConnection((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->setCurrentSession((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->setSessionGroup((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->setSessionType((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->setSessionIntensity((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->reduceBattery(); break;
        case 9: _t->endSession(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Device::*)();
            if (_t _q_method = &Device::batteryReduced; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (_t _q_method = &Device::sessionFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *Device::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Device::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Device.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Device::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void Device::batteryReduced()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Device::sessionFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
