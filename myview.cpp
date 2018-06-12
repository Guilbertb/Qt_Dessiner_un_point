#include "myview.h"

#include <QPainter>

myview::myview(QWidget *parent) : QWidget(parent)
{

}

void myview::paintEvent(QPaintEvent *)
{
    QPainter objet(this);
    objet.drawPoint(10,10);
    objet.drawLine(20,25,50,80);

}
