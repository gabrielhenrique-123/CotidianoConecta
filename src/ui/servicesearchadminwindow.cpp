#include "servicesearchadminwindow.h"
#include "ui_servicesearchadminwindow.h"
#include "adminspacewindow.h"

serviceSearchAdminWindow::serviceSearchAdminWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::serviceSearchAdminWindow)
{
    ui->setupUi(this);
}

serviceSearchAdminWindow::~serviceSearchAdminWindow()
{
    delete ui;
}

void serviceSearchAdminWindow::on_pushButton_4_clicked()
{
    adminSpaceWindow *main = new adminSpaceWindow(this);
    this->close();
    main->show();
}

