#include "mainwindow.h"
#include "servicewindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

   // serviceWindow s;
    //s.show();

    return a.exec();
}
