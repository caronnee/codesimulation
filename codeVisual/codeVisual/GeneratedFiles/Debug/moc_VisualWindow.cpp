/****************************************************************************
** Meta object code from reading C++ file 'VisualWindow.h'
**
** Created: Sat 17. Mar 19:34:24 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../VisualWindow.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VisualWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_VisualWindow[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,

 // slots: signature, parameters, type, tag, flags
      39,   13,   13,   13, 0x0a,

       0        // eod
};

static const char qt_meta_stringdata_VisualWindow[] = {
    "VisualWindow\0\0PositionChanged(QPointF)\0"
    "NextStep()\0"
};

const QMetaObject VisualWindow::staticMetaObject = {
    { &QGraphicsView::staticMetaObject, qt_meta_stringdata_VisualWindow,
      qt_meta_data_VisualWindow, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &VisualWindow::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *VisualWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *VisualWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_VisualWindow))
        return static_cast<void*>(const_cast< VisualWindow*>(this));
    if (!strcmp(_clname, "Ui::VisualWindow"))
        return static_cast< Ui::VisualWindow*>(const_cast< VisualWindow*>(this));
    return QGraphicsView::qt_metacast(_clname);
}

int VisualWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QGraphicsView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: PositionChanged((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 1: NextStep(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void VisualWindow::PositionChanged(QPointF _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
