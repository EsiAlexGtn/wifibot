/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../wifibot/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[22];
    char stringdata0[353];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 24), // "on_ConnectButton_clicked"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 27), // "on_DisconnectButton_clicked"
QT_MOC_LITERAL(4, 65, 15), // "on_stop_clicked"
QT_MOC_LITERAL(5, 81, 17), // "on_Droite_pressed"
QT_MOC_LITERAL(6, 99, 17), // "on_Gauche_pressed"
QT_MOC_LITERAL(7, 117, 12), // "cameraStream"
QT_MOC_LITERAL(8, 130, 16), // "on_Avant_pressed"
QT_MOC_LITERAL(9, 147, 27), // "on_PowerSlider_valueChanged"
QT_MOC_LITERAL(10, 175, 5), // "value"
QT_MOC_LITERAL(11, 181, 13), // "keyPressEvent"
QT_MOC_LITERAL(12, 195, 10), // "QKeyEvent*"
QT_MOC_LITERAL(13, 206, 1), // "e"
QT_MOC_LITERAL(14, 208, 18), // "on_Reculer_pressed"
QT_MOC_LITERAL(15, 227, 4), // "init"
QT_MOC_LITERAL(16, 232, 23), // "on_ConnectVideo_clicked"
QT_MOC_LITERAL(17, 256, 19), // "on_CamRight_clicked"
QT_MOC_LITERAL(18, 276, 18), // "on_CamLeft_clicked"
QT_MOC_LITERAL(19, 295, 16), // "on_CamUp_clicked"
QT_MOC_LITERAL(20, 312, 18), // "on_CamDown_clicked"
QT_MOC_LITERAL(21, 331, 21) // "on_MajCapteur_clicked"

    },
    "MainWindow\0on_ConnectButton_clicked\0"
    "\0on_DisconnectButton_clicked\0"
    "on_stop_clicked\0on_Droite_pressed\0"
    "on_Gauche_pressed\0cameraStream\0"
    "on_Avant_pressed\0on_PowerSlider_valueChanged\0"
    "value\0keyPressEvent\0QKeyEvent*\0e\0"
    "on_Reculer_pressed\0init\0on_ConnectVideo_clicked\0"
    "on_CamRight_clicked\0on_CamLeft_clicked\0"
    "on_CamUp_clicked\0on_CamDown_clicked\0"
    "on_MajCapteur_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    0,  100,    2, 0x08 /* Private */,
       4,    0,  101,    2, 0x08 /* Private */,
       5,    0,  102,    2, 0x08 /* Private */,
       6,    0,  103,    2, 0x08 /* Private */,
       7,    0,  104,    2, 0x08 /* Private */,
       8,    0,  105,    2, 0x08 /* Private */,
       9,    1,  106,    2, 0x08 /* Private */,
      11,    1,  109,    2, 0x08 /* Private */,
      14,    0,  112,    2, 0x08 /* Private */,
      15,    0,  113,    2, 0x08 /* Private */,
      16,    0,  114,    2, 0x08 /* Private */,
      17,    0,  115,    2, 0x08 /* Private */,
      18,    0,  116,    2, 0x08 /* Private */,
      19,    0,  117,    2, 0x08 /* Private */,
      20,    0,  118,    2, 0x08 /* Private */,
      21,    0,  119,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
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

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_ConnectButton_clicked(); break;
        case 1: _t->on_DisconnectButton_clicked(); break;
        case 2: _t->on_stop_clicked(); break;
        case 3: _t->on_Droite_pressed(); break;
        case 4: _t->on_Gauche_pressed(); break;
        case 5: _t->cameraStream(); break;
        case 6: _t->on_Avant_pressed(); break;
        case 7: _t->on_PowerSlider_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->keyPressEvent((*reinterpret_cast< QKeyEvent*(*)>(_a[1]))); break;
        case 9: _t->on_Reculer_pressed(); break;
        case 10: _t->init(); break;
        case 11: _t->on_ConnectVideo_clicked(); break;
        case 12: _t->on_CamRight_clicked(); break;
        case 13: _t->on_CamLeft_clicked(); break;
        case 14: _t->on_CamUp_clicked(); break;
        case 15: _t->on_CamDown_clicked(); break;
        case 16: _t->on_MajCapteur_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
