/****************************************************************************
** Meta object code from reading C++ file 'DialogMemoryRegions.h'
**
** Created: Sat Sep 15 17:40:24 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../DialogMemoryRegions.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DialogMemoryRegions.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_DialogMemoryRegions[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      25,   21,   20,   20, 0x08,
      77,   20,   20,   20, 0x08,
      95,   20,   20,   20, 0x08,
     110,   20,   20,   20, 0x08,
     125,   20,   20,   20, 0x08,
     140,   20,   20,   20, 0x08,
     156,   20,   20,   20, 0x08,
     172,   20,   20,   20, 0x08,
     188,   20,   20,   20, 0x08,
     205,   20,   20,   20, 0x08,
     219,   20,   20,   20, 0x08,
     235,   20,   20,   20, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_DialogMemoryRegions[] = {
    "DialogMemoryRegions\0\0pos\0"
    "on_regions_table_customContextMenuRequested(QPoint)\0"
    "set_access_none()\0set_access_r()\0"
    "set_access_w()\0set_access_x()\0"
    "set_access_rw()\0set_access_rx()\0"
    "set_access_wx()\0set_access_rwx()\0"
    "view_in_cpu()\0view_in_stack()\0"
    "view_in_dump()\0"
};

void DialogMemoryRegions::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        DialogMemoryRegions *_t = static_cast<DialogMemoryRegions *>(_o);
        switch (_id) {
        case 0: _t->on_regions_table_customContextMenuRequested((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 1: _t->set_access_none(); break;
        case 2: _t->set_access_r(); break;
        case 3: _t->set_access_w(); break;
        case 4: _t->set_access_x(); break;
        case 5: _t->set_access_rw(); break;
        case 6: _t->set_access_rx(); break;
        case 7: _t->set_access_wx(); break;
        case 8: _t->set_access_rwx(); break;
        case 9: _t->view_in_cpu(); break;
        case 10: _t->view_in_stack(); break;
        case 11: _t->view_in_dump(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData DialogMemoryRegions::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject DialogMemoryRegions::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_DialogMemoryRegions,
      qt_meta_data_DialogMemoryRegions, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &DialogMemoryRegions::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *DialogMemoryRegions::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *DialogMemoryRegions::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_DialogMemoryRegions))
        return static_cast<void*>(const_cast< DialogMemoryRegions*>(this));
    return QDialog::qt_metacast(_clname);
}

int DialogMemoryRegions::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
