/****************************************************************************
** Meta object code from reading C++ file 'selectforid.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "selectforid.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'selectforid.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_selectforid_t {
    QByteArrayData data[6];
    char stringdata0[78];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_selectforid_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_selectforid_t qt_meta_stringdata_selectforid = {
    {
QT_MOC_LITERAL(0, 0, 11), // "selectforid"
QT_MOC_LITERAL(1, 12, 8), // "myupdate"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 20), // "on_bt_fanhui_clicked"
QT_MOC_LITERAL(4, 43, 9), // "bt_enable"
QT_MOC_LITERAL(5, 53, 24) // "on_bt_selectdate_clicked"

    },
    "selectforid\0myupdate\0\0on_bt_fanhui_clicked\0"
    "bt_enable\0on_bt_selectdate_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_selectforid[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    0,   35,    2, 0x08 /* Private */,
       4,    0,   36,    2, 0x08 /* Private */,
       5,    0,   37,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void selectforid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        selectforid *_t = static_cast<selectforid *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->myupdate(); break;
        case 1: _t->on_bt_fanhui_clicked(); break;
        case 2: _t->bt_enable(); break;
        case 3: _t->on_bt_selectdate_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject selectforid::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_selectforid.data,
      qt_meta_data_selectforid,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *selectforid::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *selectforid::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_selectforid.stringdata0))
        return static_cast<void*>(const_cast< selectforid*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int selectforid::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
