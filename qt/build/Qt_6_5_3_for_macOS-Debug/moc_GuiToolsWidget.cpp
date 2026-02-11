/****************************************************************************
** Meta object code from reading C++ file 'GuiToolsWidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/GuiToolsWidget.hpp"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GuiToolsWidget.hpp' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSGuiToolsWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSGuiToolsWidgetENDCLASS = QtMocHelpers::stringData(
    "GuiToolsWidget",
    "setMainWindow",
    "",
    "GuiMainWindow*",
    "mw",
    "updateState",
    "bboxCube",
    "bboxDepthUp",
    "bboxDepthDown",
    "bboxSetDepth",
    "depth",
    "on_spinBoxBBoxDepth_valueChanged",
    "on_pushButtonBBoxAdd_clicked",
    "on_pushButtonBBoxRemove_clicked",
    "on_editBBoxScale_returnPressed",
    "on_checkBoxBBoxCube_stateChanged",
    "satate",
    "on_pushButtonSceneGraphNormalNone_clicked",
    "on_pushButtonSceneGraphNormalPerVertex_clicked",
    "on_pushButtonSceneGraphNormalInvert_clicked",
    "on_pushButtonSceneGraphNormalPerFace_clicked",
    "on_pushButtonSceneGraphNormalPerCorner_clicked",
    "on_pushButtonSceneGraphIndexedFaceSetsShow_clicked",
    "on_pushButtonSceneGraphIndexedFaceSetsHide_clicked",
    "on_pushButtonSceneGraphIndexedLineSetsShow_clicked",
    "on_pushButtonSceneGraphIndexedLineSetsHide_clicked",
    "on_pushButtonPointsRemove_clicked",
    "on_pushButtonPointsShow_clicked",
    "on_pushButtonPointsHide_clicked",
    "on_pushButtonSceneGraphEdgesAdd_clicked",
    "on_pushButtonSceneGraphEdgesRemove_clicked",
    "on_pushButtonSceneGraphEdgesShow_clicked",
    "on_pushButtonSceneGraphEdgesHide_clicked",
    "on_pushButtonSurfaceRemove_clicked",
    "on_pushButtonSurfaceShow_clicked",
    "on_pushButtonSurfaceHide_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGuiToolsWidgetENDCLASS_t {
    uint offsetsAndSizes[72];
    char stringdata0[15];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[3];
    char stringdata5[12];
    char stringdata6[9];
    char stringdata7[12];
    char stringdata8[14];
    char stringdata9[13];
    char stringdata10[6];
    char stringdata11[33];
    char stringdata12[29];
    char stringdata13[32];
    char stringdata14[31];
    char stringdata15[33];
    char stringdata16[7];
    char stringdata17[42];
    char stringdata18[47];
    char stringdata19[44];
    char stringdata20[45];
    char stringdata21[47];
    char stringdata22[51];
    char stringdata23[51];
    char stringdata24[51];
    char stringdata25[51];
    char stringdata26[34];
    char stringdata27[32];
    char stringdata28[32];
    char stringdata29[40];
    char stringdata30[43];
    char stringdata31[41];
    char stringdata32[41];
    char stringdata33[35];
    char stringdata34[33];
    char stringdata35[33];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGuiToolsWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGuiToolsWidgetENDCLASS_t qt_meta_stringdata_CLASSGuiToolsWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "GuiToolsWidget"
        QT_MOC_LITERAL(15, 13),  // "setMainWindow"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 14),  // "GuiMainWindow*"
        QT_MOC_LITERAL(45, 2),  // "mw"
        QT_MOC_LITERAL(48, 11),  // "updateState"
        QT_MOC_LITERAL(60, 8),  // "bboxCube"
        QT_MOC_LITERAL(69, 11),  // "bboxDepthUp"
        QT_MOC_LITERAL(81, 13),  // "bboxDepthDown"
        QT_MOC_LITERAL(95, 12),  // "bboxSetDepth"
        QT_MOC_LITERAL(108, 5),  // "depth"
        QT_MOC_LITERAL(114, 32),  // "on_spinBoxBBoxDepth_valueChanged"
        QT_MOC_LITERAL(147, 28),  // "on_pushButtonBBoxAdd_clicked"
        QT_MOC_LITERAL(176, 31),  // "on_pushButtonBBoxRemove_clicked"
        QT_MOC_LITERAL(208, 30),  // "on_editBBoxScale_returnPressed"
        QT_MOC_LITERAL(239, 32),  // "on_checkBoxBBoxCube_stateChanged"
        QT_MOC_LITERAL(272, 6),  // "satate"
        QT_MOC_LITERAL(279, 41),  // "on_pushButtonSceneGraphNormal..."
        QT_MOC_LITERAL(321, 46),  // "on_pushButtonSceneGraphNormal..."
        QT_MOC_LITERAL(368, 43),  // "on_pushButtonSceneGraphNormal..."
        QT_MOC_LITERAL(412, 44),  // "on_pushButtonSceneGraphNormal..."
        QT_MOC_LITERAL(457, 46),  // "on_pushButtonSceneGraphNormal..."
        QT_MOC_LITERAL(504, 50),  // "on_pushButtonSceneGraphIndexe..."
        QT_MOC_LITERAL(555, 50),  // "on_pushButtonSceneGraphIndexe..."
        QT_MOC_LITERAL(606, 50),  // "on_pushButtonSceneGraphIndexe..."
        QT_MOC_LITERAL(657, 50),  // "on_pushButtonSceneGraphIndexe..."
        QT_MOC_LITERAL(708, 33),  // "on_pushButtonPointsRemove_cli..."
        QT_MOC_LITERAL(742, 31),  // "on_pushButtonPointsShow_clicked"
        QT_MOC_LITERAL(774, 31),  // "on_pushButtonPointsHide_clicked"
        QT_MOC_LITERAL(806, 39),  // "on_pushButtonSceneGraphEdgesA..."
        QT_MOC_LITERAL(846, 42),  // "on_pushButtonSceneGraphEdgesR..."
        QT_MOC_LITERAL(889, 40),  // "on_pushButtonSceneGraphEdgesS..."
        QT_MOC_LITERAL(930, 40),  // "on_pushButtonSceneGraphEdgesH..."
        QT_MOC_LITERAL(971, 34),  // "on_pushButtonSurfaceRemove_cl..."
        QT_MOC_LITERAL(1006, 32),  // "on_pushButtonSurfaceShow_clicked"
        QT_MOC_LITERAL(1039, 32)   // "on_pushButtonSurfaceHide_clicked"
    },
    "GuiToolsWidget",
    "setMainWindow",
    "",
    "GuiMainWindow*",
    "mw",
    "updateState",
    "bboxCube",
    "bboxDepthUp",
    "bboxDepthDown",
    "bboxSetDepth",
    "depth",
    "on_spinBoxBBoxDepth_valueChanged",
    "on_pushButtonBBoxAdd_clicked",
    "on_pushButtonBBoxRemove_clicked",
    "on_editBBoxScale_returnPressed",
    "on_checkBoxBBoxCube_stateChanged",
    "satate",
    "on_pushButtonSceneGraphNormalNone_clicked",
    "on_pushButtonSceneGraphNormalPerVertex_clicked",
    "on_pushButtonSceneGraphNormalInvert_clicked",
    "on_pushButtonSceneGraphNormalPerFace_clicked",
    "on_pushButtonSceneGraphNormalPerCorner_clicked",
    "on_pushButtonSceneGraphIndexedFaceSetsShow_clicked",
    "on_pushButtonSceneGraphIndexedFaceSetsHide_clicked",
    "on_pushButtonSceneGraphIndexedLineSetsShow_clicked",
    "on_pushButtonSceneGraphIndexedLineSetsHide_clicked",
    "on_pushButtonPointsRemove_clicked",
    "on_pushButtonPointsShow_clicked",
    "on_pushButtonPointsHide_clicked",
    "on_pushButtonSceneGraphEdgesAdd_clicked",
    "on_pushButtonSceneGraphEdgesRemove_clicked",
    "on_pushButtonSceneGraphEdgesShow_clicked",
    "on_pushButtonSceneGraphEdgesHide_clicked",
    "on_pushButtonSurfaceRemove_clicked",
    "on_pushButtonSurfaceShow_clicked",
    "on_pushButtonSurfaceHide_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGuiToolsWidgetENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  194,    2, 0x0a,    1 /* Public */,
       5,    0,  197,    2, 0x0a,    3 /* Public */,
       6,    0,  198,    2, 0x08,    4 /* Private */,
       7,    0,  199,    2, 0x08,    5 /* Private */,
       8,    0,  200,    2, 0x08,    6 /* Private */,
       9,    1,  201,    2, 0x08,    7 /* Private */,
      11,    1,  204,    2, 0x08,    9 /* Private */,
      12,    0,  207,    2, 0x08,   11 /* Private */,
      13,    0,  208,    2, 0x08,   12 /* Private */,
      14,    0,  209,    2, 0x08,   13 /* Private */,
      15,    1,  210,    2, 0x08,   14 /* Private */,
      17,    0,  213,    2, 0x08,   16 /* Private */,
      18,    0,  214,    2, 0x08,   17 /* Private */,
      19,    0,  215,    2, 0x08,   18 /* Private */,
      20,    0,  216,    2, 0x08,   19 /* Private */,
      21,    0,  217,    2, 0x08,   20 /* Private */,
      22,    0,  218,    2, 0x08,   21 /* Private */,
      23,    0,  219,    2, 0x08,   22 /* Private */,
      24,    0,  220,    2, 0x08,   23 /* Private */,
      25,    0,  221,    2, 0x08,   24 /* Private */,
      26,    0,  222,    2, 0x08,   25 /* Private */,
      27,    0,  223,    2, 0x08,   26 /* Private */,
      28,    0,  224,    2, 0x08,   27 /* Private */,
      29,    0,  225,    2, 0x08,   28 /* Private */,
      30,    0,  226,    2, 0x08,   29 /* Private */,
      31,    0,  227,    2, 0x08,   30 /* Private */,
      32,    0,  228,    2, 0x08,   31 /* Private */,
      33,    0,  229,    2, 0x08,   32 /* Private */,
      34,    0,  230,    2, 0x08,   33 /* Private */,
      35,    0,  231,    2, 0x08,   34 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject GuiToolsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSGuiToolsWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGuiToolsWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGuiToolsWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GuiToolsWidget, std::true_type>,
        // method 'setMainWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<GuiMainWindow *, std::false_type>,
        // method 'updateState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'bboxCube'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'bboxDepthUp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'bboxDepthDown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'bboxSetDepth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_spinBoxBBoxDepth_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pushButtonBBoxAdd_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonBBoxRemove_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_editBBoxScale_returnPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_checkBoxBBoxCube_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_pushButtonSceneGraphNormalNone_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSceneGraphNormalPerVertex_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSceneGraphNormalInvert_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSceneGraphNormalPerFace_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSceneGraphNormalPerCorner_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSceneGraphIndexedFaceSetsShow_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSceneGraphIndexedFaceSetsHide_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSceneGraphIndexedLineSetsShow_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSceneGraphIndexedLineSetsHide_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonPointsRemove_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonPointsShow_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonPointsHide_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSceneGraphEdgesAdd_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSceneGraphEdgesRemove_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSceneGraphEdgesShow_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSceneGraphEdgesHide_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSurfaceRemove_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSurfaceShow_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_pushButtonSurfaceHide_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void GuiToolsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GuiToolsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setMainWindow((*reinterpret_cast< std::add_pointer_t<GuiMainWindow*>>(_a[1]))); break;
        case 1: _t->updateState(); break;
        case 2: _t->bboxCube(); break;
        case 3: _t->bboxDepthUp(); break;
        case 4: _t->bboxDepthDown(); break;
        case 5: _t->bboxSetDepth((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->on_spinBoxBBoxDepth_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->on_pushButtonBBoxAdd_clicked(); break;
        case 8: _t->on_pushButtonBBoxRemove_clicked(); break;
        case 9: _t->on_editBBoxScale_returnPressed(); break;
        case 10: _t->on_checkBoxBBoxCube_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->on_pushButtonSceneGraphNormalNone_clicked(); break;
        case 12: _t->on_pushButtonSceneGraphNormalPerVertex_clicked(); break;
        case 13: _t->on_pushButtonSceneGraphNormalInvert_clicked(); break;
        case 14: _t->on_pushButtonSceneGraphNormalPerFace_clicked(); break;
        case 15: _t->on_pushButtonSceneGraphNormalPerCorner_clicked(); break;
        case 16: _t->on_pushButtonSceneGraphIndexedFaceSetsShow_clicked(); break;
        case 17: _t->on_pushButtonSceneGraphIndexedFaceSetsHide_clicked(); break;
        case 18: _t->on_pushButtonSceneGraphIndexedLineSetsShow_clicked(); break;
        case 19: _t->on_pushButtonSceneGraphIndexedLineSetsHide_clicked(); break;
        case 20: _t->on_pushButtonPointsRemove_clicked(); break;
        case 21: _t->on_pushButtonPointsShow_clicked(); break;
        case 22: _t->on_pushButtonPointsHide_clicked(); break;
        case 23: _t->on_pushButtonSceneGraphEdgesAdd_clicked(); break;
        case 24: _t->on_pushButtonSceneGraphEdgesRemove_clicked(); break;
        case 25: _t->on_pushButtonSceneGraphEdgesShow_clicked(); break;
        case 26: _t->on_pushButtonSceneGraphEdgesHide_clicked(); break;
        case 27: _t->on_pushButtonSurfaceRemove_clicked(); break;
        case 28: _t->on_pushButtonSurfaceShow_clicked(); break;
        case 29: _t->on_pushButtonSurfaceHide_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject *GuiToolsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GuiToolsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGuiToolsWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "Ui::GuiToolsWidget"))
        return static_cast< Ui::GuiToolsWidget*>(this);
    return QWidget::qt_metacast(_clname);
}

int GuiToolsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 30;
    }
    return _id;
}
QT_WARNING_POP
