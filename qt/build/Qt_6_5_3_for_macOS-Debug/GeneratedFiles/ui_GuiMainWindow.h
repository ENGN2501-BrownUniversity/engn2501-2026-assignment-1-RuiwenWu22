/********************************************************************************
** Form generated from reading UI file 'GuiMainWindow.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUIMAINWINDOW_H
#define UI_GUIMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QWidget>
#include "GuiGLWidget.hpp"
#include "GuiToolsWidget.hpp"

QT_BEGIN_NAMESPACE

class Ui_GuiMainWindow
{
public:
    QAction *fileExitAction;
    QAction *fileLoadAction;
    QAction *fileSaveAction;
    QAction *toolsHideAction;
    QAction *toolsShowAction;
    QAction *helpAboutAction;
    QWidget *centralwidget;
    QHBoxLayout *centralwidgetQHBoxLayout;
    GuiGLWidget *glWidget;
    GuiToolsWidget *toolsWidget;
    QMenuBar *menubar;
    QMenu *fileMenu;
    QMenu *toolsMenu;
    QMenu *helpMenu;

    void setupUi(QMainWindow *GuiMainWindow)
    {
        if (GuiMainWindow->objectName().isEmpty())
            GuiMainWindow->setObjectName("GuiMainWindow");
        GuiMainWindow->setMinimumSize(QSize(400, 600));
        fileExitAction = new QAction(GuiMainWindow);
        fileExitAction->setObjectName("fileExitAction");
        fileLoadAction = new QAction(GuiMainWindow);
        fileLoadAction->setObjectName("fileLoadAction");
        fileSaveAction = new QAction(GuiMainWindow);
        fileSaveAction->setObjectName("fileSaveAction");
        toolsHideAction = new QAction(GuiMainWindow);
        toolsHideAction->setObjectName("toolsHideAction");
        toolsShowAction = new QAction(GuiMainWindow);
        toolsShowAction->setObjectName("toolsShowAction");
        helpAboutAction = new QAction(GuiMainWindow);
        helpAboutAction->setObjectName("helpAboutAction");
        centralwidget = new QWidget(GuiMainWindow);
        centralwidget->setObjectName("centralwidget");
        centralwidgetQHBoxLayout = new QHBoxLayout(centralwidget);
        centralwidgetQHBoxLayout->setSpacing(5);
        centralwidgetQHBoxLayout->setObjectName("centralwidgetQHBoxLayout");
        centralwidgetQHBoxLayout->setContentsMargins(5, 5, 5, 5);
        glWidget = new GuiGLWidget(centralwidget);
        glWidget->setObjectName("glWidget");
        QSizePolicy sizePolicy(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(glWidget->sizePolicy().hasHeightForWidth());
        glWidget->setSizePolicy(sizePolicy);
        glWidget->setMinimumSize(QSize(800, 800));

        centralwidgetQHBoxLayout->addWidget(glWidget);

        toolsWidget = new GuiToolsWidget(centralwidget);
        toolsWidget->setObjectName("toolsWidget");
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(toolsWidget->sizePolicy().hasHeightForWidth());
        toolsWidget->setSizePolicy(sizePolicy1);
        toolsWidget->setMinimumSize(QSize(200, 49));
        toolsWidget->setMaximumSize(QSize(400, 10000));

        centralwidgetQHBoxLayout->addWidget(toolsWidget);

        GuiMainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(GuiMainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1000, 22));
        fileMenu = new QMenu(menubar);
        fileMenu->setObjectName("fileMenu");
        toolsMenu = new QMenu(menubar);
        toolsMenu->setObjectName("toolsMenu");
        helpMenu = new QMenu(menubar);
        helpMenu->setObjectName("helpMenu");
        GuiMainWindow->setMenuBar(menubar);

        menubar->addAction(fileMenu->menuAction());
        menubar->addAction(toolsMenu->menuAction());
        menubar->addAction(helpMenu->menuAction());
        fileMenu->addAction(fileExitAction);
        fileMenu->addAction(fileLoadAction);
        fileMenu->addAction(fileSaveAction);
        toolsMenu->addAction(toolsShowAction);
        toolsMenu->addAction(toolsHideAction);
        helpMenu->addAction(helpAboutAction);

        retranslateUi(GuiMainWindow);

        QMetaObject::connectSlotsByName(GuiMainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *GuiMainWindow)
    {
        GuiMainWindow->setWindowTitle(QCoreApplication::translate("GuiMainWindow", "ENGN2501-A1 2023", nullptr));
        fileExitAction->setText(QCoreApplication::translate("GuiMainWindow", "Exit", nullptr));
        fileLoadAction->setText(QCoreApplication::translate("GuiMainWindow", "Load", nullptr));
        fileSaveAction->setText(QCoreApplication::translate("GuiMainWindow", "Save", nullptr));
        toolsHideAction->setText(QCoreApplication::translate("GuiMainWindow", "Hide", nullptr));
        toolsShowAction->setText(QCoreApplication::translate("GuiMainWindow", "Show", nullptr));
        helpAboutAction->setText(QCoreApplication::translate("GuiMainWindow", "About ...", nullptr));
        fileMenu->setTitle(QCoreApplication::translate("GuiMainWindow", "File", nullptr));
        toolsMenu->setTitle(QCoreApplication::translate("GuiMainWindow", "Tools", nullptr));
        helpMenu->setTitle(QCoreApplication::translate("GuiMainWindow", "Help", nullptr));
    } // retranslateUi

};

namespace Ui {
    class GuiMainWindow: public Ui_GuiMainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUIMAINWINDOW_H
