#include "dinermenu.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    dinermenu w;
    w.show();

    return a.exec();
}
