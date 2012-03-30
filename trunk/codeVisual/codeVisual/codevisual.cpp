#include "codevisual.h"
#include <QString>
#include <assert.h>

codeVisual::codeVisual(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags),_arrow(NULL)
{
	ui.setupUi(this);
	ui.inputView->setScene(new QGraphicsScene(this));
	CreateInput();
}
void codeVisual::SetText(QPointF variant)
{
	QString str("Position:");
	ui.posLabel->setText(str + QVariant(variant.x()).toString() + ":" + QVariant(variant.y()).toString());
}
// file name
void codeVisual::CreateInput()
{
	if (!_arrow)
	{
		QVector<QPointF> points;
		points.append(QPointF(0,0));
		points.append(QPointF(0,30));
		points.append(QPointF(10,30));
		points.append(QPointF(10,0));
		points.append(QPointF(0,0));

		QPolygonF poly(points);
		assert(poly.isClosed());
		ui.inputView->scene()->addPolygon(poly);
	}
	ui.inputView->scene()->addText("MyTestStringThatWillBeChangedVerySoonAndMustBeLongEnough");
}

codeVisual::~codeVisual()
{

}