/****************************************************************************
** Meta object code from reading C++ file 'filesearcher.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../filesearcher.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filesearcher.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FileSearcher_t {
    QByteArrayData data[15];
    char stringdata0[168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FileSearcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FileSearcher_t qt_meta_stringdata_FileSearcher = {
    {
QT_MOC_LITERAL(0, 0, 12), // "FileSearcher"
QT_MOC_LITERAL(1, 13, 13), // "searchStarted"
QT_MOC_LITERAL(2, 27, 0), // ""
QT_MOC_LITERAL(3, 28, 9), // "fileCount"
QT_MOC_LITERAL(4, 38, 12), // "headerLabels"
QT_MOC_LITERAL(5, 51, 13), // "fileProcessed"
QT_MOC_LITERAL(6, 65, 8), // "fileName"
QT_MOC_LITERAL(7, 74, 11), // "occurrences"
QT_MOC_LITERAL(8, 86, 11), // "searchError"
QT_MOC_LITERAL(9, 98, 12), // "errorMessage"
QT_MOC_LITERAL(10, 111, 14), // "finishedSearch"
QT_MOC_LITERAL(11, 126, 11), // "startSearch"
QT_MOC_LITERAL(12, 138, 9), // "directory"
QT_MOC_LITERAL(13, 148, 6), // "phrase"
QT_MOC_LITERAL(14, 155, 12) // "countThreads"

    },
    "FileSearcher\0searchStarted\0\0fileCount\0"
    "headerLabels\0fileProcessed\0fileName\0"
    "occurrences\0searchError\0errorMessage\0"
    "finishedSearch\0startSearch\0directory\0"
    "phrase\0countThreads"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FileSearcher[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   39,    2, 0x06 /* Public */,
       5,    2,   44,    2, 0x06 /* Public */,
       8,    1,   49,    2, 0x06 /* Public */,
      10,    0,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    3,   53,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QStringList,    3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Int,   12,   13,   14,

       0        // eod
};

void FileSearcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileSearcher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->searchStarted((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QStringList(*)>(_a[2]))); break;
        case 1: _t->fileProcessed((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->searchError((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->finishedSearch(); break;
        case 4: _t->startSearch((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileSearcher::*)(int , const QStringList & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileSearcher::searchStarted)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileSearcher::*)(const QString & , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileSearcher::fileProcessed)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileSearcher::*)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileSearcher::searchError)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FileSearcher::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&FileSearcher::finishedSearch)) {
                *result = 3;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject FileSearcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_FileSearcher.data,
    qt_meta_data_FileSearcher,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FileSearcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FileSearcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FileSearcher.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int FileSearcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void FileSearcher::searchStarted(int _t1, const QStringList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void FileSearcher::fileProcessed(const QString & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void FileSearcher::searchError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void FileSearcher::finishedSearch()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
