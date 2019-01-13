#include "mainwindow.h"
#include <QPen>
#include <QPainter>
#include <math.h>
#define PI 3.14159


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
    this -> setGeometry(500,300,600,300);
}

MainWindow::~MainWindow()
{

}

void MainWindow::paintEvent(QPaintEvent *e)
{
    // painter
    QPainter painter(this);
    // pen
    QPen pen;

    pen.setWidth(1);
    pen.setColor(Qt::black);
    pen.setStyle(Qt::SolidLine);

    // set pen
    painter.setPen(pen);

    // Draw line
    painter.drawLine(QPointF(100,0), QPointF(100,300));
    painter.drawLine(QPointF(0,150), QPointF(600,150));

    // Change the appendix of pen
    pen.setWidth(1);
    pen.setColor(Qt::red);
    pen.setStyle(Qt::SolidLine);

    painter.setPen(pen);

    // set the origin
    painter.translate(100,150);

    // paint a range of 2*pi and start to build points
    QPointF array[360];
    for (int i = 0; i < 360; ++i)
    {
        array[i] = QPointF(i,sin(PI/180*i)*70);
    }
    painter.drawPolyline(array,360);

}
