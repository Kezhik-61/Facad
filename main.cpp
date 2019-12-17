#include "facad.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Facad w;
    w.show();

    return a.exec();
}
