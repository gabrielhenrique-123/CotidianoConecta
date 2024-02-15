#include "loginwindow.h"
#include "ui_loginwindow.h"
#include "userregwindow.h"
#include "mainwindow.h"
#include "servicespacewindow.h"
#include "adminspacewindow.h"
static  QSqlDatabase bancoDeDados = QSqlDatabase::addDatabase("QSQLITE");

loginWIndow::loginWIndow(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::loginWIndow)
{
    ui->setupUi(this);

    bancoDeDados.setDatabaseName("/home/gabriel/Documentos/Faculdade/4 Periodo/Engenharia de Software/Sprints em Grupo/Sprint 2/src/dataBank/users");

    if(!bancoDeDados.open()){
        ui->label_3->setText("Nao foi possivel abrir o banco de dados");
    }
    else{
        ui->label_3->setText("O banco de dados foi aberto com sucesso");
    }
}

loginWIndow::~loginWIndow()
{
    delete ui;
}

void loginWIndow::on_regButton_clicked()
{
    userRegWindow *userWindowReg = new userRegWindow(this);
    userWindowReg->show();

    this->hide();
}


void loginWIndow::on_loginButton_clicked()
{
    QString cpf = ui->cpfLine->text();
    QString password = ui->passwordLine->text();

    if(!bancoDeDados.isOpen()){
        qDebug() << "Banco de dados não está aberto";
        return;
    }

    QSqlQuery query;
    if(query.exec("select * from usuarios where cpf = '"+cpf+"' and password = '"+password+"'  ")){
        if(query.next()){
            int type = query.value("type").toInt();
            this->close();
            if(type == 1){
                MainWindow *main = new MainWindow(this);
                main->show();
            } else if(type == 2){
                serviceSpaceWindow *main = new serviceSpaceWindow(this);
                main->show();
            } else if(type == 3){
                adminSpaceWindow *main = new adminSpaceWindow(this);
                main->show();
            }
        }
    }

}


