#include "servicewindow.h"
#include "ui_servicewindow.h"
#include <QMessageBox>

serviceWindow::serviceWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::serviceWindow)
{
    ui->setupUi(this);
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

