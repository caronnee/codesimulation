/********************************************************************************
** Form generated from reading UI file 'codevisual.ui'
**
** Created: Sat 17. Mar 19:29:13 2012
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
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QMainWindow>
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
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    VisualWindow *showWindow;
    QPushButton *nextStep;
    QComboBox *comboBox;
    QSpacerItem *verticalSpacer;
    QLabel *posLabel;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *codeVisualClass)
    {
        if (codeVisualClass->objectName().isEmpty())
            codeVisualClass->setObjectName(QString::fromUtf8("codeVisualClass"));
        codeVisualClass->resize(544, 389);
        centralWidget = new QWidget(codeVisualClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        showWindow = new VisualWindow(centralWidget);
        showWindow->setObjectName(QString::fromUtf8("showWindow"));

        gridLayout->addWidget(showWindow, 0, 0, 4, 1);

        nextStep = new QPushButton(centralWidget);
        nextStep->setObjectName(QString::fromUtf8("nextStep"));

        gridLayout->addWidget(nextStep, 0, 3, 1, 1);

        comboBox = new QComboBox(centralWidget);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        gridLayout->addWidget(comboBox, 1, 3, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 3, 3, 1, 1);

        posLabel = new QLabel(centralWidget);
        posLabel->setObjectName(QString::fromUtf8("posLabel"));
        posLabel->setFrameShape(QFrame::Panel);

        gridLayout->addWidget(posLabel, 2, 3, 1, 1);

        codeVisualClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(codeVisualClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 544, 21));
        codeVisualClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(codeVisualClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        codeVisualClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(codeVisualClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        codeVisualClass->setStatusBar(statusBar);

        retranslateUi(codeVisualClass);
        QObject::connect(nextStep, SIGNAL(clicked()), showWindow, SLOT(NextStep()));
        QObject::connect(showWindow, SIGNAL(PositionChanged(QPointF)), codeVisualClass, SLOT(SetText(QPointF)));

        QMetaObject::connectSlotsByName(codeVisualClass);
    } // setupUi

    void retranslateUi(QMainWindow *codeVisualClass)
    {
        codeVisualClass->setWindowTitle(QApplication::translate("codeVisualClass", "codeVisual", 0, QApplication::UnicodeUTF8));
        nextStep->setText(QApplication::translate("codeVisualClass", "Next Step", 0, QApplication::UnicodeUTF8));
        posLabel->setText(QApplication::translate("codeVisualClass", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class codeVisualClass: public Ui_codeVisualClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CODEVISUAL_H
