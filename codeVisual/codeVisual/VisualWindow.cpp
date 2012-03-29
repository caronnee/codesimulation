#include "VisualWindow.h"
#include <QPolygon>
#include <QBrush>
#include <QGraphicsTextItem>
#include <assert.h>
#include <QFont>


VisualWindow::VisualWindow(QWidget *parent)
	: QGraphicsView(parent),_scene(NULL)
{
	setupUi(this);
	_scene = new QGraphicsScene(this);
	setScene(_scene);
	QGraphicsTextItem * it = _scene->addText("Sallut");
	it->setPos(0,0);
//	_scene->setTextColor(8);
}
void VisualWindow::mouseMoveEvent(QMouseEvent *event)
{
	QGraphicsItem * it = _scene->items()[0];
	it->setPos(event->pos());
	event->accept();
}
void VisualWindow::NextStep()
{
}
VisualWindow::~VisualWindow()
{
	if (_scene)
		delete _scene;
	_scene = NULL;
}
