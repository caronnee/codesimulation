/********************************************************************************
** Form generated from reading UI file 'VisualWindow.ui'
**
** Created: Tue 27. Mar 23:40:16 2012
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VISUALWINDOW_H
#define UI_VISUALWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGraphicsView>
#include <QtGui/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_VisualWindow
{
public:

    void setupUi(QGraphicsView *VisualWindow)
    {
        if (VisualWindow->objectName().isEmpty())
            VisualWindow->setObjectName(QString::fromUtf8("VisualWindow"));
        VisualWindow->resize(400, 300);
        QBrush brush(QColor(206, 226, 253, 255));
        brush.setStyle(Qt::BDiagPattern);
        VisualWindow->setForegroundBrush(brush);
        VisualWindow->setSceneRect(QRectF(0, 0, 100, 100));
        VisualWindow->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        retranslateUi(VisualWindow);

        QMetaObject::connectSlotsByName(VisualWindow);
    } // setupUi

    void retranslateUi(QGraphicsView *VisualWindow)
    {
        VisualWindow->setWindowTitle(QApplication::translate("VisualWindow", "VisualWindow", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class VisualWindow: public Ui_VisualWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VISUALWINDOW_H
