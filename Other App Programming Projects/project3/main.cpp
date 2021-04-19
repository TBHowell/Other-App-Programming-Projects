#include "reservationmain.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    ReservationMain w;
    w.show();

    return a.exec();
}
