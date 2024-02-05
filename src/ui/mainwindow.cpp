#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "../usuario.hpp"
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

void MainWindow::on_finish_clicked()
{
    User* usuario = new User(ui->nameLine->text().toStdString(), ui->cpfLine->text().toStdString(), ui->birthLine->text().toStdString(), ui->emailLine->text().toStdString());
    usuario->saveToFile("dataBank.txt");

    ui->feedback->setText("Sucess");
}

