/****************************************************************************
** Meta object code from reading C++ file 'windowshezhi.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "windowshezhi.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowshezhi.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_windowshezhi_t {
    QByteArrayData data[12];
    char stringdata0[153];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_windowshezhi_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_windowshezhi_t qt_meta_stringdata_windowshezhi = {
    {
QT_MOC_LITERAL(0, 0, 12), // "windowshezhi"
QT_MOC_LITERAL(1, 13, 6), // "fanhui"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 11), // "set_Enabled"
QT_MOC_LITERAL(4, 33, 1), // "b"
QT_MOC_LITERAL(5, 35, 11), // "update_time"
QT_MOC_LITERAL(6, 47, 4), // "json"
QT_MOC_LITERAL(7, 52, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(8, 76, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(9, 98, 19), // "on_bt_reset_clicked"
QT_MOC_LITERAL(10, 118, 10), // "update_out"
QT_MOC_LITERAL(11, 129, 23) // "on_pushButton_3_clicked"

    },
    "windowshezhi\0fanhui\0\0set_Enabled\0b\0"
    "update_time\0json\0on_pushButton_2_clicked\0"
    "on_pushButton_clicked\0on_bt_reset_clicked\0"
    "update_out\0on_pushButton_3_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_windowshezhi[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x0a /* Public */,
       3,    1,   55,    2, 0x0a /* Public */,
       5,    1,   58,    2, 0x0a /* Public */,
       7,    0,   61,    2, 0x08 /* Private */,
       8,    0,   62,    2, 0x08 /* Private */,
       9,    0,   63,    2, 0x08 /* Private */,
      10,    0,   64,    2, 0x08 /* Private */,
      11,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void windowshezhi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        windowshezhi *_t = static_cast<windowshezhi *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fanhui(); break;
        case 1: _t->set_Enabled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->update_time((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->on_pushButton_2_clicked(); break;
        case 4: _t->on_pushButton_clicked(); break;
        case 5: _t->on_bt_reset_clicked(); break;
        case 6: _t->update_out(); break;
        case 7: _t->on_pushButton_3_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject windowshezhi::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_windowshezhi.data,
      qt_meta_data_windowshezhi,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *windowshezhi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *windowshezhi::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_windowshezhi.stringdata0))
        return static_cast<void*>(const_cast< windowshezhi*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int windowshezhi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
