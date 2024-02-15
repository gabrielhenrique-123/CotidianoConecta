#ifndef SERVICESPACEWINDOW_H
#define SERVICESPACEWINDOW_H

#include <QMainWindow>

namespace Ui {
class serviceSpaceWindow;
}

class serviceSpaceWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit serviceSpaceWindow(QWidget *parent = nullptr);
    ~serviceSpaceWindow();

private slots:
    void on_serviceSearchButton_clicked();

private:
    Ui::serviceSpaceWindow *ui;
};

#endif // SERVICESPACEWINDOW_H
