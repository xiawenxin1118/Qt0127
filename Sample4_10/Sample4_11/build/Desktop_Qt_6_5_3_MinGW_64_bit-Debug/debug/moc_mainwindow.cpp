/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../mainwindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_actFile_New_triggered",
    "",
    "on_actFile_Save_triggered",
    "on_actFile_Open_triggered",
    "on_textEdit_copyAvailable",
    "b",
    "on_textEdit_selectionChanged",
    "on_actText_Bold_triggered",
    "checked",
    "on_actText_Italic_triggered",
    "on_actText_Under_triggered",
    "on_fontSize_changed",
    "fontSize",
    "on_font_changed",
    "font"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[11];
    char stringdata1[25];
    char stringdata2[1];
    char stringdata3[26];
    char stringdata4[26];
    char stringdata5[26];
    char stringdata6[2];
    char stringdata7[29];
    char stringdata8[26];
    char stringdata9[8];
    char stringdata10[28];
    char stringdata11[27];
    char stringdata12[20];
    char stringdata13[9];
    char stringdata14[16];
    char stringdata15[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 24),  // "on_actFile_New_triggered"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 25),  // "on_actFile_Save_triggered"
        QT_MOC_LITERAL(63, 25),  // "on_actFile_Open_triggered"
        QT_MOC_LITERAL(89, 25),  // "on_textEdit_copyAvailable"
        QT_MOC_LITERAL(115, 1),  // "b"
        QT_MOC_LITERAL(117, 28),  // "on_textEdit_selectionChanged"
        QT_MOC_LITERAL(146, 25),  // "on_actText_Bold_triggered"
        QT_MOC_LITERAL(172, 7),  // "checked"
        QT_MOC_LITERAL(180, 27),  // "on_actText_Italic_triggered"
        QT_MOC_LITERAL(208, 26),  // "on_actText_Under_triggered"
        QT_MOC_LITERAL(235, 19),  // "on_fontSize_changed"
        QT_MOC_LITERAL(255, 8),  // "fontSize"
        QT_MOC_LITERAL(264, 15),  // "on_font_changed"
        QT_MOC_LITERAL(280, 4)   // "font"
    },
    "MainWindow",
    "on_actFile_New_triggered",
    "",
    "on_actFile_Save_triggered",
    "on_actFile_Open_triggered",
    "on_textEdit_copyAvailable",
    "b",
    "on_textEdit_selectionChanged",
    "on_actText_Bold_triggered",
    "checked",
    "on_actText_Italic_triggered",
    "on_actText_Under_triggered",
    "on_fontSize_changed",
    "fontSize",
    "on_font_changed",
    "font"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x08,    1 /* Private */,
       3,    0,   75,    2, 0x08,    2 /* Private */,
       4,    0,   76,    2, 0x08,    3 /* Private */,
       5,    1,   77,    2, 0x08,    4 /* Private */,
       7,    0,   80,    2, 0x08,    6 /* Private */,
       8,    1,   81,    2, 0x08,    7 /* Private */,
      10,    1,   84,    2, 0x08,    9 /* Private */,
      11,    1,   87,    2, 0x08,   11 /* Private */,
      12,    1,   90,    2, 0x08,   13 /* Private */,
      14,    1,   93,    2, 0x08,   15 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void, QMetaType::QFont,   15,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_actFile_New_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actFile_Save_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actFile_Open_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_textEdit_copyAvailable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_textEdit_selectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actText_Bold_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actText_Italic_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_actText_Under_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_fontSize_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_font_changed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QFont &, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actFile_New_triggered(); break;
        case 1: _t->on_actFile_Save_triggered(); break;
        case 2: _t->on_actFile_Open_triggered(); break;
        case 3: _t->on_textEdit_copyAvailable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->on_textEdit_selectionChanged(); break;
        case 5: _t->on_actText_Bold_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->on_actText_Italic_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->on_actText_Under_triggered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->on_fontSize_changed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->on_font_changed((*reinterpret_cast< std::add_pointer_t<QFont>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
