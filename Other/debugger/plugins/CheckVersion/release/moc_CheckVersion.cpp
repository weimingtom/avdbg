/****************************************************************************
** Meta object code from reading C++ file 'CheckVersion.h'
**
** Created: Sat Sep 15 17:41:07 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../CheckVersion.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'CheckVersion.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_CheckVersion[] = {

 // content:
       6,       // revision
       0,       // classname
       2,   14, // classinfo
       2,   18, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // classinfo: key, value
      24,   13,
      54,   31,

 // slots: signature, parameters, type, tag, flags
      59,   58,   58,   58, 0x0a,
      77,   71,   58,   58, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_CheckVersion[] = {
    "CheckVersion\0Evan Teran\0author\0"
    "http://www.codef00.com\0url\0\0show_menu()\0"
    "reply\0requestFinished(QNetworkReply*)\0"
};

void CheckVersion::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        CheckVersion *_t = static_cast<CheckVersion *>(_o);
        switch (_id) {
        case 0: _t->show_menu(); break;
        case 1: _t->requestFinished((*reinterpret_cast< QNetworkReply*(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData CheckVersion::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject CheckVersion::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_CheckVersion,
      qt_meta_data_CheckVersion, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &CheckVersion::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *CheckVersion::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *CheckVersion::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_CheckVersion))
        return static_cast<void*>(const_cast< CheckVersion*>(this));
    if (!strcmp(_clname, "DebuggerPluginInterface"))
        return static_cast< DebuggerPluginInterface*>(const_cast< CheckVersion*>(this));
    if (!strcmp(_clname, "EDB.DebuggerPluginInterface/1.0"))
        return static_cast< DebuggerPluginInterface*>(const_cast< CheckVersion*>(this));
    return QObject::qt_metacast(_clname);
}

int CheckVersion::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
