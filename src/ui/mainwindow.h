#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_serviceRegButton_clicked();

    void on_userRegButton_clicked();

    void on_serviceSearchButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
