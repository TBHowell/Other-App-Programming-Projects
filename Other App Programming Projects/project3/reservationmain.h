#ifndef RESERVATIONMAIN_H
#define RESERVATIONMAIN_H

#include <QMainWindow>


namespace Ui {
class ReservationMain;
}

class ReservationMain : public QMainWindow
{
    Q_OBJECT

public:
    explicit ReservationMain(QWidget *parent = nullptr);
    ~ReservationMain();

private slots:
    void on_NEXT_clicked();

    void on_NEXT2_clicked();

    void on_rP_clicked();



    void on_BACK_clicked();

    void on_sKB_clicked();

    void on_S_clicked();

    void on_A_clicked();

    void on_dQB_clicked();

    void on_oA_valueChanged(int arg1);

    //void on_oA_valueChanged(const QString &arg1);

    void on_oC_valueChanged(int arg1);

    void on_dS_valueChanged(int arg1);

    void on_tabWidget_currentChanged(int index);

    void on_VisaNum_textChanged();

    void on_AmerNum_textChanged();

    void on_DiscovNum_textChanged();

    void on_MasterNum_textChanged();

    void on_CLOSE_clicked();

private:
    Ui::ReservationMain *ui;
    void calculatePrice();
    void createFeeList();
    void checkValid(QString check);
    void processFinal();

    int Adults;
    int Children;
    int CardType;

    QString cardLast;
};



#endif // RESERVATIONMAIN_H
