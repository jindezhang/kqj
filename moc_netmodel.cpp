/****************************************************************************
** Meta object code from reading C++ file 'netmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "netmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'netmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_netmodel_t {
    QByteArrayData data[17];
    char stringdata0[179];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_netmodel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_netmodel_t qt_meta_stringdata_netmodel = {
    {
QT_MOC_LITERAL(0, 0, 8), // "netmodel"
QT_MOC_LITERAL(1, 9, 10), // "sendStatus"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 4), // "data"
QT_MOC_LITERAL(4, 26, 10), // "Status_add"
QT_MOC_LITERAL(5, 37, 8), // "rule_sig"
QT_MOC_LITERAL(6, 46, 6), // "em_sig"
QT_MOC_LITERAL(7, 53, 10), // "config_sig"
QT_MOC_LITERAL(8, 64, 8), // "auth_sig"
QT_MOC_LITERAL(9, 73, 7), // "ems_sig"
QT_MOC_LITERAL(10, 81, 8), // "time_sig"
QT_MOC_LITERAL(11, 90, 8), // "over_sig"
QT_MOC_LITERAL(12, 99, 10), // "connect_ok"
QT_MOC_LITERAL(13, 110, 22), // "disconnect_from_server"
QT_MOC_LITERAL(14, 133, 9), // "read_data"
QT_MOC_LITERAL(15, 143, 13), // "connect_again"
QT_MOC_LITERAL(16, 157, 21) // "connect_to_server_suc"

    },
    "netmodel\0sendStatus\0\0data\0Status_add\0"
    "rule_sig\0em_sig\0config_sig\0auth_sig\0"
    "ems_sig\0time_sig\0over_sig\0connect_ok\0"
    "disconnect_from_server\0read_data\0"
    "connect_again\0connect_to_server_suc"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_netmodel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   84,    2, 0x06 /* Public */,
       4,    1,   87,    2, 0x06 /* Public */,
       5,    1,   90,    2, 0x06 /* Public */,
       6,    1,   93,    2, 0x06 /* Public */,
       7,    1,   96,    2, 0x06 /* Public */,
       8,    1,   99,    2, 0x06 /* Public */,
       9,    1,  102,    2, 0x06 /* Public */,
      10,    1,  105,    2, 0x06 /* Public */,
      11,    1,  108,    2, 0x06 /* Public */,
      12,    0,  111,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    0,  112,    2, 0x0a /* Public */,
      14,    0,  113,    2, 0x0a /* Public */,
      15,    0,  114,    2, 0x0a /* Public */,
      16,    0,  115,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void netmodel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        netmodel *_t = static_cast<netmodel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendStatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->Status_add((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->rule_sig((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->em_sig((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 4: _t->config_sig((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->auth_sig((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 6: _t->ems_sig((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 7: _t->time_sig((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 8: _t->over_sig((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 9: _t->connect_ok(); break;
        case 10: _t->disconnect_from_server(); break;
        case 11: _t->read_data(); break;
        case 12: _t->connect_again(); break;
        case 13: _t->connect_to_server_suc(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (netmodel::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&netmodel::sendStatus)) {
                *result = 0;
            }
        }
        {
            typedef void (netmodel::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&netmodel::Status_add)) {
                *result = 1;
            }
        }
        {
            typedef void (netmodel::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&netmodel::rule_sig)) {
                *result = 2;
            }
        }
        {
            typedef void (netmodel::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&netmodel::em_sig)) {
                *result = 3;
            }
        }
        {
            typedef void (netmodel::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&netmodel::config_sig)) {
                *result = 4;
            }
        }
        {
            typedef void (netmodel::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&netmodel::auth_sig)) {
                *result = 5;
            }
        }
        {
            typedef void (netmodel::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&netmodel::ems_sig)) {
                *result = 6;
            }
        }
        {
            typedef void (netmodel::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&netmodel::time_sig)) {
                *result = 7;
            }
        }
        {
            typedef void (netmodel::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&netmodel::over_sig)) {
                *result = 8;
            }
        }
        {
            typedef void (netmodel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&netmodel::connect_ok)) {
                *result = 9;
            }
        }
    }
}

const QMetaObject netmodel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_netmodel.data,
      qt_meta_data_netmodel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *netmodel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *netmodel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_netmodel.stringdata0))
        return static_cast<void*>(const_cast< netmodel*>(this));
    return QObject::qt_metacast(_clname);
}

int netmodel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 14;
    }
    return _id;
}

// SIGNAL 0
void netmodel::sendStatus(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void netmodel::Status_add(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void netmodel::rule_sig(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void netmodel::em_sig(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void netmodel::config_sig(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void netmodel::auth_sig(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void netmodel::ems_sig(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void netmodel::time_sig(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void netmodel::over_sig(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void netmodel::connect_ok()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
