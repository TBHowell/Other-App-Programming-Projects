#include "canvas.h"
#include <QImage>
#include <QtWidgets>

Canvas::Canvas(QWidget *parent) : QWidget(parent)
{
    setAttribute(Qt::WA_StaticContents);

    painting = false;
    brushWidth = 2;
    brushColor = Qt::blue;

    resetImage();
}


void Canvas::mousePressEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        lastPoint = event->pos();
        painting = true;
    }

    if (event->button() == Qt::RightButton)
    {
        drawText(event->pos());
    }
}

void Canvas::mouseReleaseEvent(QMouseEvent *event)
{
    if (event->button() == Qt::LeftButton)
    {
        drawLineTo(event->pos());
        painting = false;
    }
}

void Canvas::mouseMoveEvent(QMouseEvent *event)
{
    if (event->buttons() & Qt::LeftButton && painting)
    {
        drawLineTo(event->pos());
    }
}

void Canvas::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QRect dirtyRect = event->rect();
    painter.drawImage(dirtyRect, img, dirtyRect);
}

void Canvas::resizeEvent(QResizeEvent *event)
{
    resetImage();
    update();

    QWidget::resizeEvent(event);
}

void Canvas::resetImage()
{
    QImage newImage(QSize(width(), height()), QImage::Format_RGB32);

    newImage.fill(qRgb(255,255,255));
    img = newImage;
}

void Canvas::drawLineTo(const QPoint &endPoint)
{
    QPainter painter(&img);
    painter.setPen(QPen(brushColor, brushWidth, Qt::SolidLine, Qt::RoundCap, Qt::RoundJoin));
    painter.drawLine(lastPoint, endPoint);
    update();

    lastPoint = endPoint;
}

void Canvas::drawText(const QPoint &at)
{
    QPainter painter(&img);
    painter.setFont(ourFont);
    painter.drawText(at, ourText);
    update();
}

void Canvas::changeColor(QColor c)
{
    brushColor = c;
}

void Canvas::changeWidth(int w)
{
    brushWidth = w;
}

void Canvas::changeText(QString t)
{
    ourText = t;
}

void Canvas::changeFont(QFont f)
{
    ourFont = f;
}

QColor Canvas::getColor()
{
    return brushColor;
}

QString Canvas::getText()
{
    return ourText;
}

int Canvas::getWidth()
{
    return brushWidth;
}

