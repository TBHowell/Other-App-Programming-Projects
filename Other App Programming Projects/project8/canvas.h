#ifndef CANVAS_H
#define CANVAS_H

#include <QWidget>

class Canvas : public QWidget
{
    Q_OBJECT
public:
    explicit Canvas(QWidget *parent = nullptr);

signals:

public slots:

    // QWidget interface
protected:
    void mousePressEvent(QMouseEvent *event);
    void mouseReleaseEvent(QMouseEvent *event);
    void mouseMoveEvent(QMouseEvent *event);
    void paintEvent(QPaintEvent *event);
    void resizeEvent(QResizeEvent *event);

private:
    void resetImage();
    void drawLineTo(const QPoint &endPoint);
    void drawText(const QPoint &at);

    QImage img;
    bool painting;
    int brushWidth;
    QColor brushColor;
    QPoint lastPoint;
    QString ourText;
    QFont ourFont;

public:
    void changeColor(QColor c);
    void changeWidth(int w);
    void changeText(QString t);
    void changeFont(QFont f);
    QColor getColor();
    QString getText();
    int getWidth();

};

#endif // CANVAS_H
