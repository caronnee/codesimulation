#ifndef VISUALWINDOW_H
#define VISUALWINDOW_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include "ui_VisualWindow.h"
#include <QMouseEvent>

class VisualWindow : public QGraphicsView, public Ui::VisualWindow
{
	Q_OBJECT

protected:
	QGraphicsScene* _scene;

	void mouseMoveEvent(QMouseEvent *event);
signals:
	void PositionChanged(QPointF);

public:
	VisualWindow(QWidget * parent = 0);
	~VisualWindow();
public slots:
	void NextStep();
};

#endif // VISUALWINDOW_H
