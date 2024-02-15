// TestMainWindow.h
#ifndef TESTMAINWINDOW_H
#define TESTMAINWINDOW_H

#include <QtTest/QtTest>
#include "../mainwindow.h"

class TestMainWindow : public QObject {
    Q_OBJECT

private slots:
    void testServiceRegButtonClicked();
    void testUserRegButtonClicked();
    void testServiceSearchButtonClicked();
};

#endif // TESTMAINWINDOW_H
