#ifndef SERVICEWINDOW_H
#define SERVICEWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QDebug>
#include <QFileInfo>

namespace Ui {
class serviceWindow;
}

class serviceWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit serviceWindow(QWidget *parent = nullptr);
    ~serviceWindow();

private slots:
    void on_pushButton_clicked();

private:
    Ui::serviceWindow *ui;
};

#endif // SERVICEWINDOW_H
