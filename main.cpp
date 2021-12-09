#include "start.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    START w;
    w.show();

    return a.exec();
}
