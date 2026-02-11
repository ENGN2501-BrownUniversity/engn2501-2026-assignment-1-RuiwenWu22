/********************************************************************************
** Form generated from reading UI file 'GuiToolsWidget.ui'
**
** Created by: Qt User Interface Compiler version 6.5.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUITOOLSWIDGET_H
#define UI_GUITOOLSWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_GuiToolsWidget
{
public:
    QVBoxLayout *toolsVBoxLayout;
    QLabel *label3DCanvasSize;
    QWidget *panel3DCanvasSize;
    QVBoxLayout *panel3DCanvasSizeVBoxLayout;
    QGridLayout *panel3DCanvasGridLayout;
    QLabel *label3DCanvasWidth;
    QLineEdit *edit3DCanvasWidth;
    QLabel *label3DCanvasHeight;
    QLineEdit *edit3DCanvasHeight;
    QLabel *labelBBox;
    QWidget *panelBBox;
    QVBoxLayout *panelBBoxVBoxLayout;
    QGridLayout *panelBBoxGridLayout;
    QLabel *labelBBoxSize;
    QSpinBox *spinBoxBBoxDepth;
    QPushButton *pushButtonBBoxAdd;
    QPushButton *pushButtonBBoxRemove;
    QLabel *labelBBoxScale;
    QLineEdit *editBBoxScale;
    QCheckBox *checkBoxBBoxCube;
    QLabel *labelGridCells;
    QLineEdit *editGridCells;
    QLabel *labelGridVertices;
    QLineEdit *editGridVertices;
    QLabel *labelNormalVectors;
    QWidget *panelNormalVectors;
    QVBoxLayout *panelNormalVectorsVBoxLayout;
    QGridLayout *panelNormalVectorsGridLayout;
    QPushButton *pushButtonSceneGraphNormalInvert;
    QPushButton *pushButtonSceneGraphNormalNone;
    QPushButton *pushButtonSceneGraphNormalPerVertex;
    QPushButton *pushButtonSceneGraphNormalPerFace;
    QPushButton *pushButtonSceneGraphNormalPerCorner;
    QLabel *labelEdges;
    QWidget *panelEdges;
    QVBoxLayout *panelEdgesVBoxLayout;
    QGridLayout *panelEdgesGridLayout;
    QPushButton *pushButtonSceneGraphEdgesAdd;
    QPushButton *pushButtonSceneGraphEdgesRemove;
    QPushButton *pushButtonSceneGraphEdgesShow;
    QPushButton *pushButtonSceneGraphEdgesHide;
    QLabel *labelSceneGraph;
    QWidget *panelSceneGraph;
    QVBoxLayout *panelSceneGraphVBoxLayout;
    QGridLayout *panelSceneGraphGridLayout;
    QLabel *labelSceneIndexedFaceSets;
    QPushButton *pushButtonSceneGraphIndexedFaceSetsShow;
    QPushButton *pushButtonSceneGraphIndexedFaceSetsHide;
    QLabel *labelSceneIndexedLineSets;
    QPushButton *pushButtonSceneGraphIndexedLineSetsShow;
    QPushButton *pushButtonSceneGraphIndexedLineSetsHide;
    QLabel *labelPoints;
    QWidget *panelPoints;
    QVBoxLayout *panelPointsVBoxLayout;
    QGridLayout *panelPointsGridLayout;
    QLineEdit *editPointsNumber;
    QLabel *labelPointsHas;
    QCheckBox *checkBoxPointsHasNormals;
    QCheckBox *checkBoxPointsHasColors;
    QPushButton *pushButtonPointsRemove;
    QPushButton *pushButtonPointsShow;
    QPushButton *pushButtonPointsHide;
    QLabel *labelSurface;
    QWidget *panelSurface;
    QVBoxLayout *panelSurfaceVBoxLayout;
    QGridLayout *panelSurfaceGridLayout;
    QLabel *labelSurfaceVertices;
    QLineEdit *editSurfaceVertices;
    QLabel *labelSurfaceFaces;
    QLineEdit *editSurfaceFaces;
    QPushButton *pushButtonSurfaceRemove;
    QPushButton *pushButtonSurfaceShow;
    QPushButton *pushButtonSurfaceHide;
    QSpacerItem *toolsVerticalSpacer;

    void setupUi(QWidget *GuiToolsWidget)
    {
        if (GuiToolsWidget->objectName().isEmpty())
            GuiToolsWidget->setObjectName("GuiToolsWidget");
        toolsVBoxLayout = new QVBoxLayout(GuiToolsWidget);
        toolsVBoxLayout->setSpacing(5);
        toolsVBoxLayout->setObjectName("toolsVBoxLayout");
        toolsVBoxLayout->setContentsMargins(0, 0, 0, 0);
        label3DCanvasSize = new QLabel(GuiToolsWidget);
        label3DCanvasSize->setObjectName("label3DCanvasSize");
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label3DCanvasSize->sizePolicy().hasHeightForWidth());
        label3DCanvasSize->setSizePolicy(sizePolicy);
        label3DCanvasSize->setMinimumSize(QSize(50, 22));
        label3DCanvasSize->setMaximumSize(QSize(10000, 22));
        label3DCanvasSize->setAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        label3DCanvasSize->setStyleSheet(QString::fromUtf8("QLabel { background-color : rgb(200,200,200); color : black; }"));
        QFont font;
        font.setPointSize(10);
        label3DCanvasSize->setFont(font);

        toolsVBoxLayout->addWidget(label3DCanvasSize);

        panel3DCanvasSize = new QWidget(GuiToolsWidget);
        panel3DCanvasSize->setObjectName("panel3DCanvasSize");
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(panel3DCanvasSize->sizePolicy().hasHeightForWidth());
        panel3DCanvasSize->setSizePolicy(sizePolicy1);
        panel3DCanvasSizeVBoxLayout = new QVBoxLayout(panel3DCanvasSize);
        panel3DCanvasSizeVBoxLayout->setSpacing(0);
        panel3DCanvasSizeVBoxLayout->setObjectName("panel3DCanvasSizeVBoxLayout");
        panel3DCanvasSizeVBoxLayout->setContentsMargins(0, 0, 0, 0);
        panel3DCanvasGridLayout = new QGridLayout();
        panel3DCanvasGridLayout->setSpacing(5);
        panel3DCanvasGridLayout->setObjectName("panel3DCanvasGridLayout");
        panel3DCanvasGridLayout->setContentsMargins(0, 0, 0, 0);
        label3DCanvasWidth = new QLabel(panel3DCanvasSize);
        label3DCanvasWidth->setObjectName("label3DCanvasWidth");
        sizePolicy.setHeightForWidth(label3DCanvasWidth->sizePolicy().hasHeightForWidth());
        label3DCanvasWidth->setSizePolicy(sizePolicy);
        label3DCanvasWidth->setMinimumSize(QSize(50, 22));
        label3DCanvasWidth->setMaximumSize(QSize(10000, 22));
        label3DCanvasWidth->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        label3DCanvasWidth->setMargin(5);
        label3DCanvasWidth->setFont(font);

        panel3DCanvasGridLayout->addWidget(label3DCanvasWidth, 0, 0, 1, 1);

        edit3DCanvasWidth = new QLineEdit(panel3DCanvasSize);
        edit3DCanvasWidth->setObjectName("edit3DCanvasWidth");
        sizePolicy.setHeightForWidth(edit3DCanvasWidth->sizePolicy().hasHeightForWidth());
        edit3DCanvasWidth->setSizePolicy(sizePolicy);
        edit3DCanvasWidth->setMinimumSize(QSize(50, 22));
        edit3DCanvasWidth->setMaximumSize(QSize(10000, 22));
        edit3DCanvasWidth->setReadOnly(true);
        edit3DCanvasWidth->setFont(font);

        panel3DCanvasGridLayout->addWidget(edit3DCanvasWidth, 0, 1, 1, 1);

        label3DCanvasHeight = new QLabel(panel3DCanvasSize);
        label3DCanvasHeight->setObjectName("label3DCanvasHeight");
        sizePolicy.setHeightForWidth(label3DCanvasHeight->sizePolicy().hasHeightForWidth());
        label3DCanvasHeight->setSizePolicy(sizePolicy);
        label3DCanvasHeight->setMinimumSize(QSize(50, 22));
        label3DCanvasHeight->setMaximumSize(QSize(10000, 22));
        label3DCanvasHeight->setMargin(5);
        label3DCanvasHeight->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        label3DCanvasHeight->setFont(font);

        panel3DCanvasGridLayout->addWidget(label3DCanvasHeight, 0, 2, 1, 1);

        edit3DCanvasHeight = new QLineEdit(panel3DCanvasSize);
        edit3DCanvasHeight->setObjectName("edit3DCanvasHeight");
        sizePolicy.setHeightForWidth(edit3DCanvasHeight->sizePolicy().hasHeightForWidth());
        edit3DCanvasHeight->setSizePolicy(sizePolicy);
        edit3DCanvasHeight->setMinimumSize(QSize(50, 22));
        edit3DCanvasHeight->setMaximumSize(QSize(10000, 22));
        edit3DCanvasHeight->setReadOnly(true);
        edit3DCanvasHeight->setFont(font);

        panel3DCanvasGridLayout->addWidget(edit3DCanvasHeight, 0, 3, 1, 1);


        panel3DCanvasSizeVBoxLayout->addLayout(panel3DCanvasGridLayout);


        toolsVBoxLayout->addWidget(panel3DCanvasSize);

        labelBBox = new QLabel(GuiToolsWidget);
        labelBBox->setObjectName("labelBBox");
        sizePolicy.setHeightForWidth(labelBBox->sizePolicy().hasHeightForWidth());
        labelBBox->setSizePolicy(sizePolicy);
        labelBBox->setMinimumSize(QSize(50, 22));
        labelBBox->setMaximumSize(QSize(10000, 22));
        labelBBox->setAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        labelBBox->setStyleSheet(QString::fromUtf8("QLabel { background-color : rgb(200,200,200); color : black; }"));
        labelBBox->setFont(font);

        toolsVBoxLayout->addWidget(labelBBox);

        panelBBox = new QWidget(GuiToolsWidget);
        panelBBox->setObjectName("panelBBox");
        sizePolicy1.setHeightForWidth(panelBBox->sizePolicy().hasHeightForWidth());
        panelBBox->setSizePolicy(sizePolicy1);
        panelBBoxVBoxLayout = new QVBoxLayout(panelBBox);
        panelBBoxVBoxLayout->setSpacing(0);
        panelBBoxVBoxLayout->setObjectName("panelBBoxVBoxLayout");
        panelBBoxVBoxLayout->setContentsMargins(0, 0, 0, 0);
        panelBBoxGridLayout = new QGridLayout();
        panelBBoxGridLayout->setSpacing(5);
        panelBBoxGridLayout->setObjectName("panelBBoxGridLayout");
        panelBBoxGridLayout->setContentsMargins(0, 0, 0, 0);
        labelBBoxSize = new QLabel(panelBBox);
        labelBBoxSize->setObjectName("labelBBoxSize");
        sizePolicy.setHeightForWidth(labelBBoxSize->sizePolicy().hasHeightForWidth());
        labelBBoxSize->setSizePolicy(sizePolicy);
        labelBBoxSize->setMinimumSize(QSize(50, 22));
        labelBBoxSize->setMaximumSize(QSize(10000, 22));
        labelBBoxSize->setMargin(5);
        labelBBoxSize->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        labelBBoxSize->setFont(font);

        panelBBoxGridLayout->addWidget(labelBBoxSize, 0, 0, 1, 1);

        spinBoxBBoxDepth = new QSpinBox(panelBBox);
        spinBoxBBoxDepth->setObjectName("spinBoxBBoxDepth");
        sizePolicy.setHeightForWidth(spinBoxBBoxDepth->sizePolicy().hasHeightForWidth());
        spinBoxBBoxDepth->setSizePolicy(sizePolicy);
        spinBoxBBoxDepth->setMinimumSize(QSize(50, 22));
        spinBoxBBoxDepth->setMaximumSize(QSize(10000, 22));
        spinBoxBBoxDepth->setMinimum(0);
        spinBoxBBoxDepth->setMaximum(10);
        spinBoxBBoxDepth->setValue(0);
        spinBoxBBoxDepth->setFont(font);

        panelBBoxGridLayout->addWidget(spinBoxBBoxDepth, 0, 1, 1, 1);

        pushButtonBBoxAdd = new QPushButton(panelBBox);
        pushButtonBBoxAdd->setObjectName("pushButtonBBoxAdd");
        sizePolicy.setHeightForWidth(pushButtonBBoxAdd->sizePolicy().hasHeightForWidth());
        pushButtonBBoxAdd->setSizePolicy(sizePolicy);
        pushButtonBBoxAdd->setFont(font);

        panelBBoxGridLayout->addWidget(pushButtonBBoxAdd, 0, 2, 1, 1);

        pushButtonBBoxRemove = new QPushButton(panelBBox);
        pushButtonBBoxRemove->setObjectName("pushButtonBBoxRemove");
        sizePolicy.setHeightForWidth(pushButtonBBoxRemove->sizePolicy().hasHeightForWidth());
        pushButtonBBoxRemove->setSizePolicy(sizePolicy);
        pushButtonBBoxRemove->setFont(font);

        panelBBoxGridLayout->addWidget(pushButtonBBoxRemove, 0, 3, 1, 1);

        labelBBoxScale = new QLabel(panelBBox);
        labelBBoxScale->setObjectName("labelBBoxScale");
        sizePolicy.setHeightForWidth(labelBBoxScale->sizePolicy().hasHeightForWidth());
        labelBBoxScale->setSizePolicy(sizePolicy);
        labelBBoxScale->setMinimumSize(QSize(50, 22));
        labelBBoxScale->setMaximumSize(QSize(10000, 22));
        labelBBoxScale->setMargin(5);
        labelBBoxScale->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        labelBBoxScale->setFont(font);

        panelBBoxGridLayout->addWidget(labelBBoxScale, 1, 0, 1, 1);

        editBBoxScale = new QLineEdit(panelBBox);
        editBBoxScale->setObjectName("editBBoxScale");
        sizePolicy.setHeightForWidth(editBBoxScale->sizePolicy().hasHeightForWidth());
        editBBoxScale->setSizePolicy(sizePolicy);
        editBBoxScale->setMinimumSize(QSize(50, 22));
        editBBoxScale->setMaximumSize(QSize(10000, 22));
        editBBoxScale->setReadOnly(false);
        editBBoxScale->setFont(font);

        panelBBoxGridLayout->addWidget(editBBoxScale, 1, 1, 1, 1);

        checkBoxBBoxCube = new QCheckBox(panelBBox);
        checkBoxBBoxCube->setObjectName("checkBoxBBoxCube");
        sizePolicy.setHeightForWidth(checkBoxBBoxCube->sizePolicy().hasHeightForWidth());
        checkBoxBBoxCube->setSizePolicy(sizePolicy);
        checkBoxBBoxCube->setMinimumSize(QSize(50, 22));
        checkBoxBBoxCube->setMaximumSize(QSize(10000, 22));
        checkBoxBBoxCube->setChecked(true);
        checkBoxBBoxCube->setFont(font);

        panelBBoxGridLayout->addWidget(checkBoxBBoxCube, 1, 2, 1, 1);

        labelGridCells = new QLabel(panelBBox);
        labelGridCells->setObjectName("labelGridCells");
        sizePolicy.setHeightForWidth(labelGridCells->sizePolicy().hasHeightForWidth());
        labelGridCells->setSizePolicy(sizePolicy);
        labelGridCells->setMinimumSize(QSize(50, 22));
        labelGridCells->setMaximumSize(QSize(10000, 22));
        labelGridCells->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        labelGridCells->setMargin(5);
        labelGridCells->setFont(font);

        panelBBoxGridLayout->addWidget(labelGridCells, 2, 0, 1, 1);

        editGridCells = new QLineEdit(panelBBox);
        editGridCells->setObjectName("editGridCells");
        sizePolicy.setHeightForWidth(editGridCells->sizePolicy().hasHeightForWidth());
        editGridCells->setSizePolicy(sizePolicy);
        editGridCells->setMinimumSize(QSize(50, 22));
        editGridCells->setMaximumSize(QSize(10000, 22));
        editGridCells->setReadOnly(true);
        editGridCells->setFont(font);

        panelBBoxGridLayout->addWidget(editGridCells, 2, 1, 1, 1);

        labelGridVertices = new QLabel(panelBBox);
        labelGridVertices->setObjectName("labelGridVertices");
        sizePolicy.setHeightForWidth(labelGridVertices->sizePolicy().hasHeightForWidth());
        labelGridVertices->setSizePolicy(sizePolicy);
        labelGridVertices->setMinimumSize(QSize(50, 22));
        labelGridVertices->setMaximumSize(QSize(10000, 22));
        labelGridVertices->setMargin(5);
        labelGridVertices->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        labelGridVertices->setFont(font);

        panelBBoxGridLayout->addWidget(labelGridVertices, 2, 2, 1, 1);

        editGridVertices = new QLineEdit(panelBBox);
        editGridVertices->setObjectName("editGridVertices");
        sizePolicy.setHeightForWidth(editGridVertices->sizePolicy().hasHeightForWidth());
        editGridVertices->setSizePolicy(sizePolicy);
        editGridVertices->setMinimumSize(QSize(50, 22));
        editGridVertices->setMaximumSize(QSize(10000, 22));
        editGridVertices->setReadOnly(true);
        editGridVertices->setFont(font);

        panelBBoxGridLayout->addWidget(editGridVertices, 2, 3, 1, 1);


        panelBBoxVBoxLayout->addLayout(panelBBoxGridLayout);


        toolsVBoxLayout->addWidget(panelBBox);

        labelNormalVectors = new QLabel(GuiToolsWidget);
        labelNormalVectors->setObjectName("labelNormalVectors");
        sizePolicy.setHeightForWidth(labelNormalVectors->sizePolicy().hasHeightForWidth());
        labelNormalVectors->setSizePolicy(sizePolicy);
        labelNormalVectors->setMinimumSize(QSize(50, 22));
        labelNormalVectors->setMaximumSize(QSize(10000, 22));
        labelNormalVectors->setAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        labelNormalVectors->setStyleSheet(QString::fromUtf8("QLabel { background-color : rgb(200,200,200); color : black; }"));
        labelNormalVectors->setFont(font);

        toolsVBoxLayout->addWidget(labelNormalVectors);

        panelNormalVectors = new QWidget(GuiToolsWidget);
        panelNormalVectors->setObjectName("panelNormalVectors");
        sizePolicy1.setHeightForWidth(panelNormalVectors->sizePolicy().hasHeightForWidth());
        panelNormalVectors->setSizePolicy(sizePolicy1);
        panelNormalVectorsVBoxLayout = new QVBoxLayout(panelNormalVectors);
        panelNormalVectorsVBoxLayout->setSpacing(0);
        panelNormalVectorsVBoxLayout->setObjectName("panelNormalVectorsVBoxLayout");
        panelNormalVectorsVBoxLayout->setContentsMargins(0, 0, 0, 0);
        panelNormalVectorsGridLayout = new QGridLayout();
        panelNormalVectorsGridLayout->setSpacing(5);
        panelNormalVectorsGridLayout->setObjectName("panelNormalVectorsGridLayout");
        panelNormalVectorsGridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonSceneGraphNormalInvert = new QPushButton(panelNormalVectors);
        pushButtonSceneGraphNormalInvert->setObjectName("pushButtonSceneGraphNormalInvert");
        sizePolicy.setHeightForWidth(pushButtonSceneGraphNormalInvert->sizePolicy().hasHeightForWidth());
        pushButtonSceneGraphNormalInvert->setSizePolicy(sizePolicy);
        pushButtonSceneGraphNormalInvert->setFont(font);

        panelNormalVectorsGridLayout->addWidget(pushButtonSceneGraphNormalInvert, 0, 2, 1, 1);

        pushButtonSceneGraphNormalNone = new QPushButton(panelNormalVectors);
        pushButtonSceneGraphNormalNone->setObjectName("pushButtonSceneGraphNormalNone");
        sizePolicy.setHeightForWidth(pushButtonSceneGraphNormalNone->sizePolicy().hasHeightForWidth());
        pushButtonSceneGraphNormalNone->setSizePolicy(sizePolicy);
        pushButtonSceneGraphNormalNone->setFont(font);

        panelNormalVectorsGridLayout->addWidget(pushButtonSceneGraphNormalNone, 0, 3, 1, 1);

        pushButtonSceneGraphNormalPerVertex = new QPushButton(panelNormalVectors);
        pushButtonSceneGraphNormalPerVertex->setObjectName("pushButtonSceneGraphNormalPerVertex");
        sizePolicy.setHeightForWidth(pushButtonSceneGraphNormalPerVertex->sizePolicy().hasHeightForWidth());
        pushButtonSceneGraphNormalPerVertex->setSizePolicy(sizePolicy);
        pushButtonSceneGraphNormalPerVertex->setFont(font);

        panelNormalVectorsGridLayout->addWidget(pushButtonSceneGraphNormalPerVertex, 1, 1, 1, 1);

        pushButtonSceneGraphNormalPerFace = new QPushButton(panelNormalVectors);
        pushButtonSceneGraphNormalPerFace->setObjectName("pushButtonSceneGraphNormalPerFace");
        sizePolicy.setHeightForWidth(pushButtonSceneGraphNormalPerFace->sizePolicy().hasHeightForWidth());
        pushButtonSceneGraphNormalPerFace->setSizePolicy(sizePolicy);
        pushButtonSceneGraphNormalPerFace->setFont(font);

        panelNormalVectorsGridLayout->addWidget(pushButtonSceneGraphNormalPerFace, 1, 2, 1, 1);

        pushButtonSceneGraphNormalPerCorner = new QPushButton(panelNormalVectors);
        pushButtonSceneGraphNormalPerCorner->setObjectName("pushButtonSceneGraphNormalPerCorner");
        sizePolicy.setHeightForWidth(pushButtonSceneGraphNormalPerCorner->sizePolicy().hasHeightForWidth());
        pushButtonSceneGraphNormalPerCorner->setSizePolicy(sizePolicy);
        pushButtonSceneGraphNormalPerCorner->setFont(font);

        panelNormalVectorsGridLayout->addWidget(pushButtonSceneGraphNormalPerCorner, 1, 3, 1, 1);


        panelNormalVectorsVBoxLayout->addLayout(panelNormalVectorsGridLayout);


        toolsVBoxLayout->addWidget(panelNormalVectors);

        labelEdges = new QLabel(GuiToolsWidget);
        labelEdges->setObjectName("labelEdges");
        sizePolicy.setHeightForWidth(labelEdges->sizePolicy().hasHeightForWidth());
        labelEdges->setSizePolicy(sizePolicy);
        labelEdges->setMinimumSize(QSize(50, 22));
        labelEdges->setMaximumSize(QSize(10000, 22));
        labelEdges->setAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        labelEdges->setStyleSheet(QString::fromUtf8("QLabel { background-color : rgb(200,200,200); color : black; }"));
        labelEdges->setFont(font);

        toolsVBoxLayout->addWidget(labelEdges);

        panelEdges = new QWidget(GuiToolsWidget);
        panelEdges->setObjectName("panelEdges");
        sizePolicy1.setHeightForWidth(panelEdges->sizePolicy().hasHeightForWidth());
        panelEdges->setSizePolicy(sizePolicy1);
        panelEdgesVBoxLayout = new QVBoxLayout(panelEdges);
        panelEdgesVBoxLayout->setSpacing(0);
        panelEdgesVBoxLayout->setObjectName("panelEdgesVBoxLayout");
        panelEdgesVBoxLayout->setContentsMargins(0, 0, 0, 0);
        panelEdgesGridLayout = new QGridLayout();
        panelEdgesGridLayout->setSpacing(5);
        panelEdgesGridLayout->setObjectName("panelEdgesGridLayout");
        panelEdgesGridLayout->setContentsMargins(0, 0, 0, 0);
        pushButtonSceneGraphEdgesAdd = new QPushButton(panelEdges);
        pushButtonSceneGraphEdgesAdd->setObjectName("pushButtonSceneGraphEdgesAdd");
        sizePolicy.setHeightForWidth(pushButtonSceneGraphEdgesAdd->sizePolicy().hasHeightForWidth());
        pushButtonSceneGraphEdgesAdd->setSizePolicy(sizePolicy);
        pushButtonSceneGraphEdgesAdd->setFont(font);

        panelEdgesGridLayout->addWidget(pushButtonSceneGraphEdgesAdd, 0, 0, 1, 1);

        pushButtonSceneGraphEdgesRemove = new QPushButton(panelEdges);
        pushButtonSceneGraphEdgesRemove->setObjectName("pushButtonSceneGraphEdgesRemove");
        sizePolicy.setHeightForWidth(pushButtonSceneGraphEdgesRemove->sizePolicy().hasHeightForWidth());
        pushButtonSceneGraphEdgesRemove->setSizePolicy(sizePolicy);
        pushButtonSceneGraphEdgesRemove->setFont(font);

        panelEdgesGridLayout->addWidget(pushButtonSceneGraphEdgesRemove, 0, 1, 1, 1);

        pushButtonSceneGraphEdgesShow = new QPushButton(panelEdges);
        pushButtonSceneGraphEdgesShow->setObjectName("pushButtonSceneGraphEdgesShow");
        sizePolicy.setHeightForWidth(pushButtonSceneGraphEdgesShow->sizePolicy().hasHeightForWidth());
        pushButtonSceneGraphEdgesShow->setSizePolicy(sizePolicy);
        pushButtonSceneGraphEdgesShow->setFont(font);

        panelEdgesGridLayout->addWidget(pushButtonSceneGraphEdgesShow, 0, 2, 1, 1);

        pushButtonSceneGraphEdgesHide = new QPushButton(panelEdges);
        pushButtonSceneGraphEdgesHide->setObjectName("pushButtonSceneGraphEdgesHide");
        sizePolicy.setHeightForWidth(pushButtonSceneGraphEdgesHide->sizePolicy().hasHeightForWidth());
        pushButtonSceneGraphEdgesHide->setSizePolicy(sizePolicy);
        pushButtonSceneGraphEdgesHide->setFont(font);

        panelEdgesGridLayout->addWidget(pushButtonSceneGraphEdgesHide, 0, 3, 1, 1);


        panelEdgesVBoxLayout->addLayout(panelEdgesGridLayout);


        toolsVBoxLayout->addWidget(panelEdges);

        labelSceneGraph = new QLabel(GuiToolsWidget);
        labelSceneGraph->setObjectName("labelSceneGraph");
        sizePolicy.setHeightForWidth(labelSceneGraph->sizePolicy().hasHeightForWidth());
        labelSceneGraph->setSizePolicy(sizePolicy);
        labelSceneGraph->setMinimumSize(QSize(50, 22));
        labelSceneGraph->setMaximumSize(QSize(10000, 22));
        labelSceneGraph->setAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        labelSceneGraph->setStyleSheet(QString::fromUtf8("QLabel { background-color : rgb(200,200,200); color : black; }"));
        labelSceneGraph->setFont(font);

        toolsVBoxLayout->addWidget(labelSceneGraph);

        panelSceneGraph = new QWidget(GuiToolsWidget);
        panelSceneGraph->setObjectName("panelSceneGraph");
        sizePolicy.setHeightForWidth(panelSceneGraph->sizePolicy().hasHeightForWidth());
        panelSceneGraph->setSizePolicy(sizePolicy);
        panelSceneGraphVBoxLayout = new QVBoxLayout(panelSceneGraph);
        panelSceneGraphVBoxLayout->setSpacing(0);
        panelSceneGraphVBoxLayout->setObjectName("panelSceneGraphVBoxLayout");
        panelSceneGraphVBoxLayout->setContentsMargins(0, 0, 0, 0);
        panelSceneGraphGridLayout = new QGridLayout();
        panelSceneGraphGridLayout->setSpacing(5);
        panelSceneGraphGridLayout->setObjectName("panelSceneGraphGridLayout");
        panelSceneGraphGridLayout->setContentsMargins(0, 0, 0, 0);
        labelSceneIndexedFaceSets = new QLabel(panelSceneGraph);
        labelSceneIndexedFaceSets->setObjectName("labelSceneIndexedFaceSets");
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(2);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelSceneIndexedFaceSets->sizePolicy().hasHeightForWidth());
        labelSceneIndexedFaceSets->setSizePolicy(sizePolicy2);
        labelSceneIndexedFaceSets->setMargin(5);
        labelSceneIndexedFaceSets->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        labelSceneIndexedFaceSets->setFont(font);

        panelSceneGraphGridLayout->addWidget(labelSceneIndexedFaceSets, 0, 1, 1, 1);

        pushButtonSceneGraphIndexedFaceSetsShow = new QPushButton(panelSceneGraph);
        pushButtonSceneGraphIndexedFaceSetsShow->setObjectName("pushButtonSceneGraphIndexedFaceSetsShow");
        sizePolicy.setHeightForWidth(pushButtonSceneGraphIndexedFaceSetsShow->sizePolicy().hasHeightForWidth());
        pushButtonSceneGraphIndexedFaceSetsShow->setSizePolicy(sizePolicy);
        pushButtonSceneGraphIndexedFaceSetsShow->setFont(font);

        panelSceneGraphGridLayout->addWidget(pushButtonSceneGraphIndexedFaceSetsShow, 0, 2, 1, 1);

        pushButtonSceneGraphIndexedFaceSetsHide = new QPushButton(panelSceneGraph);
        pushButtonSceneGraphIndexedFaceSetsHide->setObjectName("pushButtonSceneGraphIndexedFaceSetsHide");
        sizePolicy.setHeightForWidth(pushButtonSceneGraphIndexedFaceSetsHide->sizePolicy().hasHeightForWidth());
        pushButtonSceneGraphIndexedFaceSetsHide->setSizePolicy(sizePolicy);
        pushButtonSceneGraphIndexedFaceSetsHide->setFont(font);

        panelSceneGraphGridLayout->addWidget(pushButtonSceneGraphIndexedFaceSetsHide, 0, 3, 1, 1);

        labelSceneIndexedLineSets = new QLabel(panelSceneGraph);
        labelSceneIndexedLineSets->setObjectName("labelSceneIndexedLineSets");
        sizePolicy2.setHeightForWidth(labelSceneIndexedLineSets->sizePolicy().hasHeightForWidth());
        labelSceneIndexedLineSets->setSizePolicy(sizePolicy2);
        labelSceneIndexedLineSets->setMargin(5);
        labelSceneIndexedLineSets->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        labelSceneIndexedLineSets->setFont(font);

        panelSceneGraphGridLayout->addWidget(labelSceneIndexedLineSets, 1, 1, 1, 1);

        pushButtonSceneGraphIndexedLineSetsShow = new QPushButton(panelSceneGraph);
        pushButtonSceneGraphIndexedLineSetsShow->setObjectName("pushButtonSceneGraphIndexedLineSetsShow");
        sizePolicy.setHeightForWidth(pushButtonSceneGraphIndexedLineSetsShow->sizePolicy().hasHeightForWidth());
        pushButtonSceneGraphIndexedLineSetsShow->setSizePolicy(sizePolicy);
        pushButtonSceneGraphIndexedLineSetsShow->setFont(font);

        panelSceneGraphGridLayout->addWidget(pushButtonSceneGraphIndexedLineSetsShow, 1, 2, 1, 1);

        pushButtonSceneGraphIndexedLineSetsHide = new QPushButton(panelSceneGraph);
        pushButtonSceneGraphIndexedLineSetsHide->setObjectName("pushButtonSceneGraphIndexedLineSetsHide");
        sizePolicy.setHeightForWidth(pushButtonSceneGraphIndexedLineSetsHide->sizePolicy().hasHeightForWidth());
        pushButtonSceneGraphIndexedLineSetsHide->setSizePolicy(sizePolicy);
        pushButtonSceneGraphIndexedLineSetsHide->setFont(font);

        panelSceneGraphGridLayout->addWidget(pushButtonSceneGraphIndexedLineSetsHide, 1, 3, 1, 1);


        panelSceneGraphVBoxLayout->addLayout(panelSceneGraphGridLayout);


        toolsVBoxLayout->addWidget(panelSceneGraph);

        labelPoints = new QLabel(GuiToolsWidget);
        labelPoints->setObjectName("labelPoints");
        sizePolicy.setHeightForWidth(labelPoints->sizePolicy().hasHeightForWidth());
        labelPoints->setSizePolicy(sizePolicy);
        labelPoints->setMinimumSize(QSize(50, 22));
        labelPoints->setMaximumSize(QSize(10000, 22));
        labelPoints->setAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        labelPoints->setStyleSheet(QString::fromUtf8("QLabel { background-color : rgb(200,200,200); color : black; }"));
        labelPoints->setFont(font);

        toolsVBoxLayout->addWidget(labelPoints);

        panelPoints = new QWidget(GuiToolsWidget);
        panelPoints->setObjectName("panelPoints");
        sizePolicy1.setHeightForWidth(panelPoints->sizePolicy().hasHeightForWidth());
        panelPoints->setSizePolicy(sizePolicy1);
        panelPointsVBoxLayout = new QVBoxLayout(panelPoints);
        panelPointsVBoxLayout->setSpacing(0);
        panelPointsVBoxLayout->setObjectName("panelPointsVBoxLayout");
        panelPointsVBoxLayout->setContentsMargins(0, 0, 0, 0);
        panelPointsGridLayout = new QGridLayout();
        panelPointsGridLayout->setSpacing(5);
        panelPointsGridLayout->setObjectName("panelPointsGridLayout");
        panelPointsGridLayout->setContentsMargins(0, 0, 0, 0);
        editPointsNumber = new QLineEdit(panelPoints);
        editPointsNumber->setObjectName("editPointsNumber");
        sizePolicy.setHeightForWidth(editPointsNumber->sizePolicy().hasHeightForWidth());
        editPointsNumber->setSizePolicy(sizePolicy);
        editPointsNumber->setReadOnly(true);
        editPointsNumber->setFont(font);

        panelPointsGridLayout->addWidget(editPointsNumber, 0, 0, 1, 1);

        labelPointsHas = new QLabel(panelPoints);
        labelPointsHas->setObjectName("labelPointsHas");
        sizePolicy.setHeightForWidth(labelPointsHas->sizePolicy().hasHeightForWidth());
        labelPointsHas->setSizePolicy(sizePolicy);
        labelPointsHas->setMargin(5);
        labelPointsHas->setAlignment(Qt::AlignRight|Qt::AlignVCenter);
        labelPointsHas->setFont(font);

        panelPointsGridLayout->addWidget(labelPointsHas, 0, 1, 1, 1);

        checkBoxPointsHasNormals = new QCheckBox(panelPoints);
        checkBoxPointsHasNormals->setObjectName("checkBoxPointsHasNormals");
        sizePolicy.setHeightForWidth(checkBoxPointsHasNormals->sizePolicy().hasHeightForWidth());
        checkBoxPointsHasNormals->setSizePolicy(sizePolicy);
        checkBoxPointsHasNormals->setCheckable(false);
        checkBoxPointsHasNormals->setFont(font);

        panelPointsGridLayout->addWidget(checkBoxPointsHasNormals, 0, 2, 1, 1);

        checkBoxPointsHasColors = new QCheckBox(panelPoints);
        checkBoxPointsHasColors->setObjectName("checkBoxPointsHasColors");
        sizePolicy.setHeightForWidth(checkBoxPointsHasColors->sizePolicy().hasHeightForWidth());
        checkBoxPointsHasColors->setSizePolicy(sizePolicy);
        checkBoxPointsHasColors->setCheckable(false);
        checkBoxPointsHasColors->setFont(font);

        panelPointsGridLayout->addWidget(checkBoxPointsHasColors, 0, 3, 1, 1);

        pushButtonPointsRemove = new QPushButton(panelPoints);
        pushButtonPointsRemove->setObjectName("pushButtonPointsRemove");
        sizePolicy.setHeightForWidth(pushButtonPointsRemove->sizePolicy().hasHeightForWidth());
        pushButtonPointsRemove->setSizePolicy(sizePolicy);
        pushButtonPointsRemove->setFont(font);

        panelPointsGridLayout->addWidget(pushButtonPointsRemove, 1, 1, 1, 1);

        pushButtonPointsShow = new QPushButton(panelPoints);
        pushButtonPointsShow->setObjectName("pushButtonPointsShow");
        sizePolicy.setHeightForWidth(pushButtonPointsShow->sizePolicy().hasHeightForWidth());
        pushButtonPointsShow->setSizePolicy(sizePolicy);
        pushButtonPointsShow->setFont(font);

        panelPointsGridLayout->addWidget(pushButtonPointsShow, 1, 2, 1, 1);

        pushButtonPointsHide = new QPushButton(panelPoints);
        pushButtonPointsHide->setObjectName("pushButtonPointsHide");
        sizePolicy.setHeightForWidth(pushButtonPointsHide->sizePolicy().hasHeightForWidth());
        pushButtonPointsHide->setSizePolicy(sizePolicy);
        pushButtonPointsHide->setFont(font);

        panelPointsGridLayout->addWidget(pushButtonPointsHide, 1, 3, 1, 1);


        panelPointsVBoxLayout->addLayout(panelPointsGridLayout);


        toolsVBoxLayout->addWidget(panelPoints);

        labelSurface = new QLabel(GuiToolsWidget);
        labelSurface->setObjectName("labelSurface");
        sizePolicy.setHeightForWidth(labelSurface->sizePolicy().hasHeightForWidth());
        labelSurface->setSizePolicy(sizePolicy);
        labelSurface->setMinimumSize(QSize(50, 22));
        labelSurface->setMaximumSize(QSize(10000, 22));
        labelSurface->setAlignment(Qt::AlignHCenter|Qt::AlignVCenter);
        labelSurface->setStyleSheet(QString::fromUtf8("QLabel { background-color : rgb(200,200,200); color : black; }"));
        labelSurface->setFont(font);

        toolsVBoxLayout->addWidget(labelSurface);

        panelSurface = new QWidget(GuiToolsWidget);
        panelSurface->setObjectName("panelSurface");
        sizePolicy.setHeightForWidth(panelSurface->sizePolicy().hasHeightForWidth());
        panelSurface->setSizePolicy(sizePolicy);
        panelSurfaceVBoxLayout = new QVBoxLayout(panelSurface);
        panelSurfaceVBoxLayout->setSpacing(0);
        panelSurfaceVBoxLayout->setObjectName("panelSurfaceVBoxLayout");
        panelSurfaceVBoxLayout->setContentsMargins(0, 0, 0, 0);
        panelSurfaceGridLayout = new QGridLayout();
        panelSurfaceGridLayout->setSpacing(5);
        panelSurfaceGridLayout->setObjectName("panelSurfaceGridLayout");
        panelSurfaceGridLayout->setContentsMargins(0, 0, 0, 0);
        labelSurfaceVertices = new QLabel(panelSurface);
        labelSurfaceVertices->setObjectName("labelSurfaceVertices");
        sizePolicy.setHeightForWidth(labelSurfaceVertices->sizePolicy().hasHeightForWidth());
        labelSurfaceVertices->setSizePolicy(sizePolicy);
        labelSurfaceVertices->setMargin(5);
        labelSurfaceVertices->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        labelSurfaceVertices->setFont(font);

        panelSurfaceGridLayout->addWidget(labelSurfaceVertices, 0, 1, 1, 1);

        editSurfaceVertices = new QLineEdit(panelSurface);
        editSurfaceVertices->setObjectName("editSurfaceVertices");
        sizePolicy.setHeightForWidth(editSurfaceVertices->sizePolicy().hasHeightForWidth());
        editSurfaceVertices->setSizePolicy(sizePolicy);
        editSurfaceVertices->setReadOnly(true);
        editSurfaceVertices->setFont(font);

        panelSurfaceGridLayout->addWidget(editSurfaceVertices, 0, 0, 1, 1);

        labelSurfaceFaces = new QLabel(panelSurface);
        labelSurfaceFaces->setObjectName("labelSurfaceFaces");
        sizePolicy.setHeightForWidth(labelSurfaceFaces->sizePolicy().hasHeightForWidth());
        labelSurfaceFaces->setSizePolicy(sizePolicy);
        labelSurfaceFaces->setMargin(5);
        labelSurfaceFaces->setAlignment(Qt::AlignLeft|Qt::AlignVCenter);
        labelSurfaceFaces->setFont(font);

        panelSurfaceGridLayout->addWidget(labelSurfaceFaces, 0, 3, 1, 1);

        editSurfaceFaces = new QLineEdit(panelSurface);
        editSurfaceFaces->setObjectName("editSurfaceFaces");
        sizePolicy.setHeightForWidth(editSurfaceFaces->sizePolicy().hasHeightForWidth());
        editSurfaceFaces->setSizePolicy(sizePolicy);
        editSurfaceFaces->setReadOnly(true);
        editSurfaceFaces->setFont(font);

        panelSurfaceGridLayout->addWidget(editSurfaceFaces, 0, 2, 1, 1);

        pushButtonSurfaceRemove = new QPushButton(panelSurface);
        pushButtonSurfaceRemove->setObjectName("pushButtonSurfaceRemove");
        sizePolicy.setHeightForWidth(pushButtonSurfaceRemove->sizePolicy().hasHeightForWidth());
        pushButtonSurfaceRemove->setSizePolicy(sizePolicy);
        pushButtonSurfaceRemove->setFont(font);

        panelSurfaceGridLayout->addWidget(pushButtonSurfaceRemove, 1, 1, 1, 1);

        pushButtonSurfaceShow = new QPushButton(panelSurface);
        pushButtonSurfaceShow->setObjectName("pushButtonSurfaceShow");
        sizePolicy.setHeightForWidth(pushButtonSurfaceShow->sizePolicy().hasHeightForWidth());
        pushButtonSurfaceShow->setSizePolicy(sizePolicy);
        pushButtonSurfaceShow->setFont(font);

        panelSurfaceGridLayout->addWidget(pushButtonSurfaceShow, 1, 2, 1, 1);

        pushButtonSurfaceHide = new QPushButton(panelSurface);
        pushButtonSurfaceHide->setObjectName("pushButtonSurfaceHide");
        sizePolicy.setHeightForWidth(pushButtonSurfaceHide->sizePolicy().hasHeightForWidth());
        pushButtonSurfaceHide->setSizePolicy(sizePolicy);
        pushButtonSurfaceHide->setFont(font);

        panelSurfaceGridLayout->addWidget(pushButtonSurfaceHide, 1, 3, 1, 1);


        panelSurfaceVBoxLayout->addLayout(panelSurfaceGridLayout);


        toolsVBoxLayout->addWidget(panelSurface);

        toolsVerticalSpacer = new QSpacerItem(200, 200, QSizePolicy::Minimum, QSizePolicy::Expanding);

        toolsVBoxLayout->addItem(toolsVerticalSpacer);


        retranslateUi(GuiToolsWidget);

        QMetaObject::connectSlotsByName(GuiToolsWidget);
    } // setupUi

    void retranslateUi(QWidget *GuiToolsWidget)
    {
        label3DCanvasSize->setText(QCoreApplication::translate("GuiToolsWidget", "3D CANVAS SIZE", nullptr));
        label3DCanvasWidth->setText(QCoreApplication::translate("GuiToolsWidget", "WIDTH", nullptr));
        edit3DCanvasWidth->setText(QString());
        label3DCanvasHeight->setText(QCoreApplication::translate("GuiToolsWidget", "HEIGHT", nullptr));
        edit3DCanvasHeight->setText(QString());
        labelBBox->setText(QCoreApplication::translate("GuiToolsWidget", "BBOX", nullptr));
        labelBBoxSize->setText(QCoreApplication::translate("GuiToolsWidget", "SIZE", nullptr));
        pushButtonBBoxAdd->setText(QCoreApplication::translate("GuiToolsWidget", "ADD", nullptr));
        pushButtonBBoxRemove->setText(QCoreApplication::translate("GuiToolsWidget", "REMOVE", nullptr));
        labelBBoxScale->setText(QCoreApplication::translate("GuiToolsWidget", "SCALE", nullptr));
        editBBoxScale->setText(QString());
        checkBoxBBoxCube->setText(QCoreApplication::translate("GuiToolsWidget", "CUBE", nullptr));
        labelGridCells->setText(QCoreApplication::translate("GuiToolsWidget", "CELLS", nullptr));
        editGridCells->setText(QString());
        labelGridVertices->setText(QCoreApplication::translate("GuiToolsWidget", "VERTICES", nullptr));
        editGridVertices->setText(QString());
        labelNormalVectors->setText(QCoreApplication::translate("GuiToolsWidget", "NORMAL VECTORS", nullptr));
        pushButtonSceneGraphNormalInvert->setText(QCoreApplication::translate("GuiToolsWidget", "INVERT", nullptr));
        pushButtonSceneGraphNormalNone->setText(QCoreApplication::translate("GuiToolsWidget", "REMOVE", nullptr));
        pushButtonSceneGraphNormalPerVertex->setText(QCoreApplication::translate("GuiToolsWidget", "PER VERTEX", nullptr));
        pushButtonSceneGraphNormalPerFace->setText(QCoreApplication::translate("GuiToolsWidget", "PER FACE", nullptr));
        pushButtonSceneGraphNormalPerCorner->setText(QCoreApplication::translate("GuiToolsWidget", "PER CORNER", nullptr));
        labelEdges->setText(QCoreApplication::translate("GuiToolsWidget", "EDGES", nullptr));
        pushButtonSceneGraphEdgesAdd->setText(QCoreApplication::translate("GuiToolsWidget", "ADD", nullptr));
        pushButtonSceneGraphEdgesRemove->setText(QCoreApplication::translate("GuiToolsWidget", "REMOVE", nullptr));
        pushButtonSceneGraphEdgesShow->setText(QCoreApplication::translate("GuiToolsWidget", "SHOW", nullptr));
        pushButtonSceneGraphEdgesHide->setText(QCoreApplication::translate("GuiToolsWidget", "HIDE", nullptr));
        labelSceneGraph->setText(QCoreApplication::translate("GuiToolsWidget", "SCENE GRAPH", nullptr));
        labelSceneIndexedFaceSets->setText(QCoreApplication::translate("GuiToolsWidget", "INDEXED FACE SETS", nullptr));
        pushButtonSceneGraphIndexedFaceSetsShow->setText(QCoreApplication::translate("GuiToolsWidget", "SHOW", nullptr));
        pushButtonSceneGraphIndexedFaceSetsHide->setText(QCoreApplication::translate("GuiToolsWidget", "HIDE", nullptr));
        labelSceneIndexedLineSets->setText(QCoreApplication::translate("GuiToolsWidget", "INDEXED LINE SETS", nullptr));
        pushButtonSceneGraphIndexedLineSetsShow->setText(QCoreApplication::translate("GuiToolsWidget", "SHOW", nullptr));
        pushButtonSceneGraphIndexedLineSetsHide->setText(QCoreApplication::translate("GuiToolsWidget", "HIDE", nullptr));
        labelPoints->setText(QCoreApplication::translate("GuiToolsWidget", "POINTS", nullptr));
        editPointsNumber->setText(QString());
        labelPointsHas->setText(QCoreApplication::translate("GuiToolsWidget", "HAS", nullptr));
        checkBoxPointsHasNormals->setText(QCoreApplication::translate("GuiToolsWidget", "NORMALS", nullptr));
        checkBoxPointsHasColors->setText(QCoreApplication::translate("GuiToolsWidget", "COLORS", nullptr));
        pushButtonPointsRemove->setText(QCoreApplication::translate("GuiToolsWidget", "REMOVE", nullptr));
        pushButtonPointsShow->setText(QCoreApplication::translate("GuiToolsWidget", "SHOW", nullptr));
        pushButtonPointsHide->setText(QCoreApplication::translate("GuiToolsWidget", "HIDE", nullptr));
        labelSurface->setText(QCoreApplication::translate("GuiToolsWidget", "SURFACE", nullptr));
        labelSurfaceVertices->setText(QCoreApplication::translate("GuiToolsWidget", "VERTICES", nullptr));
        editSurfaceVertices->setText(QString());
        labelSurfaceFaces->setText(QCoreApplication::translate("GuiToolsWidget", "FACES", nullptr));
        editSurfaceFaces->setText(QString());
        pushButtonSurfaceRemove->setText(QCoreApplication::translate("GuiToolsWidget", "REMOVE", nullptr));
        pushButtonSurfaceShow->setText(QCoreApplication::translate("GuiToolsWidget", "SHOW", nullptr));
        pushButtonSurfaceHide->setText(QCoreApplication::translate("GuiToolsWidget", "HIDE", nullptr));
        (void)GuiToolsWidget;
    } // retranslateUi

};

namespace Ui {
    class GuiToolsWidget: public Ui_GuiToolsWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUITOOLSWIDGET_H
