/****************************************************************************
** Meta object code from reading C++ file 'DebuggerUI.h'
**
** Created: Sat Sep 15 17:40:24 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../DebuggerUI.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DebuggerUI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DebuggerUI[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      34,   12,   11,   11, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DebuggerUI[] = {
    "DebuggerUI\0\0exit_code,exit_status\0"
    "tty_proc_finished(int,QProcess::ExitStatus)\0"
};

void DebuggerUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DebuggerUI *_t = static_cast<DebuggerUI *>(_o);
        switch (_id) {
        case 0: _t->tty_proc_finished((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QProcess::ExitStatus(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DebuggerUI::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DebuggerUI::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_DebuggerUI,
      qt_meta_data_DebuggerUI, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DebuggerUI::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DebuggerUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DebuggerUI::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DebuggerUI))
        return static_cast<void*>(const_cast< DebuggerUI*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int DebuggerUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
