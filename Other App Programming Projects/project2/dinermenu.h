#ifndef DINERMENU_H
#define DINERMENU_H

#include <QMainWindow>

namespace Ui {
class dinermenu;
}

class dinermenu : public QMainWindow
{
    Q_OBJECT

public:
    explicit dinermenu(QWidget *parent = nullptr);
    ~dinermenu();

private slots:
    void on_chef_clicked();

    void on_fish_clicked();

    void on_soup_clicked();

    void on_exit_clicked();

private:
    Ui::dinermenu *ui;

    QPixmap imageSoup;
    QPixmap imageChefs;
    QPixmap imageFish;
    QPixmap imageLogo;

    void loadImage();
};

#endif // DINERMENU_H
