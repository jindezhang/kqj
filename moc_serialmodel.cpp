/****************************************************************************
** Meta object code from reading C++ file 'serialmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "serialmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'serialmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SerialModel_t {
    QByteArrayData data[5];
    char stringdata0[38];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialModel_t qt_meta_stringdata_SerialModel = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SerialModel"
QT_MOC_LITERAL(1, 12, 9), // "rfid_data"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 4), // "data"
QT_MOC_LITERAL(4, 28, 9) // "read_data"

    },
    "SerialModel\0rfid_data\0\0data\0read_data"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   27,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void SerialModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SerialModel *_t = static_cast<SerialModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->rfid_data((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 1: _t->read_data(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SerialModel::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialModel::rfid_data)) {
                *result = 0;
            }
        }
    }
}

const QMetaObject SerialModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_SerialModel.data,
      qt_meta_data_SerialModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SerialModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SerialModel.stringdata0))
        return static_cast<void*>(const_cast< SerialModel*>(this));
    return QObject::qt_metacast(_clname);
}

int SerialModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void SerialModel::rfid_data(QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
