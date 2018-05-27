/****************************************************************************
** Meta object code from reading C++ file 'windowadd.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "windowadd.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowadd.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_windowadd_t {
    QByteArrayData data[16];
    char stringdata0[170];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_windowadd_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_windowadd_t qt_meta_stringdata_windowadd = {
    {
QT_MOC_LITERAL(0, 0, 9), // "windowadd"
QT_MOC_LITERAL(1, 10, 6), // "fanhui"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 9), // "addstatus"
QT_MOC_LITERAL(4, 28, 6), // "status"
QT_MOC_LITERAL(5, 35, 8), // "get_rfid"
QT_MOC_LITERAL(6, 44, 4), // "rfid"
QT_MOC_LITERAL(7, 49, 7), // "set_add"
QT_MOC_LITERAL(8, 57, 1), // "b"
QT_MOC_LITERAL(9, 59, 5), // "bp_ok"
QT_MOC_LITERAL(10, 65, 5), // "bp_no"
QT_MOC_LITERAL(11, 71, 10), // "beep_close"
QT_MOC_LITERAL(12, 82, 23), // "on_pushButton_2_clicked"
QT_MOC_LITERAL(13, 106, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(14, 128, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(15, 152, 17) // "on_bt_end_clicked"

    },
    "windowadd\0fanhui\0\0addstatus\0status\0"
    "get_rfid\0rfid\0set_add\0b\0bp_ok\0bp_no\0"
    "beep_close\0on_pushButton_2_clicked\0"
    "on_pushButton_clicked\0on_pushButton_3_clicked\0"
    "on_bt_end_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_windowadd[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x0a /* Public */,
       3,    1,   70,    2, 0x0a /* Public */,
       5,    1,   73,    2, 0x0a /* Public */,
       7,    1,   76,    2, 0x0a /* Public */,
       9,    0,   79,    2, 0x0a /* Public */,
      10,    0,   80,    2, 0x0a /* Public */,
      11,    0,   81,    2, 0x0a /* Public */,
      12,    0,   82,    2, 0x08 /* Private */,
      13,    0,   83,    2, 0x08 /* Private */,
      14,    0,   84,    2, 0x08 /* Private */,
      15,    0,   85,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void windowadd::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        windowadd *_t = static_cast<windowadd *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fanhui(); break;
        case 1: _t->addstatus((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->get_rfid((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->set_add((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 4: _t->bp_ok(); break;
        case 5: _t->bp_no(); break;
        case 6: _t->beep_close(); break;
        case 7: _t->on_pushButton_2_clicked(); break;
        case 8: _t->on_pushButton_clicked(); break;
        case 9: _t->on_pushButton_3_clicked(); break;
        case 10: _t->on_bt_end_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject windowadd::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_windowadd.data,
      qt_meta_data_windowadd,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *windowadd::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *windowadd::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_windowadd.stringdata0))
        return static_cast<void*>(const_cast< windowadd*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int windowadd::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
