#include "usersearchadminwindow.h"
#include "ui_usersearchadminwindow.h"
#include "adminspacewindow.h"
#include <QtSql>
#include <QMessageBox>

userSearchAdminWindow::userSearchAdminWindow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::userSearchAdminWindow)
{
    ui->setupUi(this);

    QSqlQuery query;
    query.prepare("select * from usuarios");
    if(query.exec()){
        int cont = 0;
        ui->twUsers->setColumnCount(7);
        while(query.next()){
            ui->twUsers->insertRow(cont);
            ui->twUsers->setItem(cont, 0, new QTableWidgetItem(query.value(0).toString()));
            ui->twUsers->setItem(cont, 1, new QTableWidgetItem(query.value(1).toString()));
            ui->twUsers->setItem(cont, 2, new QTableWidgetItem(query.value(2).toString()));
            ui->twUsers->setItem(cont, 3, new QTableWidgetItem(query.value(3).toString()));
            ui->twUsers->setItem(cont, 4, new QTableWidgetItem(query.value(4).toString()));
            ui->twUsers->setItem(cont, 5, new QTableWidgetItem(query.value(5).toString()));
            ui->twUsers->setItem(cont, 6, new QTableWidgetItem(query.value(6).toString()));
            ui->twUsers->setColumnWidth(0, 30);
            ui->twUsers->setColumnWidth(1, 300);
            ui->twUsers->setColumnWidth(2, 200);
            ui->twUsers->setColumnWidth(4, 300);
            ui->twUsers->setRowHeight(cont, 20);
            cont++;
        }

        QStringList cabecalhos = {"ID", "NAME", "CPF", "BIRTH", "EMAIL", "PASSWORD", "TYPE"};
        ui->twUsers->setHorizontalHeaderLabels((cabecalhos));
        ui->twUsers->setEditTriggers(QAbstractItemView::NoEditTriggers);
        ui->twUsers->setSelectionBehavior(QAbstractItemView::SelectRows);
        ui->twUsers->verticalHeader()->setVisible(false);
        ui->twUsers->setStyleSheet("QTableView {selection-background-color:blue}");
    }else{
        QMessageBox::warning(this, "ERRO", "Erro ao pesquisar na tabela servicos");
    }
}

userSearchAdminWindow::~userSearchAdminWindow()
{
    delete ui;
}

void userSearchAdminWindow::on_pushButton_4_clicked()
{
    adminSpaceWindow *main = new adminSpaceWindow(this);
    this->close();
    main->show();
}


void userSearchAdminWindow::on_pushButton_clicked()
{
    int line = ui->twUsers->currentRow();
    int id = ui->twUsers->item(line, 0)->text().toInt();

    QSqlQuery query;
    query.prepare("delete from usuarios where id = "+QString::number(id));
    if(query.exec()){
        QMessageBox::information(this,"","Registro excluído");
    }else{
        QMessageBox::warning(this, "ERRO", "Erro ao excluir registro");
    }
    ui->twUsers->removeRow(line);
}

