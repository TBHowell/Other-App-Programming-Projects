#ifndef TTTI_H
#define TTTI_H

#include <QMainWindow>
#include "tttm.h"

namespace Ui {
class TTTI;
}

class TTTI : public QMainWindow
{
    Q_OBJECT

public:
    explicit TTTI(QWidget *parent = nullptr);
    ~TTTI();    

private slots:
    void updateUI();

    void resetGame();

    void on_button11_clicked();

    void on_button12_clicked();

    void on_button13_clicked();

    void on_button21_clicked();

    void on_button22_clicked();

    void on_button23_clicked();

    void on_button31_clicked();

    void on_button32_clicked();

    void on_button33_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_reset_clicked();

    void on_textR_textChanged(const QString &arg1);

    void on_textC_textChanged(const QString &arg1);

    void on_sendText_clicked();

private:
    Ui::TTTI *ui;
    TTTM model;
};

#endif // TTTI_H
