/********************************************************************************
** Form generated from reading UI file 'services.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SERVICES_H
#define UI_SERVICES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_services
{
public:
    QWidget *centralwidget;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *services)
    {
        if (services->objectName().isEmpty())
            services->setObjectName("services");
        services->resize(800, 600);
        centralwidget = new QWidget(services);
        centralwidget->setObjectName("centralwidget");
        services->setCentralWidget(centralwidget);
        menubar = new QMenuBar(services);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        services->setMenuBar(menubar);
        statusbar = new QStatusBar(services);
        statusbar->setObjectName("statusbar");
        services->setStatusBar(statusbar);

        retranslateUi(services);

        QMetaObject::connectSlotsByName(services);
    } // setupUi

    void retranslateUi(QMainWindow *services)
    {
        services->setWindowTitle(QCoreApplication::translate("services", "MainWindow", nullptr));
    } // retranslateUi

};

namespace Ui {
    class services: public Ui_services {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SERVICES_H
