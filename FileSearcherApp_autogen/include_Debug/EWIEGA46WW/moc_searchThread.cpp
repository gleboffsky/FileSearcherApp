/****************************************************************************
** Meta object code from reading C++ file 'searchThread.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../searchThread.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'searchThread.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SearchThread_t {
    QByteArrayData data[11];
    char stringdata0[126];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SearchThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SearchThread_t qt_meta_stringdata_SearchThread = {
    {
QT_MOC_LITERAL(0, 0, 12), // "SearchThread"
QT_MOC_LITERAL(1, 13, 13), // "searchStarted"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 9), // "fileCount"
QT_MOC_LITERAL(4, 38, 12), // "headerLabels"
QT_MOC_LITERAL(5, 51, 13), // "fileProcessed"
QT_MOC_LITERAL(6, 65, 8), // "fileName"
QT_MOC_LITERAL(7, 74, 11), // "occurrences"
QT_MOC_LITERAL(8, 86, 11), // "searchError"
QT_MOC_LITERAL(9, 98, 12), // "errorMessage"
QT_MOC_LITERAL(10, 111, 14) // "finishedSearch"

    },
    "SearchThread\0searchStarted\0\0fileCount\0"
    "headerLabels\0fileProcessed\0fileName\0"
    "occurrences\0searchError\0errorMessage\0"
    "finishedSearch"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SearchThread[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       5,    2,   39,    2, 0x06 /* Public */,
       8,    1,   44,    2, 0x06 /* Public */,
      10,    0,   47,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QStringList,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,

       0        // eod
};

void SearchThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SearchThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->searchStarted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 1: _t->fileProcessed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->searchError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->finishedSearch(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SearchThread::*)(int , const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchThread::searchStarted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SearchThread::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchThread::fileProcessed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SearchThread::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchThread::searchError)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SearchThread::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SearchThread::finishedSearch)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SearchThread::staticMetaObject = { {
    QMetaObject::SuperData::link<QThread::staticMetaObject>(),
    qt_meta_stringdata_SearchThread.data,
    qt_meta_data_SearchThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SearchThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SearchThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SearchThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int SearchThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void SearchThread::searchStarted(int _t1, const QStringList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void SearchThread::fileProcessed(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void SearchThread::searchError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void SearchThread::finishedSearch()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
