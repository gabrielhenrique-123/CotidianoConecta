#include "userregwindow.h"
#include "ui_userregwindow.h"
#include <QMessageBox>


userRegWindow::userRegWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::userRegWindow)
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

userRegWindow::~userRegWindow()
{
    delete ui;
}

void userRegWindow::on_pushButton_clicked()
{
    QString name = ui->nameLine->text();
    QString cpf = ui->cpfLine->text();
    QString birth = ui->birthLine->text();
    QString email = ui->emailLine->text();
    QString password = ui->passwordLine->text();

    QSqlQuery query;
    query.prepare("insert into usuarios (name, cpf, birth, email, password) values"
                  "('"+name+"', '"+cpf+"', '"+birth+"', '"+email+"', '"+password+"')");
    if(query.exec()){
        QMessageBox::information(this, "", "Registro gravado com sucesso");
        ui->nameLine->clear();
        ui->cpfLine->clear();
        ui->emailLine->clear();
        ui->birthLine->clear();
        ui->passwordLine->clear();
        ui->nameLine->setFocus();
    }else{
        qDebug() << "Erro ao inserir registro";
    }
}

