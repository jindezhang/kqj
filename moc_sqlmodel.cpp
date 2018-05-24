/****************************************************************************
** Meta object code from reading C++ file 'sqlmodel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "sqlmodel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sqlmodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_sqlmodel_t {
    QByteArrayData data[15];
    char stringdata0[117];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_sqlmodel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_sqlmodel_t qt_meta_stringdata_sqlmodel = {
    {
QT_MOC_LITERAL(0, 0, 8), // "sqlmodel"
QT_MOC_LITERAL(1, 9, 7), // "sendNet"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 3), // "Net"
QT_MOC_LITERAL(4, 22, 4), // "data"
QT_MOC_LITERAL(5, 27, 12), // "sendEm_infos"
QT_MOC_LITERAL(6, 40, 8), // "Em_infos"
QT_MOC_LITERAL(7, 49, 11), // "sendEm_info"
QT_MOC_LITERAL(8, 61, 7), // "Em_info"
QT_MOC_LITERAL(9, 69, 8), // "sendRule"
QT_MOC_LITERAL(10, 78, 4), // "Rule"
QT_MOC_LITERAL(11, 83, 9), // "sendTable"
QT_MOC_LITERAL(12, 93, 4), // "time"
QT_MOC_LITERAL(13, 98, 13), // "sendAuthority"
QT_MOC_LITERAL(14, 112, 4) // "rfid"

    },
    "sqlmodel\0sendNet\0\0Net\0data\0sendEm_infos\0"
    "Em_infos\0sendEm_info\0Em_info\0sendRule\0"
    "Rule\0sendTable\0time\0sendAuthority\0"
    "rfid"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_sqlmodel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,
       5,    1,   47,    2, 0x06 /* Public */,
       7,    1,   50,    2, 0x06 /* Public */,
       9,    1,   53,    2, 0x06 /* Public */,
      11,    1,   56,    2, 0x06 /* Public */,
      13,    1,   59,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, 0x80000000 | 8,    4,
    QMetaType::Void, 0x80000000 | 10,    4,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   14,

       0        // eod
};

void sqlmodel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        sqlmodel *_t = static_cast<sqlmodel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendNet((*reinterpret_cast< Net(*)>(_a[1]))); break;
        case 1: _t->sendEm_infos((*reinterpret_cast< Em_infos(*)>(_a[1]))); break;
        case 2: _t->sendEm_info((*reinterpret_cast< Em_info(*)>(_a[1]))); break;
        case 3: _t->sendRule((*reinterpret_cast< Rule(*)>(_a[1]))); break;
        case 4: _t->sendTable((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 5: _t->sendAuthority((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (sqlmodel::*_t)(Net );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&sqlmodel::sendNet)) {
                *result = 0;
            }
        }
        {
            typedef void (sqlmodel::*_t)(Em_infos );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&sqlmodel::sendEm_infos)) {
                *result = 1;
            }
        }
        {
            typedef void (sqlmodel::*_t)(Em_info );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&sqlmodel::sendEm_info)) {
                *result = 2;
            }
        }
        {
            typedef void (sqlmodel::*_t)(Rule );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&sqlmodel::sendRule)) {
                *result = 3;
            }
        }
        {
            typedef void (sqlmodel::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&sqlmodel::sendTable)) {
                *result = 4;
            }
        }
        {
            typedef void (sqlmodel::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&sqlmodel::sendAuthority)) {
                *result = 5;
            }
        }
    }
}

const QMetaObject sqlmodel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_sqlmodel.data,
      qt_meta_data_sqlmodel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *sqlmodel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *sqlmodel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_sqlmodel.stringdata0))
        return static_cast<void*>(const_cast< sqlmodel*>(this));
    return QObject::qt_metacast(_clname);
}

int sqlmodel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void sqlmodel::sendNet(Net _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void sqlmodel::sendEm_infos(Em_infos _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void sqlmodel::sendEm_info(Em_info _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void sqlmodel::sendRule(Rule _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void sqlmodel::sendTable(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void sqlmodel::sendAuthority(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_END_MOC_NAMESPACE
