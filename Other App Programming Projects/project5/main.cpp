#include "ttti.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    TTTI w;
    w.show();

    return a.exec();
}
