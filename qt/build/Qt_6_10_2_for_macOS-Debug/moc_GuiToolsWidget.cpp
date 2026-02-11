/****************************************************************************
** Meta object code from reading C++ file 'GuiToolsWidget.hpp'
**
** Created by: The Qt Meta Object Compiler version 69 (Qt 6.10.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/gui/GuiToolsWidget.hpp"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'GuiToolsWidget.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 69
#error "This file was generated using the moc from 6.10.2. It"
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
struct qt_meta_tag_ZN14GuiToolsWidgetE_t {};
} // unnamed namespace

template <> constexpr inline auto GuiToolsWidget::qt_create_metaobjectdata<qt_meta_tag_ZN14GuiToolsWidgetE_t>()
{
    namespace QMC = QtMocConstants;
    QtMocHelpers::StringRefStorage qt_stringData {
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

    QtMocHelpers::UintData qt_methods {
        // Slot 'setMainWindow'
        QtMocHelpers::SlotData<void(GuiMainWindow *)>(1, 2, QMC::AccessPublic, QMetaType::Void, {{
            { 0x80000000 | 3, 4 },
        }}),
        // Slot 'updateState'
        QtMocHelpers::SlotData<void()>(5, 2, QMC::AccessPublic, QMetaType::Void),
        // Slot 'bboxCube'
        QtMocHelpers::SlotData<void()>(6, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'bboxDepthUp'
        QtMocHelpers::SlotData<void()>(7, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'bboxDepthDown'
        QtMocHelpers::SlotData<void()>(8, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'bboxSetDepth'
        QtMocHelpers::SlotData<void(int)>(9, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
        // Slot 'on_spinBoxBBoxDepth_valueChanged'
        QtMocHelpers::SlotData<void(int)>(11, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 10 },
        }}),
        // Slot 'on_pushButtonBBoxAdd_clicked'
        QtMocHelpers::SlotData<void()>(12, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonBBoxRemove_clicked'
        QtMocHelpers::SlotData<void()>(13, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_editBBoxScale_returnPressed'
        QtMocHelpers::SlotData<void()>(14, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_checkBoxBBoxCube_stateChanged'
        QtMocHelpers::SlotData<void(int)>(15, 2, QMC::AccessPrivate, QMetaType::Void, {{
            { QMetaType::Int, 16 },
        }}),
        // Slot 'on_pushButtonSceneGraphNormalNone_clicked'
        QtMocHelpers::SlotData<void()>(17, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonSceneGraphNormalPerVertex_clicked'
        QtMocHelpers::SlotData<void()>(18, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonSceneGraphNormalInvert_clicked'
        QtMocHelpers::SlotData<void()>(19, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonSceneGraphNormalPerFace_clicked'
        QtMocHelpers::SlotData<void()>(20, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonSceneGraphNormalPerCorner_clicked'
        QtMocHelpers::SlotData<void()>(21, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonSceneGraphIndexedFaceSetsShow_clicked'
        QtMocHelpers::SlotData<void()>(22, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonSceneGraphIndexedFaceSetsHide_clicked'
        QtMocHelpers::SlotData<void()>(23, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonSceneGraphIndexedLineSetsShow_clicked'
        QtMocHelpers::SlotData<void()>(24, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonSceneGraphIndexedLineSetsHide_clicked'
        QtMocHelpers::SlotData<void()>(25, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonPointsRemove_clicked'
        QtMocHelpers::SlotData<void()>(26, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonPointsShow_clicked'
        QtMocHelpers::SlotData<void()>(27, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonPointsHide_clicked'
        QtMocHelpers::SlotData<void()>(28, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonSceneGraphEdgesAdd_clicked'
        QtMocHelpers::SlotData<void()>(29, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonSceneGraphEdgesRemove_clicked'
        QtMocHelpers::SlotData<void()>(30, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonSceneGraphEdgesShow_clicked'
        QtMocHelpers::SlotData<void()>(31, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonSceneGraphEdgesHide_clicked'
        QtMocHelpers::SlotData<void()>(32, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonSurfaceRemove_clicked'
        QtMocHelpers::SlotData<void()>(33, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonSurfaceShow_clicked'
        QtMocHelpers::SlotData<void()>(34, 2, QMC::AccessPrivate, QMetaType::Void),
        // Slot 'on_pushButtonSurfaceHide_clicked'
        QtMocHelpers::SlotData<void()>(35, 2, QMC::AccessPrivate, QMetaType::Void),
    };
    QtMocHelpers::UintData qt_properties {
    };
    QtMocHelpers::UintData qt_enums {
    };
    return QtMocHelpers::metaObjectData<GuiToolsWidget, qt_meta_tag_ZN14GuiToolsWidgetE_t>(QMC::MetaObjectFlag{}, qt_stringData,
            qt_methods, qt_properties, qt_enums);
}
Q_CONSTINIT const QMetaObject GuiToolsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14GuiToolsWidgetE_t>.stringdata,
    qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14GuiToolsWidgetE_t>.data,
    qt_static_metacall,
    nullptr,
    qt_staticMetaObjectRelocatingContent<qt_meta_tag_ZN14GuiToolsWidgetE_t>.metaTypes,
    nullptr
} };

void GuiToolsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<GuiToolsWidget *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->setMainWindow((*reinterpret_cast<std::add_pointer_t<GuiMainWindow*>>(_a[1]))); break;
        case 1: _t->updateState(); break;
        case 2: _t->bboxCube(); break;
        case 3: _t->bboxDepthUp(); break;
        case 4: _t->bboxDepthDown(); break;
        case 5: _t->bboxSetDepth((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 6: _t->on_spinBoxBBoxDepth_valueChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->on_pushButtonBBoxAdd_clicked(); break;
        case 8: _t->on_pushButtonBBoxRemove_clicked(); break;
        case 9: _t->on_editBBoxScale_returnPressed(); break;
        case 10: _t->on_checkBoxBBoxCube_stateChanged((*reinterpret_cast<std::add_pointer_t<int>>(_a[1]))); break;
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
    if (!strcmp(_clname, qt_staticMetaObjectStaticContent<qt_meta_tag_ZN14GuiToolsWidgetE_t>.strings))
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
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 30;
    }
    return _id;
}
QT_WARNING_POP
