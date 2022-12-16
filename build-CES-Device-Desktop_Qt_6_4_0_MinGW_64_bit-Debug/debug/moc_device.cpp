/****************************************************************************
** Meta object code from reading C++ file 'device.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "C:/Users/croso/Downloads/team51/3004-Team-51/CES-Device/device.h"
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
    uint offsetsAndSizes[26];
    char stringdata0[7];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[16];
    char stringdata5[11];
    char stringdata6[14];
    char stringdata7[18];
    char stringdata8[16];
    char stringdata9[15];
    char stringdata10[20];
    char stringdata11[14];
    char stringdata12[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_Device_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_Device_t qt_meta_stringdata_Device = {
    {
        QT_MOC_LITERAL(0, 6),  // "Device"
        QT_MOC_LITERAL(7, 14),  // "batteryReduced"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 12),  // "powerSoftOff"
        QT_MOC_LITERAL(36, 15),  // "sessionFinished"
        QT_MOC_LITERAL(52, 10),  // "setBattery"
        QT_MOC_LITERAL(63, 13),  // "setConnection"
        QT_MOC_LITERAL(77, 17),  // "setCurrentSession"
        QT_MOC_LITERAL(95, 15),  // "setSessionGroup"
        QT_MOC_LITERAL(111, 14),  // "setSessionType"
        QT_MOC_LITERAL(126, 19),  // "setSessionIntensity"
        QT_MOC_LITERAL(146, 13),  // "reduceBattery"
        QT_MOC_LITERAL(160, 10)   // "endSession"
    },
    "Device",
    "batteryReduced",
    "",
    "powerSoftOff",
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
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    1 /* Public */,
       3,    0,   81,    2, 0x06,    2 /* Public */,
       4,    0,   82,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   83,    2, 0x0a,    4 /* Public */,
       6,    1,   86,    2, 0x0a,    6 /* Public */,
       7,    1,   89,    2, 0x0a,    8 /* Public */,
       8,    1,   92,    2, 0x0a,   10 /* Public */,
       9,    1,   95,    2, 0x0a,   12 /* Public */,
      10,    1,   98,    2, 0x0a,   14 /* Public */,
      11,    0,  101,    2, 0x0a,   16 /* Public */,
      12,    0,  102,    2, 0x0a,   17 /* Public */,

 // signals: parameters
    QMetaType::Void,
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
        // method 'powerSoftOff'
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
        case 1: _t->powerSoftOff(); break;
        case 2: _t->sessionFinished(); break;
        case 3: _t->setBattery((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->setConnection((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->setCurrentSession((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->setSessionGroup((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->setSessionType((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->setSessionIntensity((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->reduceBattery(); break;
        case 10: _t->endSession(); break;
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
            if (_t _q_method = &Device::powerSoftOff; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Device::*)();
            if (_t _q_method = &Device::sessionFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
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
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void Device::batteryReduced()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Device::powerSoftOff()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Device::sessionFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
