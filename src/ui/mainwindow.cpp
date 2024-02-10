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

    QSqlDatabase bancoDeDados = QSqlDatabase::addDatabase("QSQLITE");
    bancoDeDados.setDatabaseName("/home/gabriel/Documentos/Faculdade/4 Periodo/Engenharia de Software/Sprints em Grupo/Sprint 2/src/dataBank/users");

    if(!bancoDeDados.open()){
        ui->label->setText("Nao foi possivel abrir o banco de dados");
    }
    else{
        ui->label->setText("O banco de dados foi aberto com sucesso");
    }
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_serviceRegButton_clicked()
{
    serviceWindow *serviceWindowReg = new serviceWindow(this);
    serviceWindowReg->show();

    this->hide();
}


void MainWindow::on_userRegButton_clicked()
{
    userRegWindow *userWindowReg = new userRegWindow(this);
    userWindowReg->show();

    this->hide();
}


void MainWindow::on_serviceSearchButton_clicked()
{
    serviceSearchWindow *serviceSearch = new serviceSearchWindow(this);
    serviceSearch->show();

    this->hide();
}

