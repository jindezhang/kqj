/****************************************************************************
** Meta object code from reading C++ file 'windowselectforid.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "windowselectforid.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowselectforid.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_selectforid_t {
    QByteArrayData data[9];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_selectforid_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_selectforid_t qt_meta_stringdata_selectforid = {
    {
QT_MOC_LITERAL(0, 0, 11), // "selectforid"
QT_MOC_LITERAL(1, 12, 6), // "fanhui"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 9), // "bt_enable"
QT_MOC_LITERAL(4, 30, 24), // "on_bt_selectdate_clicked"
QT_MOC_LITERAL(5, 55, 16), // "on_cb_am_clicked"
QT_MOC_LITERAL(6, 72, 7), // "checked"
QT_MOC_LITERAL(7, 80, 16), // "on_cb_pm_clicked"
QT_MOC_LITERAL(8, 97, 16) // "on_cb_nm_clicked"

    },
    "selectforid\0fanhui\0\0bt_enable\0"
    "on_bt_selectdate_clicked\0on_cb_am_clicked\0"
    "checked\0on_cb_pm_clicked\0on_cb_nm_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_selectforid[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    1,   47,    2, 0x08 /* Private */,
       7,    1,   50,    2, 0x08 /* Private */,
       8,    1,   53,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::Bool,    6,

       0        // eod
};

void selectforid::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        selectforid *_t = static_cast<selectforid *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fanhui(); break;
        case 1: _t->bt_enable(); break;
        case 2: _t->on_bt_selectdate_clicked(); break;
        case 3: _t->on_cb_am_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->on_cb_pm_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_cb_nm_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
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
QT_END_MOC_NAMESPACE
