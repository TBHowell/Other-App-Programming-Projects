#ifndef P1WINDOW_H
#define P1WINDOW_H

#include <QMainWindow>

namespace Ui {
class P1Window;
}

class P1Window : public QMainWindow
{
    Q_OBJECT

public:
    explicit P1Window(QWidget *parent = nullptr);
    ~P1Window();

private slots:
    void on_pushButton_clicked();

    void on_foreRedButton_clicked();

    void on_foreBlueButton_clicked();

    void on_backRedButton_clicked();

    void on_backBlueButton_clicked();

    void on_textCenterButton_clicked();

    void on_textLeftButton_clicked();

    void on_textRightButton_clicked();

    void on_endButton_clicked();

private:
    Ui::P1Window *ui;
};

#endif // P1WINDOW_H
