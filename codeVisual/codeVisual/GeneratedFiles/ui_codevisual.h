/********************************************************************************
** Form generated from reading UI file 'codevisual.ui'
**
** Created: Thu 29. Mar 22:23:09 2012
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CODEVISUAL_H
#define UI_CODEVISUAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QGraphicsView>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>
#include <visualwindow.h>

QT_BEGIN_NAMESPACE

class Ui_codeVisualClass
{
public:
    QAction *action_Input;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    VisualWindow *showWindow;
    QPushButton *nextStep;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer;
    QLabel *posLabel;
    QLabel *label;
    QGraphicsView *inputView;
    QMenuBar *menuBar;
    QMenu *menuMain;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *codeVisualClass)
    {
        if (codeVisualClass->objectName().isEmpty())
            codeVisualClass->setObjectName(QString::fromUtf8("codeVisualClass"));
        codeVisualClass->resize(596, 569);
        action_Input = new QAction(codeVisualClass);
        action_Input->setObjectName(QString::fromUtf8("action_Input"));
        centralWidget = new QWidget(codeVisualClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        showWindow = new VisualWindow(centralWidget);
        showWindow->setObjectName(QString::fromUtf8("showWindow"));

        gridLayout->addWidget(showWindow, 1, 0, 4, 2);

        nextStep = new QPushButton(centralWidget);
        nextStep->setObjectName(QString::fromUtf8("nextStep"));

        gridLayout->addWidget(nextStep, 1, 4, 1, 1);

        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 2, 4, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 4, 4, 1, 1);

        posLabel = new QLabel(centralWidget);
        posLabel->setObjectName(QString::fromUtf8("posLabel"));
        posLabel->setFrameShape(QFrame::Panel);

        gridLayout->addWidget(posLabel, 3, 4, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 1);

        inputView = new QGraphicsView(centralWidget);
        inputView->setObjectName(QString::fromUtf8("inputView"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(inputView->sizePolicy().hasHeightForWidth());
        inputView->setSizePolicy(sizePolicy);
        inputView->setHorizontalScrollBarPolicy(Qt::ScrollBarAsNeeded);
        QBrush brush(QColor(244, 243, 255, 255));
        brush.setStyle(Qt::Dense4Pattern);
        inputView->setForegroundBrush(brush);
        inputView->setInteractive(false);
        inputView->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        gridLayout->addWidget(inputView, 0, 1, 1, 1);

        codeVisualClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(codeVisualClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 596, 21));
        menuMain = new QMenu(menuBar);
        menuMain->setObjectName(QString::fromUtf8("menuMain"));
        codeVisualClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(codeVisualClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        codeVisualClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(codeVisualClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        codeVisualClass->setStatusBar(statusBar);

        menuBar->addAction(menuMain->menuAction());
        menuMain->addAction(action_Input);

        retranslateUi(codeVisualClass);
        QObject::connect(nextStep, SIGNAL(clicked()), showWindow, SLOT(NextStep()));
        QObject::connect(showWindow, SIGNAL(PositionChanged(QPointF)), codeVisualClass, SLOT(SetText(QPointF)));

        QMetaObject::connectSlotsByName(codeVisualClass);
    } // setupUi

    void retranslateUi(QMainWindow *codeVisualClass)
    {
        codeVisualClass->setWindowTitle(QApplication::translate("codeVisualClass", "codeVisual", 0, QApplication::UnicodeUTF8));
        action_Input->setText(QApplication::translate("codeVisualClass", "&Input", 0, QApplication::UnicodeUTF8));
        nextStep->setText(QApplication::translate("codeVisualClass", "Next Step", 0, QApplication::UnicodeUTF8));
        posLabel->setText(QApplication::translate("codeVisualClass", "TextLabel", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("codeVisualClass", "TextLabel", 0, QApplication::UnicodeUTF8));
        menuMain->setTitle(QApplication::translate("codeVisualClass", "Main", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class codeVisualClass: public Ui_codeVisualClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CODEVISUAL_H
