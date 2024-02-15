#ifndef SERVICESEARCHADMINWINDOW_H
#define SERVICESEARCHADMINWINDOW_H

#include <QMainWindow>

namespace Ui {
class serviceSearchAdminWindow;
}

class serviceSearchAdminWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit serviceSearchAdminWindow(QWidget *parent = nullptr);
    ~serviceSearchAdminWindow();

private slots:
    void on_pushButton_4_clicked();

private:
    Ui::serviceSearchAdminWindow *ui;
};

#endif // SERVICESEARCHADMINWINDOW_H
