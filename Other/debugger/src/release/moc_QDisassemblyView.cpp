/****************************************************************************
** Meta object code from reading C++ file 'QDisassemblyView.h'
**
** Created: Sat Sep 15 17:40:25 2012
**      by: The Qt Meta Object Compiler version 63 (Qt 4.8.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../widgets/QDisassemblyView.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QDisassemblyView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_QDisassemblyView[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      26,   18,   17,   17, 0x05,
      60,   17,   17,   17, 0x05,

 // slots: signature, parameters, type, tag, flags
      78,   76,   17,   17, 0x0a,
      99,   93,   17,   17, 0x0a,
     126,   18,   17,   17, 0x0a,
     151,   18,   17,   17, 0x0a,
     186,  184,   17,   17, 0x0a,
     207,   18,   17,   17, 0x0a,
     241,   17,   17,   17, 0x0a,
     249,   17,   17,   17, 0x0a,
     265,  259,   17,   17, 0x0a,
     302,  295,   17,   17, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_QDisassemblyView[] = {
    "QDisassemblyView\0\0address\0"
    "breakPointToggled(edb::address_t)\0"
    "regionChanged()\0f\0setFont(QFont)\0event\0"
    "resizeEvent(QResizeEvent*)\0"
    "scrollTo(edb::address_t)\0"
    "setAddressOffset(edb::address_t)\0r\0"
    "setRegion(MemRegion)\0"
    "setCurrentAddress(edb::address_t)\0"
    "clear()\0repaint()\0value\0"
    "setShowAddressSeparator(bool)\0action\0"
    "scrollbar_action_triggered(int)\0"
};

void QDisassemblyView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        QDisassemblyView *_t = static_cast<QDisassemblyView *>(_o);
        switch (_id) {
        case 0: _t->breakPointToggled((*reinterpret_cast< edb::address_t(*)>(_a[1]))); break;
        case 1: _t->regionChanged(); break;
        case 2: _t->setFont((*reinterpret_cast< const QFont(*)>(_a[1]))); break;
        case 3: _t->resizeEvent((*reinterpret_cast< QResizeEvent*(*)>(_a[1]))); break;
        case 4: _t->scrollTo((*reinterpret_cast< edb::address_t(*)>(_a[1]))); break;
        case 5: _t->setAddressOffset((*reinterpret_cast< edb::address_t(*)>(_a[1]))); break;
        case 6: _t->setRegion((*reinterpret_cast< const MemRegion(*)>(_a[1]))); break;
        case 7: _t->setCurrentAddress((*reinterpret_cast< edb::address_t(*)>(_a[1]))); break;
        case 8: _t->clear(); break;
        case 9: _t->repaint(); break;
        case 10: _t->setShowAddressSeparator((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->scrollbar_action_triggered((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData QDisassemblyView::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject QDisassemblyView::staticMetaObject = {
    { &QAbstractScrollArea::staticMetaObject, qt_meta_stringdata_QDisassemblyView,
      qt_meta_data_QDisassemblyView, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &QDisassemblyView::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *QDisassemblyView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *QDisassemblyView::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_QDisassemblyView))
        return static_cast<void*>(const_cast< QDisassemblyView*>(this));
    return QAbstractScrollArea::qt_metacast(_clname);
}

int QDisassemblyView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractScrollArea::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void QDisassemblyView::breakPointToggled(edb::address_t _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void QDisassemblyView::regionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
