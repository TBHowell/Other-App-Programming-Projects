/****************************************************************************
** Meta object code from reading C++ file 'p1window.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../p1window.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'p1window.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_P1Window_t {
    QByteArrayData data[11];
    char stringdata0[236];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_P1Window_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_P1Window_t qt_meta_stringdata_P1Window = {
    {
QT_MOC_LITERAL(0, 0, 8), // "P1Window"
QT_MOC_LITERAL(1, 9, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 24), // "on_foreRedButton_clicked"
QT_MOC_LITERAL(4, 57, 25), // "on_foreBlueButton_clicked"
QT_MOC_LITERAL(5, 83, 24), // "on_backRedButton_clicked"
QT_MOC_LITERAL(6, 108, 25), // "on_backBlueButton_clicked"
QT_MOC_LITERAL(7, 134, 27), // "on_textCenterButton_clicked"
QT_MOC_LITERAL(8, 162, 25), // "on_textLeftButton_clicked"
QT_MOC_LITERAL(9, 188, 26), // "on_textRightButton_clicked"
QT_MOC_LITERAL(10, 215, 20) // "on_endButton_clicked"

    },
    "P1Window\0on_pushButton_clicked\0\0"
    "on_foreRedButton_clicked\0"
    "on_foreBlueButton_clicked\0"
    "on_backRedButton_clicked\0"
    "on_backBlueButton_clicked\0"
    "on_textCenterButton_clicked\0"
    "on_textLeftButton_clicked\0"
    "on_textRightButton_clicked\0"
    "on_endButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_P1Window[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    0,   62,    2, 0x08 /* Private */,
       6,    0,   63,    2, 0x08 /* Private */,
       7,    0,   64,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void P1Window::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        P1Window *_t = static_cast<P1Window *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButton_clicked(); break;
        case 1: _t->on_foreRedButton_clicked(); break;
        case 2: _t->on_foreBlueButton_clicked(); break;
        case 3: _t->on_backRedButton_clicked(); break;
        case 4: _t->on_backBlueButton_clicked(); break;
        case 5: _t->on_textCenterButton_clicked(); break;
        case 6: _t->on_textLeftButton_clicked(); break;
        case 7: _t->on_textRightButton_clicked(); break;
        case 8: _t->on_endButton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject P1Window::staticMetaObject = { {
    &QMainWindow::staticMetaObject,
    qt_meta_stringdata_P1Window.data,
    qt_meta_data_P1Window,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *P1Window::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *P1Window::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_P1Window.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int P1Window::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE