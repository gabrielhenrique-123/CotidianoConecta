#ifndef USERSEARCHADMINWINDOW_H
#define USERSEARCHADMINWINDOW_H

#include <QDialog>

namespace Ui {
class userSearchAdminWindow;
}

class userSearchAdminWindow : public QDialog
{
    Q_OBJECT

public:
    explicit userSearchAdminWindow(QWidget *parent = nullptr);
    ~userSearchAdminWindow();

private slots:
    void on_pushButton_4_clicked();

    void on_pushButton_clicked();

private:
    Ui::userSearchAdminWindow *ui;
};

#endif // USERSEARCHADMINWINDOW_H
