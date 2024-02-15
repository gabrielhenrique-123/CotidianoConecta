#include "userregwindow.h"
#include "ui_userregwindow.h"
#include "loginwindow.h"
#include <QMessageBox>


userRegWindow::userRegWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::userRegWindow)
{
    ui->setupUi(this);
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
    quint32 type = 0;

    if(ui->commomButton->isChecked())
        type = 1;

    else if(ui->serviceButton->isChecked())
        type = 2;


    QSqlQuery query;
    query.prepare("insert into usuarios (name, cpf, birth, email, password, type) values"
                  "('"+name+"', '"+cpf+"', '"+birth+"', '"+email+"', '"+password+"', :type)");
    query.bindValue(":type", type);

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


    loginWIndow *w = new loginWIndow(this);

    this->close();
    w->show();
}

