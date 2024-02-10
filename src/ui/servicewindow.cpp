#include "servicewindow.h"
#include "ui_servicewindow.h"
#include <QMessageBox>

serviceWindow::serviceWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::serviceWindow)
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

serviceWindow::~serviceWindow()
{
    delete ui;
}

void serviceWindow::on_pushButton_clicked()
{
    QString name = ui->nameLine->text();
    QString description = ui->descriptionText->toPlainText();

    QSqlQuery query;
    query.prepare("insert into services (name, description) values"
                  "('"+name+"', '"+description+"')");
    if(query.exec()){
        QMessageBox::information(this, "", "Registro gravado com sucesso");
        ui->nameLine->clear();
        ui->descriptionText->clear();
        ui->nameLine->setFocus();
    }else{
        qDebug() << "Erro ao inserir registro";
    }
}

