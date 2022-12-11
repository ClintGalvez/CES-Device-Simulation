#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <iostream>
#include <QListWidget>
#include <QTimer>
#include <QRandomGenerator>

#include "device.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

using namespace std;

class MainWindow : public QMainWindow
{
    Q_OBJECT

    public:
        MainWindow(QWidget *parent = nullptr);
        ~MainWindow();

        void setupUI();
        void setupDeviceView();
        void setupDebugView();

        void upHelper(QListWidget *);
        void upIntensity();
        void downHelper(QListWidget *);
        void downIntensity();

        void selectUser();
        void selectMain();
        void selectGroup();
        void selectType();
        void selectHistory();

        void setSessionInfo();

        void resetCurrentRows();

        void updateHistory();

        QString groupToString(SessionGroup);
        QString typeToString(SessionType);

    private:
        Ui::MainWindow *ui;

        Device *device;
        QTimer *timer;

    signals:
        //

    public slots:
        void startup(int);
        void loadStartup();

        void up();
        void down();
        void left();
        void right();

        void returnMain();
        void record();
        void history();
        void select();
        void togglePower();

        void softOff();
        void softOffComplete();

        void sessionFinished();

        void updateBattery(int);
        void updateConnection(int);

        void updateStatusBarGUI();
};
#endif // MAINWINDOW_H
