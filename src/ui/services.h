#ifndef SERVICES_H
#define SERVICES_H

#include <QMainWindow>

namespace Ui {
class services;
}

class services : public QMainWindow
{
    Q_OBJECT

public:
    explicit services(QWidget *parent = nullptr);
    ~services();

private:
    Ui::services *ui;
};

#endif // SERVICES_H
