/****************************************************************************
** Meta object code from reading C++ file 'BinaryString.h'
**
** Created: Sat Sep 15 17:40:24 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../include/BinaryString.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BinaryString.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_BinaryString[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x08,
      46,   13,   13,   13, 0x08,
      76,   13,   13,   13, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_BinaryString[] = {
    "BinaryString\0\0on_txtAscii_textEdited(QString)\0"
    "on_txtHex_textEdited(QString)\0"
    "on_txtUTF16_textEdited(QString)\0"
};

void BinaryString::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        BinaryString *_t = static_cast<BinaryString *>(_o);
        switch (_id) {
        case 0: _t->on_txtAscii_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_txtHex_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_txtUTF16_textEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData BinaryString::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject BinaryString::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_BinaryString,
      qt_meta_data_BinaryString, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &BinaryString::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *BinaryString::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *BinaryString::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_BinaryString))
        return static_cast<void*>(const_cast< BinaryString*>(this));
    return QWidget::qt_metacast(_clname);
}

int BinaryString::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
