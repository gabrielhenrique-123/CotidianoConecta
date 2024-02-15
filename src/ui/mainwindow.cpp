#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "servicewindow.h"
#include "userregwindow.h"
#include "servicesearchwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_serviceSearchButton_clicked()
{
    serviceSearchWindow *serviceSearch = new serviceSearchWindow(this);
    serviceSearch->show();

    this->hide();
}

