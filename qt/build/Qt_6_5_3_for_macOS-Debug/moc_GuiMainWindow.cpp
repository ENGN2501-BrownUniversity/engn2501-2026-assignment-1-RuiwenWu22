/****************************************************************************
** Meta object code from reading C++ file 'GuiMainWindow.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/GuiMainWindow.hpp"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GuiMainWindow.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGuiMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSGuiMainWindowENDCLASS = QtMocHelpers::stringData(
    "GuiMainWindow",
    "on_fileExitAction_triggered",
    "",
    "on_fileLoadAction_triggered",
    "on_fileSaveAction_triggered",
    "on_toolsShowAction_triggered",
    "on_toolsHideAction_triggered",
    "on_helpAboutAction_triggered"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGuiMainWindowENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[14];
    char stringdata1[28];
    char stringdata2[1];
    char stringdata3[28];
    char stringdata4[28];
    char stringdata5[29];
    char stringdata6[29];
    char stringdata7[29];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGuiMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGuiMainWindowENDCLASS_t qt_meta_stringdata_CLASSGuiMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "GuiMainWindow"
        QT_MOC_LITERAL(14, 27),  // "on_fileExitAction_triggered"
        QT_MOC_LITERAL(42, 0),  // ""
        QT_MOC_LITERAL(43, 27),  // "on_fileLoadAction_triggered"
        QT_MOC_LITERAL(71, 27),  // "on_fileSaveAction_triggered"
        QT_MOC_LITERAL(99, 28),  // "on_toolsShowAction_triggered"
        QT_MOC_LITERAL(128, 28),  // "on_toolsHideAction_triggered"
        QT_MOC_LITERAL(157, 28)   // "on_helpAboutAction_triggered"
    },
    "GuiMainWindow",
    "on_fileExitAction_triggered",
    "",
    "on_fileLoadAction_triggered",
    "on_fileSaveAction_triggered",
    "on_toolsShowAction_triggered",
    "on_toolsHideAction_triggered",
    "on_helpAboutAction_triggered"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiMainWindowENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject GuiMainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GuiMainWindow, std::true_type>,
        // method 'on_fileExitAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_fileLoadAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_fileSaveAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolsShowAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_toolsHideAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_helpAboutAction_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void GuiMainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GuiMainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_fileExitAction_triggered(); break;
        case 1: _t->on_fileLoadAction_triggered(); break;
        case 2: _t->on_fileSaveAction_triggered(); break;
        case 3: _t->on_toolsShowAction_triggered(); break;
        case 4: _t->on_toolsHideAction_triggered(); break;
        case 5: _t->on_helpAboutAction_triggered(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *GuiMainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuiMainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::GuiMainWindow"))
        return static_cast< Ui::GuiMainWindow*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int GuiMainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
