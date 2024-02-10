#ifndef USERREGWINDOW_H
#define USERREGWINDOW_H

#include <QMainWindow>
#include <QtSql>

namespace Ui {
class userRegWindow;
}

class userRegWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit userRegWindow(QWidget *parent = nullptr);
    ~userRegWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::userRegWindow *ui;
};

#endif // USERREGWINDOW_H
