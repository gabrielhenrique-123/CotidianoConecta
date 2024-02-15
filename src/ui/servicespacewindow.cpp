#include "servicespacewindow.h"
#include "ui_servicespacewindow.h"
#include "servicewindow.h"
serviceSpaceWindow::serviceSpaceWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::serviceSpaceWindow)
{
    ui->setupUi(this);
}

serviceSpaceWindow::~serviceSpaceWindow()
{
    delete ui;
}

void serviceSpaceWindow::on_serviceSearchButton_clicked()
{
    serviceWindow *window = new serviceWindow(this);
    this->close();
    window->show();
}

