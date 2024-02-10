#ifndef SERVICESEARCHWINDOW_H
#define SERVICESEARCHWINDOW_H

#include <QDialog>

namespace Ui {
class serviceSearchWindow;
}

class serviceSearchWindow : public QDialog
{
    Q_OBJECT

public:
    explicit serviceSearchWindow(QWidget *parent = nullptr);
    ~serviceSearchWindow();

private:
    Ui::serviceSearchWindow *ui;
};

#endif // SERVICESEARCHWINDOW_H
