/****************************************************************************
** Meta object code from reading C++ file 'huffmanTree.h'
**
** Created: Sat 17. Mar 19:29:12 2012
**      by: The Qt Meta Object Compiler version 62 (Qt 4.7.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../Huffmann/huffmanTree.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'huffmanTree.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.7.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_HuffmannNode[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

static const char qt_meta_stringdata_HuffmannNode[] = {
    "HuffmannNode\0"
};

const QMetaObject HuffmannNode::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HuffmannNode,
      qt_meta_data_HuffmannNode, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HuffmannNode::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HuffmannNode::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HuffmannNode::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HuffmannNode))
        return static_cast<void*>(const_cast< HuffmannNode*>(this));
    return QObject::qt_metacast(_clname);
}

int HuffmannNode::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
static const uint qt_meta_data_HuffmannTree[] = {

 // content:
       5,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: signature, parameters, type, tag, flags
      14,   13,   13,   13, 0x05,
      24,   13,   13,   13, 0x05,

       0        // eod
};

static const char qt_meta_stringdata_HuffmannTree[] = {
    "HuffmannTree\0\0Encoded()\0RefillBuffer()\0"
};

const QMetaObject HuffmannTree::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_HuffmannTree,
      qt_meta_data_HuffmannTree, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &HuffmannTree::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *HuffmannTree::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *HuffmannTree::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_HuffmannTree))
        return static_cast<void*>(const_cast< HuffmannTree*>(this));
    return QObject::qt_metacast(_clname);
}

int HuffmannTree::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: Encoded(); break;
        case 1: RefillBuffer(); break;
        default: ;
        }
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void HuffmannTree::Encoded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, 0);
}

// SIGNAL 1
void HuffmannTree::RefillBuffer()
{
    QMetaObject::activate(this, &staticMetaObject, 1, 0);
}
QT_END_MOC_NAMESPACE
