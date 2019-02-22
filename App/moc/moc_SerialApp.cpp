/****************************************************************************
** Meta object code from reading C++ file 'SerialApp.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../SerialApp.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SerialApp.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_SerialApp_t {
    QByteArrayData data[15];
    char stringdata0[161];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SerialApp_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SerialApp_t qt_meta_stringdata_SerialApp = {
    {
QT_MOC_LITERAL(0, 0, 9), // "SerialApp"
QT_MOC_LITERAL(1, 10, 20), // "showPlotButtonSignal"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 15), // "lineReceivedApp"
QT_MOC_LITERAL(4, 48, 15), // "closePortSignal"
QT_MOC_LITERAL(5, 64, 4), // "open"
QT_MOC_LITERAL(6, 69, 5), // "close"
QT_MOC_LITERAL(7, 75, 4), // "send"
QT_MOC_LITERAL(8, 80, 12), // "dataReceived"
QT_MOC_LITERAL(9, 93, 5), // "array"
QT_MOC_LITERAL(10, 99, 5), // "clear"
QT_MOC_LITERAL(11, 105, 14), // "refreshDevices"
QT_MOC_LITERAL(12, 120, 4), // "save"
QT_MOC_LITERAL(13, 125, 18), // "showPlotButtonSlot"
QT_MOC_LITERAL(14, 144, 16) // "toogleVisibility"

    },
    "SerialApp\0showPlotButtonSignal\0\0"
    "lineReceivedApp\0closePortSignal\0open\0"
    "close\0send\0dataReceived\0array\0clear\0"
    "refreshDevices\0save\0showPlotButtonSlot\0"
    "toogleVisibility"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SerialApp[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    1,   75,    2, 0x06 /* Public */,
       4,    0,   78,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   79,    2, 0x0a /* Public */,
       6,    0,   80,    2, 0x0a /* Public */,
       7,    0,   81,    2, 0x0a /* Public */,
       8,    1,   82,    2, 0x0a /* Public */,
      10,    0,   85,    2, 0x0a /* Public */,
      11,    0,   86,    2, 0x0a /* Public */,
      12,    0,   87,    2, 0x0a /* Public */,
      13,    0,   88,    2, 0x0a /* Public */,
      14,    0,   89,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SerialApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        SerialApp *_t = static_cast<SerialApp *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showPlotButtonSignal(); break;
        case 1: _t->lineReceivedApp((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 2: _t->closePortSignal(); break;
        case 3: _t->open(); break;
        case 4: _t->close(); break;
        case 5: _t->send(); break;
        case 6: _t->dataReceived((*reinterpret_cast< QByteArray(*)>(_a[1]))); break;
        case 7: _t->clear(); break;
        case 8: _t->refreshDevices(); break;
        case 9: _t->save(); break;
        case 10: _t->showPlotButtonSlot(); break;
        case 11: _t->toogleVisibility(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (SerialApp::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialApp::showPlotButtonSignal)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (SerialApp::*_t)(QByteArray );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialApp::lineReceivedApp)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (SerialApp::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&SerialApp::closePortSignal)) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject SerialApp::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_SerialApp.data,
      qt_meta_data_SerialApp,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *SerialApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SerialApp::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_SerialApp.stringdata0))
        return static_cast<void*>(const_cast< SerialApp*>(this));
    return QWidget::qt_metacast(_clname);
}

int SerialApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void SerialApp::showPlotButtonSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void SerialApp::lineReceivedApp(QByteArray _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SerialApp::closePortSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
