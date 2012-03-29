#include "codevisual.h"

codeVisual::codeVisual(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
}
void codeVisual::SetText(QPointF variant)
{
	QString str("Position:");
	ui.posLabel->setText(str + QVariant(variant.x()).toString() + ":" + QVariant(variant.y()).toString());
}
codeVisual::~codeVisual()
{

}