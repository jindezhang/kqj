/****************************************************************************
** Meta object code from reading C++ file 'windowdownload.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "windowdownload.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'windowdownload.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_downloadWindow_t {
    QByteArrayData data[9];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_downloadWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_downloadWindow_t qt_meta_stringdata_downloadWindow = {
    {
QT_MOC_LITERAL(0, 0, 14), // "downloadWindow"
QT_MOC_LITERAL(1, 15, 6), // "fanhui"
QT_MOC_LITERAL(2, 22, 0), // ""
QT_MOC_LITERAL(3, 23, 17), // "on_cb_all_clicked"
QT_MOC_LITERAL(4, 41, 7), // "checked"
QT_MOC_LITERAL(5, 49, 8), // "get_data"
QT_MOC_LITERAL(6, 58, 8), // "Em_infos"
QT_MOC_LITERAL(7, 67, 4), // "data"
QT_MOC_LITERAL(8, 72, 18) // "on_bt_down_clicked"

    },
    "downloadWindow\0fanhui\0\0on_cb_all_clicked\0"
    "checked\0get_data\0Em_infos\0data\0"
    "on_bt_down_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_downloadWindow[] = {

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
       1,    0,   34,    2, 0x0a /* Public */,
       3,    1,   35,    2, 0x08 /* Private */,
       5,    1,   38,    2, 0x08 /* Private */,
       8,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

void downloadWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        downloadWindow *_t = static_cast<downloadWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fanhui(); break;
        case 1: _t->on_cb_all_clicked((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->get_data((*reinterpret_cast< Em_infos(*)>(_a[1]))); break;
        case 3: _t->on_bt_down_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject downloadWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_downloadWindow.data,
      qt_meta_data_downloadWindow,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *downloadWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *downloadWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_downloadWindow.stringdata0))
        return static_cast<void*>(const_cast< downloadWindow*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int downloadWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
