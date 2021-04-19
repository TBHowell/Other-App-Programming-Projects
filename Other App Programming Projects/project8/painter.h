#ifndef PAINTER_H
#define PAINTER_H

#include <QMainWindow>
#include "canvas.h"

namespace Ui {
class Painter;
}

class Painter : public QMainWindow
{
    Q_OBJECT

public:
    explicit Painter(QWidget *parent = nullptr);
    ~Painter();

private slots:
    void on_red_clicked();

    void on_blue_clicked();

    void on_green_clicked();

    void on_purple_clicked();

    void on_width1_clicked();

    void on_width2_clicked();

    void on_width3_clicked();

    void on_width4_clicked();

    void on_face1_clicked();

    void on_face2_clicked();

    void on_hello1_clicked();

private:
    Ui::Painter *ui;
    Canvas *canvas;
    void update();
};

#endif // PAINTER_H
