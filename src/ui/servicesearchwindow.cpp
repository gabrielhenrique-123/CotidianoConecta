#include "servicesearchwindow.h"
#include "ui_servicesearchwindow.h"
#include "mainwindow.h"
#include <QtSql>
#include <QMessageBox>

serviceSearchWindow::serviceSearchWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::serviceSearchWindow)
{
    ui->setupUi(this);
    QSqlQuery query;
    query.prepare("select * from services");
    if(query.exec()){
        int cont = 0;
        ui->twServices->setColumnCount(3);
        while(query.next()){
            ui->twServices->insertRow(cont);
            ui->twServices->setItem(cont, 0, new QTableWidgetItem(query.value(0).toString()));
            ui->twServices->setItem(cont, 1, new QTableWidgetItem(query.value(1).toString()));
            ui->twServices->setItem(cont, 2, new QTableWidgetItem(query.value(2).toString()));
            ui->twServices->setColumnWidth(3, 400);
            ui->twServices->setRowHeight(cont, 20);
            cont++;
        }
    }else{
        QMessageBox::warning(this, "ERRO", "Erro ao pesquisar na tabela servicos");
    }
}

serviceSearchWindow::~serviceSearchWindow()
{
    delete ui;
}

void serviceSearchWindow::on_pushButton_4_clicked()
{
    MainWindow *main = new MainWindow(this);
    this->close();
    main->show();
}

