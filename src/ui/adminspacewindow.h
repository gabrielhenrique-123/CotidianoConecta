#ifndef ADMINSPACEWINDOW_H
#define ADMINSPACEWINDOW_H

#include <QMainWindow>

namespace Ui {
class adminSpaceWindow;
}

class adminSpaceWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit adminSpaceWindow(QWidget *parent = nullptr);
    ~adminSpaceWindow();

private slots:
    void on_serviceSearchButton_clicked();

private:
    Ui::adminSpaceWindow *ui;
};

#endif // ADMINSPACEWINDOW_H
