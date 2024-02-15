#include "mainwindow.h"
#include "servicewindow.h"
#include "loginwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    loginWIndow w;
    w.show();

   // serviceWindow s;
    //s.show();

    return a.exec();
}
