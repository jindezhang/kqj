/****************************************************************************
** Meta object code from reading C++ file 'first.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "first.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'first.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_first_t {
    QByteArrayData data[12];
    char stringdata0[107];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_first_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_first_t qt_meta_stringdata_first = {
    {
QT_MOC_LITERAL(0, 0, 5), // "first"
QT_MOC_LITERAL(1, 6, 3), // "del"
QT_MOC_LITERAL(2, 10, 0), // ""
QT_MOC_LITERAL(3, 11, 21), // "on_bt_connect_clicked"
QT_MOC_LITERAL(4, 33, 14), // "net_connect_ok"
QT_MOC_LITERAL(5, 48, 11), // "net_timeout"
QT_MOC_LITERAL(6, 60, 8), // "showdata"
QT_MOC_LITERAL(7, 69, 3), // "Net"
QT_MOC_LITERAL(8, 73, 4), // "data"
QT_MOC_LITERAL(9, 78, 18), // "on_bt_jump_clicked"
QT_MOC_LITERAL(10, 97, 4), // "init"
QT_MOC_LITERAL(11, 102, 4) // "json"

    },
    "first\0del\0\0on_bt_connect_clicked\0"
    "net_connect_ok\0net_timeout\0showdata\0"
    "Net\0data\0on_bt_jump_clicked\0init\0json"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_first[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    1,   53,    2, 0x08 /* Private */,
       9,    0,   56,    2, 0x08 /* Private */,
      10,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,

       0        // eod
};

void first::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        first *_t = static_cast<first *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->del(); break;
        case 1: _t->on_bt_connect_clicked(); break;
        case 2: _t->net_connect_ok(); break;
        case 3: _t->net_timeout(); break;
        case 4: _t->showdata((*reinterpret_cast< Net(*)>(_a[1]))); break;
        case 5: _t->on_bt_jump_clicked(); break;
        case 6: _t->init((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject first::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_first.data,
      qt_meta_data_first,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *first::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *first::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_first.stringdata0))
        return static_cast<void*>(const_cast< first*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int first::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
