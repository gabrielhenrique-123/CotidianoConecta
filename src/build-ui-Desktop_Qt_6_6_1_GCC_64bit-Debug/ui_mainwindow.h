/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QFrame *frame;
    QLineEdit *nameLine;
    QLineEdit *birthLine;
    QLineEdit *cpfLine;
    QLineEdit *emailLine;
    QTextEdit *textEdit;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QPushButton *finish;
    QTextEdit *feedback;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        frame = new QFrame(centralwidget);
        frame->setObjectName("frame");
        frame->setGeometry(QRect(190, 30, 401, 521));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        nameLine = new QLineEdit(frame);
        nameLine->setObjectName("nameLine");
        nameLine->setGeometry(QRect(50, 160, 311, 31));
        birthLine = new QLineEdit(frame);
        birthLine->setObjectName("birthLine");
        birthLine->setGeometry(QRect(50, 280, 311, 31));
        cpfLine = new QLineEdit(frame);
        cpfLine->setObjectName("cpfLine");
        cpfLine->setGeometry(QRect(50, 220, 311, 31));
        emailLine = new QLineEdit(frame);
        emailLine->setObjectName("emailLine");
        emailLine->setGeometry(QRect(50, 340, 311, 31));
        textEdit = new QTextEdit(frame);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(90, 40, 221, 111));
        radioButton = new QRadioButton(frame);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(50, 420, 141, 23));
        radioButton_2 = new QRadioButton(frame);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(50, 450, 112, 23));
        finish = new QPushButton(frame);
        finish->setObjectName("finish");
        finish->setGeometry(QRect(260, 420, 89, 25));
        feedback = new QTextEdit(frame);
        feedback->setObjectName("feedback");
        feedback->setGeometry(QRect(230, 470, 141, 31));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 22));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        nameLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "Type your name", nullptr));
        birthLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "Type your birth", nullptr));
        cpfLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "Type your CPF", nullptr));
        emailLine->setPlaceholderText(QCoreApplication::translate("MainWindow", "Type your email", nullptr));
        textEdit->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Ubuntu'; font-size:11pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt; font-weight:700;\">Sing-In</span></p>\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-size:28pt; font-weight:700;\"><br /></p></body></html>", nullptr));
        radioButton->setText(QCoreApplication::translate("MainWindow", "Commom User", nullptr));
        radioButton_2->setText(QCoreApplication::translate("MainWindow", "Servicer", nullptr));
        finish->setText(QCoreApplication::translate("MainWindow", "Finish", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
