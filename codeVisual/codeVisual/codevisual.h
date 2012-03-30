#ifndef CODEVISUAL_H
#define CODEVISUAL_H

#include <QtGui/QMainWindow>
#include <QPaintEvent>

#include "ui_codevisual.h"

class codeVisual : public QMainWindow
{
	Q_OBJECT

public:
	codeVisual(QWidget *parent = 0, Qt::WFlags flags = 0);
	~codeVisual();
	void onPaintEvent(QPaintEvent event);
public slots:
	void CreateInput();
	void SetText(QPointF variant);
private:
	Ui::codeVisualClass ui;
	QGraphicsItem * _arrow;
};

#endif // CODEVISUAL_H
