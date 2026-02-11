/****************************************************************************
** Meta object code from reading C++ file 'GuiGLWidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/GuiGLWidget.hpp"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GuiGLWidget.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGuiGLWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSGuiGLWidgetENDCLASS = QtMocHelpers::stringData(
    "GuiGLWidget",
    "setQtLogo",
    "",
    "setMainWindow",
    "GuiMainWindow*",
    "mw",
    "setBackgroundColor",
    "backgroundColor",
    "setMaterialColor",
    "materialColor"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGuiGLWidgetENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[12];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[15];
    char stringdata5[3];
    char stringdata6[19];
    char stringdata7[16];
    char stringdata8[17];
    char stringdata9[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGuiGLWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGuiGLWidgetENDCLASS_t qt_meta_stringdata_CLASSGuiGLWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "GuiGLWidget"
        QT_MOC_LITERAL(12, 9),  // "setQtLogo"
        QT_MOC_LITERAL(22, 0),  // ""
        QT_MOC_LITERAL(23, 13),  // "setMainWindow"
        QT_MOC_LITERAL(37, 14),  // "GuiMainWindow*"
        QT_MOC_LITERAL(52, 2),  // "mw"
        QT_MOC_LITERAL(55, 18),  // "setBackgroundColor"
        QT_MOC_LITERAL(74, 15),  // "backgroundColor"
        QT_MOC_LITERAL(90, 16),  // "setMaterialColor"
        QT_MOC_LITERAL(107, 13)   // "materialColor"
    },
    "GuiGLWidget",
    "setQtLogo",
    "",
    "setMainWindow",
    "GuiMainWindow*",
    "mw",
    "setBackgroundColor",
    "backgroundColor",
    "setMaterialColor",
    "materialColor"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiGLWidgetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x0a,    1 /* Public */,
       3,    1,   39,    2, 0x0a,    2 /* Public */,
       6,    1,   42,    2, 0x0a,    4 /* Public */,
       8,    1,   45,    2, 0x0a,    6 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QColor,    7,
    QMetaType::Void, QMetaType::QColor,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject GuiGLWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QOpenGLWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiGLWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiGLWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiGLWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GuiGLWidget, std::true_type>,
        // method 'setQtLogo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setMainWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<GuiMainWindow *, std::false_type>,
        // method 'setBackgroundColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        // method 'setMaterialColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>
    >,
    nullptr
} };

void GuiGLWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GuiGLWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setQtLogo(); break;
        case 1: _t->setMainWindow((*reinterpret_cast< std::add_pointer_t<GuiMainWindow*>>(_a[1]))); break;
        case 2: _t->setBackgroundColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        case 3: _t->setMaterialColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *GuiGLWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuiGLWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiGLWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QOpenGLFunctions"))
        return static_cast< QOpenGLFunctions*>(this);
    return QOpenGLWidget::qt_metacast(_clname);
}

int GuiGLWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QOpenGLWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
