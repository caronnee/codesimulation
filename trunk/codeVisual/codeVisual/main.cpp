#include "codevisual.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	codeVisual w;
	w.show();
	return a.exec();
}
