#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QListWidget>

#include <iostream>

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

        void resetCurrentRows();

        void updateHistory();

        QString groupToString(SessionGroup);
        QString typeToString(SessionType);

    private:
        Ui::MainWindow *ui;

        Device *device;

    signals:
        //

    public slots:
        void up();
        void down();
        void left();
        void right();

        void returnMain();
        void record();
        void history();
        void select();
        void togglePower();

        void updateBattery(int);
        void updateConnection(int);

        void updateStatusBarGUI();
};
#endif // MAINWINDOW_H
