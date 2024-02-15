#include "adminspacewindow.h"
#include "ui_adminspacewindow.h"
#include "userregwindow.h"

adminSpaceWindow::adminSpaceWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::adminSpaceWindow)
{
    ui->setupUi(this);
}

adminSpaceWindow::~adminSpaceWindow()
{
    delete ui;
}

void adminSpaceWindow::on_serviceSearchButton_clicked()
{
    userRegWindow *main = new userRegWindow(this);
    this->close();
    main->show();
}

