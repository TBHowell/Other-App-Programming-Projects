#include "p1window.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    P1Window w;
    w.show();

    return a.exec();
}
