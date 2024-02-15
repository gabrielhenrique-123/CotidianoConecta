#ifndef LOGINWINDOW_H
#define LOGINWINDOW_H

#include <QDialog>

namespace Ui {
class loginWIndow;
}

class loginWIndow : public QDialog
{
    Q_OBJECT

public:
    explicit loginWIndow(QWidget *parent = nullptr);
    ~loginWIndow();

private slots:
    void on_regButton_clicked();

    void on_loginButton_clicked();

private:
    Ui::loginWIndow *ui;
};

#endif // LOGINWINDOW_H
