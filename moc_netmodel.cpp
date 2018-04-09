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
    QByteArrayData data[9];
    char stringdata0[106];
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
QT_MOC_LITERAL(4, 26, 10), // "connect_ok"
QT_MOC_LITERAL(5, 37, 22), // "disconnect_from_server"
QT_MOC_LITERAL(6, 60, 9), // "read_data"
QT_MOC_LITERAL(7, 70, 13), // "connect_again"
QT_MOC_LITERAL(8, 84, 21) // "connect_to_server_suc"

    },
    "netmodel\0sendStatus\0\0data\0connect_ok\0"
    "disconnect_from_server\0read_data\0"
    "connect_again\0connect_to_server_suc"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_netmodel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       4,    0,   47,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   48,    2, 0x0a /* Public */,
       6,    0,   49,    2, 0x0a /* Public */,
       7,    0,   50,    2, 0x0a /* Public */,
       8,    0,   51,    2, 0x0a /* Public */,

 // signals: parameters
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
        case 1: _t->connect_ok(); break;
        case 2: _t->disconnect_from_server(); break;
        case 3: _t->read_data(); break;
        case 4: _t->connect_again(); break;
        case 5: _t->connect_to_server_suc(); break;
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
            typedef void (netmodel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&netmodel::connect_ok)) {
                *result = 1;
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
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
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
void netmodel::connect_ok()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
