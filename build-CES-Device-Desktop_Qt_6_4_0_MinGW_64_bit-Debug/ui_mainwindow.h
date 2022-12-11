/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QSlider *sldrBattery;
    QFrame *lDivisor;
    QLabel *lblControlTitle;
    QLabel *lblBatt;
    QLabel *lblBattLB;
    QLabel *lblBattUB;
    QWidget *gridLayoutWidget;
    QGridLayout *gButtons;
    QPushButton *btnUp;
    QPushButton *btnLeft;
    QPushButton *btnDown;
    QSpacerItem *vp1;
    QPushButton *btnSelect;
    QPushButton *btnPower;
    QPushButton *btnRight;
    QPushButton *btnHist;
    QSpacerItem *vp2;
    QPushButton *btnRec;
    QPushButton *btnRet;
    QLabel *lblTitle;
    QFrame *lControl;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *screenLayout;
    QTextBrowser *statusBar;
    QStackedWidget *screen;
    QWidget *pOff;
    QTextBrowser *offScreen;
    QWidget *pOn;
    QTextBrowser *onScreen;
    QWidget *pStartup;
    QTextBrowser *startupScreen;
    QProgressBar *pbStartup;
    QWidget *pUser;
    QTextBrowser *hdrUser;
    QListWidget *userScreen;
    QWidget *pMain;
    QTextBrowser *hdrOptions;
    QListWidget *mainScreen;
    QWidget *pGroup;
    QTextBrowser *hdrGroup;
    QListWidget *groupScreen;
    QWidget *pType;
    QTextBrowser *hdrType;
    QListWidget *typeScreen;
    QWidget *pActvSess;
    QSlider *sldrIntLeft;
    QLabel *lblIntTitle;
    QSlider *sldrIntRight;
    QLabel *lblInt1;
    QLabel *lblInt8;
    QLabel *lblInt7;
    QLabel *lblInt6;
    QLabel *lblInt5;
    QLabel *lblInt4;
    QLabel *lblInt3;
    QLabel *lblInt2;
    QTextBrowser *activeSessScreen;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *vlActSessInfo;
    QLabel *lblGroup;
    QLabel *lblType;
    QLabel *lblInt;
    QFrame *line;
    QLabel *lblInfo;
    QFrame *line_2;
    QWidget *pFinSessScreen;
    QTextBrowser *finSessScreen;
    QWidget *pHist;
    QTextBrowser *hdrHist;
    QListWidget *histScreen;
    QWidget *pPoweringOff;
    QTextBrowser *pwrOffScreen;
    QComboBox *cboConn;
    QLabel *lblConn;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(869, 611);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        sldrBattery = new QSlider(centralwidget);
        sldrBattery->setObjectName("sldrBattery");
        sldrBattery->setGeometry(QRect(550, 100, 281, 21));
        sldrBattery->setMaximum(100);
        sldrBattery->setValue(100);
        sldrBattery->setOrientation(Qt::Horizontal);
        sldrBattery->setTickInterval(1);
        lDivisor = new QFrame(centralwidget);
        lDivisor->setObjectName("lDivisor");
        lDivisor->setGeometry(QRect(410, 20, 16, 551));
        lDivisor->setFrameShape(QFrame::VLine);
        lDivisor->setFrameShadow(QFrame::Sunken);
        lblControlTitle = new QLabel(centralwidget);
        lblControlTitle->setObjectName("lblControlTitle");
        lblControlTitle->setGeometry(QRect(430, 20, 131, 20));
        lblControlTitle->setAlignment(Qt::AlignCenter);
        lblBatt = new QLabel(centralwidget);
        lblBatt->setObjectName("lblBatt");
        lblBatt->setGeometry(QRect(440, 100, 51, 20));
        lblBatt->setAlignment(Qt::AlignCenter);
        lblBattLB = new QLabel(centralwidget);
        lblBattLB->setObjectName("lblBattLB");
        lblBattLB->setGeometry(QRect(540, 120, 31, 20));
        lblBattLB->setAlignment(Qt::AlignCenter);
        lblBattUB = new QLabel(centralwidget);
        lblBattUB->setObjectName("lblBattUB");
        lblBattUB->setGeometry(QRect(800, 120, 41, 20));
        lblBattUB->setAlignment(Qt::AlignCenter);
        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(60, 300, 291, 251));
        gButtons = new QGridLayout(gridLayoutWidget);
        gButtons->setObjectName("gButtons");
        gButtons->setContentsMargins(0, 0, 0, 0);
        btnUp = new QPushButton(gridLayoutWidget);
        btnUp->setObjectName("btnUp");

        gButtons->addWidget(btnUp, 2, 1, 1, 1);

        btnLeft = new QPushButton(gridLayoutWidget);
        btnLeft->setObjectName("btnLeft");

        gButtons->addWidget(btnLeft, 3, 0, 1, 1);

        btnDown = new QPushButton(gridLayoutWidget);
        btnDown->setObjectName("btnDown");

        gButtons->addWidget(btnDown, 4, 1, 1, 1);

        vp1 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gButtons->addItem(vp1, 5, 1, 1, 1);

        btnSelect = new QPushButton(gridLayoutWidget);
        btnSelect->setObjectName("btnSelect");

        gButtons->addWidget(btnSelect, 3, 1, 1, 1);

        btnPower = new QPushButton(gridLayoutWidget);
        btnPower->setObjectName("btnPower");
        btnPower->setAutoDefault(false);
        btnPower->setFlat(false);

        gButtons->addWidget(btnPower, 6, 1, 1, 1);

        btnRight = new QPushButton(gridLayoutWidget);
        btnRight->setObjectName("btnRight");

        gButtons->addWidget(btnRight, 3, 2, 1, 1);

        btnHist = new QPushButton(gridLayoutWidget);
        btnHist->setObjectName("btnHist");

        gButtons->addWidget(btnHist, 0, 2, 1, 1);

        vp2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gButtons->addItem(vp2, 1, 1, 1, 1);

        btnRec = new QPushButton(gridLayoutWidget);
        btnRec->setObjectName("btnRec");

        gButtons->addWidget(btnRec, 0, 1, 1, 1);

        btnRet = new QPushButton(gridLayoutWidget);
        btnRet->setObjectName("btnRet");

        gButtons->addWidget(btnRet, 0, 0, 1, 1);

        lblTitle = new QLabel(centralwidget);
        lblTitle->setObjectName("lblTitle");
        lblTitle->setGeometry(QRect(10, 10, 171, 20));
        lblTitle->setAlignment(Qt::AlignCenter);
        lControl = new QFrame(centralwidget);
        lControl->setObjectName("lControl");
        lControl->setGeometry(QRect(570, 20, 281, 21));
        lControl->setFrameShape(QFrame::HLine);
        lControl->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName("verticalLayoutWidget");
        verticalLayoutWidget->setGeometry(QRect(60, 50, 291, 241));
        screenLayout = new QVBoxLayout(verticalLayoutWidget);
        screenLayout->setObjectName("screenLayout");
        screenLayout->setContentsMargins(0, 0, 0, 0);
        statusBar = new QTextBrowser(verticalLayoutWidget);
        statusBar->setObjectName("statusBar");
        statusBar->setMaximumSize(QSize(16777215, 31));
        statusBar->setLayoutDirection(Qt::RightToLeft);

        screenLayout->addWidget(statusBar);

        screen = new QStackedWidget(verticalLayoutWidget);
        screen->setObjectName("screen");
        screen->setMinimumSize(QSize(0, 191));
        pOff = new QWidget();
        pOff->setObjectName("pOff");
        offScreen = new QTextBrowser(pOff);
        offScreen->setObjectName("offScreen");
        offScreen->setGeometry(QRect(0, 0, 291, 201));
        screen->addWidget(pOff);
        pOn = new QWidget();
        pOn->setObjectName("pOn");
        onScreen = new QTextBrowser(pOn);
        onScreen->setObjectName("onScreen");
        onScreen->setGeometry(QRect(0, 0, 291, 201));
        screen->addWidget(pOn);
        pStartup = new QWidget();
        pStartup->setObjectName("pStartup");
        startupScreen = new QTextBrowser(pStartup);
        startupScreen->setObjectName("startupScreen");
        startupScreen->setGeometry(QRect(0, 0, 291, 201));
        pbStartup = new QProgressBar(pStartup);
        pbStartup->setObjectName("pbStartup");
        pbStartup->setGeometry(QRect(60, 100, 171, 23));
        pbStartup->setValue(0);
        pbStartup->setTextVisible(false);
        screen->addWidget(pStartup);
        pUser = new QWidget();
        pUser->setObjectName("pUser");
        hdrUser = new QTextBrowser(pUser);
        hdrUser->setObjectName("hdrUser");
        hdrUser->setGeometry(QRect(0, 0, 291, 201));
        userScreen = new QListWidget(pUser);
        new QListWidgetItem(userScreen);
        new QListWidgetItem(userScreen);
        userScreen->setObjectName("userScreen");
        userScreen->setGeometry(QRect(0, 30, 291, 171));
        screen->addWidget(pUser);
        pMain = new QWidget();
        pMain->setObjectName("pMain");
        hdrOptions = new QTextBrowser(pMain);
        hdrOptions->setObjectName("hdrOptions");
        hdrOptions->setGeometry(QRect(0, 0, 291, 201));
        mainScreen = new QListWidget(pMain);
        new QListWidgetItem(mainScreen);
        new QListWidgetItem(mainScreen);
        new QListWidgetItem(mainScreen);
        mainScreen->setObjectName("mainScreen");
        mainScreen->setGeometry(QRect(0, 30, 291, 171));
        mainScreen->setMinimumSize(QSize(0, 0));
        screen->addWidget(pMain);
        pGroup = new QWidget();
        pGroup->setObjectName("pGroup");
        hdrGroup = new QTextBrowser(pGroup);
        hdrGroup->setObjectName("hdrGroup");
        hdrGroup->setGeometry(QRect(0, 0, 291, 201));
        groupScreen = new QListWidget(pGroup);
        new QListWidgetItem(groupScreen);
        new QListWidgetItem(groupScreen);
        new QListWidgetItem(groupScreen);
        groupScreen->setObjectName("groupScreen");
        groupScreen->setGeometry(QRect(0, 30, 291, 171));
        screen->addWidget(pGroup);
        pType = new QWidget();
        pType->setObjectName("pType");
        hdrType = new QTextBrowser(pType);
        hdrType->setObjectName("hdrType");
        hdrType->setGeometry(QRect(0, 0, 291, 201));
        typeScreen = new QListWidget(pType);
        new QListWidgetItem(typeScreen);
        new QListWidgetItem(typeScreen);
        new QListWidgetItem(typeScreen);
        new QListWidgetItem(typeScreen);
        typeScreen->setObjectName("typeScreen");
        typeScreen->setGeometry(QRect(0, 30, 291, 171));
        screen->addWidget(pType);
        pActvSess = new QWidget();
        pActvSess->setObjectName("pActvSess");
        sldrIntLeft = new QSlider(pActvSess);
        sldrIntLeft->setObjectName("sldrIntLeft");
        sldrIntLeft->setGeometry(QRect(10, 30, 18, 160));
        sldrIntLeft->setMinimum(1);
        sldrIntLeft->setMaximum(8);
        sldrIntLeft->setOrientation(Qt::Vertical);
        sldrIntLeft->setTickPosition(QSlider::TicksBothSides);
        sldrIntLeft->setTickInterval(1);
        lblIntTitle = new QLabel(pActvSess);
        lblIntTitle->setObjectName("lblIntTitle");
        lblIntTitle->setGeometry(QRect(10, 10, 63, 20));
        lblIntTitle->setTextFormat(Qt::MarkdownText);
        lblIntTitle->setAlignment(Qt::AlignCenter);
        sldrIntRight = new QSlider(pActvSess);
        sldrIntRight->setObjectName("sldrIntRight");
        sldrIntRight->setGeometry(QRect(60, 30, 18, 160));
        sldrIntRight->setMinimum(1);
        sldrIntRight->setMaximum(8);
        sldrIntRight->setOrientation(Qt::Vertical);
        sldrIntRight->setTickPosition(QSlider::TicksBothSides);
        sldrIntRight->setTickInterval(1);
        lblInt1 = new QLabel(pActvSess);
        lblInt1->setObjectName("lblInt1");
        lblInt1->setGeometry(QRect(30, 170, 31, 20));
        lblInt1->setAlignment(Qt::AlignCenter);
        lblInt8 = new QLabel(pActvSess);
        lblInt8->setObjectName("lblInt8");
        lblInt8->setGeometry(QRect(30, 30, 31, 20));
        lblInt8->setAlignment(Qt::AlignCenter);
        lblInt7 = new QLabel(pActvSess);
        lblInt7->setObjectName("lblInt7");
        lblInt7->setGeometry(QRect(30, 50, 31, 20));
        lblInt7->setAlignment(Qt::AlignCenter);
        lblInt6 = new QLabel(pActvSess);
        lblInt6->setObjectName("lblInt6");
        lblInt6->setGeometry(QRect(30, 70, 31, 20));
        lblInt6->setAlignment(Qt::AlignCenter);
        lblInt5 = new QLabel(pActvSess);
        lblInt5->setObjectName("lblInt5");
        lblInt5->setGeometry(QRect(30, 90, 31, 20));
        lblInt5->setAlignment(Qt::AlignCenter);
        lblInt4 = new QLabel(pActvSess);
        lblInt4->setObjectName("lblInt4");
        lblInt4->setGeometry(QRect(30, 110, 31, 20));
        lblInt4->setAlignment(Qt::AlignCenter);
        lblInt3 = new QLabel(pActvSess);
        lblInt3->setObjectName("lblInt3");
        lblInt3->setGeometry(QRect(30, 130, 31, 20));
        lblInt3->setAlignment(Qt::AlignCenter);
        lblInt2 = new QLabel(pActvSess);
        lblInt2->setObjectName("lblInt2");
        lblInt2->setGeometry(QRect(30, 150, 31, 20));
        lblInt2->setAlignment(Qt::AlignCenter);
        activeSessScreen = new QTextBrowser(pActvSess);
        activeSessScreen->setObjectName("activeSessScreen");
        activeSessScreen->setGeometry(QRect(0, 0, 291, 201));
        verticalLayoutWidget_2 = new QWidget(pActvSess);
        verticalLayoutWidget_2->setObjectName("verticalLayoutWidget_2");
        verticalLayoutWidget_2->setGeometry(QRect(140, 50, 141, 81));
        vlActSessInfo = new QVBoxLayout(verticalLayoutWidget_2);
        vlActSessInfo->setObjectName("vlActSessInfo");
        vlActSessInfo->setContentsMargins(0, 0, 0, 0);
        lblGroup = new QLabel(verticalLayoutWidget_2);
        lblGroup->setObjectName("lblGroup");
        lblGroup->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        vlActSessInfo->addWidget(lblGroup);

        lblType = new QLabel(verticalLayoutWidget_2);
        lblType->setObjectName("lblType");
        lblType->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        vlActSessInfo->addWidget(lblType);

        lblInt = new QLabel(verticalLayoutWidget_2);
        lblInt->setObjectName("lblInt");
        lblInt->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        vlActSessInfo->addWidget(lblInt);

        line = new QFrame(pActvSess);
        line->setObjectName("line");
        line->setGeometry(QRect(100, 30, 20, 161));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        lblInfo = new QLabel(pActvSess);
        lblInfo->setObjectName("lblInfo");
        lblInfo->setGeometry(QRect(130, 25, 139, 21));
        lblInfo->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        line_2 = new QFrame(pActvSess);
        line_2->setObjectName("line_2");
        line_2->setGeometry(QRect(210, 30, 71, 21));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        screen->addWidget(pActvSess);
        activeSessScreen->raise();
        sldrIntLeft->raise();
        lblIntTitle->raise();
        sldrIntRight->raise();
        lblInt1->raise();
        lblInt8->raise();
        lblInt7->raise();
        lblInt6->raise();
        lblInt5->raise();
        lblInt4->raise();
        lblInt3->raise();
        lblInt2->raise();
        verticalLayoutWidget_2->raise();
        line->raise();
        lblInfo->raise();
        line_2->raise();
        pFinSessScreen = new QWidget();
        pFinSessScreen->setObjectName("pFinSessScreen");
        finSessScreen = new QTextBrowser(pFinSessScreen);
        finSessScreen->setObjectName("finSessScreen");
        finSessScreen->setGeometry(QRect(0, 0, 291, 201));
        screen->addWidget(pFinSessScreen);
        pHist = new QWidget();
        pHist->setObjectName("pHist");
        hdrHist = new QTextBrowser(pHist);
        hdrHist->setObjectName("hdrHist");
        hdrHist->setGeometry(QRect(0, 0, 291, 201));
        histScreen = new QListWidget(pHist);
        histScreen->setObjectName("histScreen");
        histScreen->setGeometry(QRect(0, 30, 291, 171));
        screen->addWidget(pHist);
        pPoweringOff = new QWidget();
        pPoweringOff->setObjectName("pPoweringOff");
        pwrOffScreen = new QTextBrowser(pPoweringOff);
        pwrOffScreen->setObjectName("pwrOffScreen");
        pwrOffScreen->setGeometry(QRect(0, 0, 291, 201));
        screen->addWidget(pPoweringOff);

        screenLayout->addWidget(screen);

        cboConn = new QComboBox(centralwidget);
        cboConn->addItem(QString());
        cboConn->addItem(QString());
        cboConn->addItem(QString());
        cboConn->setObjectName("cboConn");
        cboConn->setEnabled(false);
        cboConn->setGeometry(QRect(580, 50, 82, 28));
        lblConn = new QLabel(centralwidget);
        lblConn->setObjectName("lblConn");
        lblConn->setGeometry(QRect(440, 50, 131, 31));
        lblConn->setAlignment(Qt::AlignCenter);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 869, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        btnPower->setDefault(false);
        screen->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Oasis Pro Simulator", nullptr));
        lblControlTitle->setText(QCoreApplication::translate("MainWindow", "Control the Device", nullptr));
        lblBatt->setText(QCoreApplication::translate("MainWindow", "Battery", nullptr));
        lblBattLB->setText(QCoreApplication::translate("MainWindow", "0%", nullptr));
        lblBattUB->setText(QCoreApplication::translate("MainWindow", "100%", nullptr));
        btnUp->setText(QCoreApplication::translate("MainWindow", "^", nullptr));
        btnLeft->setText(QCoreApplication::translate("MainWindow", "<", nullptr));
        btnDown->setText(QCoreApplication::translate("MainWindow", "v", nullptr));
        btnSelect->setText(QCoreApplication::translate("MainWindow", "OK", nullptr));
        btnPower->setText(QCoreApplication::translate("MainWindow", "\342\255\230", nullptr));
        btnRight->setText(QCoreApplication::translate("MainWindow", ">", nullptr));
        btnHist->setText(QCoreApplication::translate("MainWindow", "HISTORY", nullptr));
        btnRec->setText(QCoreApplication::translate("MainWindow", "RECORD", nullptr));
        btnRet->setText(QCoreApplication::translate("MainWindow", "MAIN", nullptr));
        lblTitle->setText(QCoreApplication::translate("MainWindow", "OASIS PRO SIMULATOR", nullptr));
        statusBar->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"right\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:700; color:#585858;\">CONN: NONE | BATT: 100%</span></p></body></html>", nullptr));
        offScreen->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#585858;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; color:#585858;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt"
                        "-block-indent:0; text-indent:0px; color:#585858;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700; color:#585858;\">POWER OFF</span></p></body></html>", nullptr));
        onScreen->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0"
                        "px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700; color:#00aaff;\">OASIS PRO</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:7pt; font-weight:700; color:#00aaff;\">- PRESS OK TO START -</span></p></body></html>", nullptr));
        startupScreen->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><s"
                        "pan style=\" font-size:14pt; font-weight:700; color:#00aaff;\">LOADING...</span></p></body></html>", nullptr));
        hdrUser->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700; color:#00aaff;\">SELECT A USER</span></p></body></html>", nullptr));

        const bool __sortingEnabled = userScreen->isSortingEnabled();
        userScreen->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = userScreen->item(0);
        ___qlistwidgetitem->setText(QCoreApplication::translate("MainWindow", "User 1", nullptr));
        QListWidgetItem *___qlistwidgetitem1 = userScreen->item(1);
        ___qlistwidgetitem1->setText(QCoreApplication::translate("MainWindow", "Add User", nullptr));
        userScreen->setSortingEnabled(__sortingEnabled);

        hdrOptions->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700; color:#00aaff;\">OPTIONS</span></p></body></html>", nullptr));

        const bool __sortingEnabled1 = mainScreen->isSortingEnabled();
        mainScreen->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem2 = mainScreen->item(0);
        ___qlistwidgetitem2->setText(QCoreApplication::translate("MainWindow", "Start Session", nullptr));
        QListWidgetItem *___qlistwidgetitem3 = mainScreen->item(1);
        ___qlistwidgetitem3->setText(QCoreApplication::translate("MainWindow", "Treatment History", nullptr));
        QListWidgetItem *___qlistwidgetitem4 = mainScreen->item(2);
        ___qlistwidgetitem4->setText(QCoreApplication::translate("MainWindow", "Change User", nullptr));
        mainScreen->setSortingEnabled(__sortingEnabled1);

        hdrGroup->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700; color:#00aaff;\">SELECT GROUP</span></p></body></html>", nullptr));

        const bool __sortingEnabled2 = groupScreen->isSortingEnabled();
        groupScreen->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem5 = groupScreen->item(0);
        ___qlistwidgetitem5->setText(QCoreApplication::translate("MainWindow", "20 minutes", nullptr));
        QListWidgetItem *___qlistwidgetitem6 = groupScreen->item(1);
        ___qlistwidgetitem6->setText(QCoreApplication::translate("MainWindow", "45 minutes", nullptr));
        QListWidgetItem *___qlistwidgetitem7 = groupScreen->item(2);
        ___qlistwidgetitem7->setText(QCoreApplication::translate("MainWindow", "User Designated", nullptr));
        groupScreen->setSortingEnabled(__sortingEnabled2);

        hdrType->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700; color:#00aaff;\">SELECT TYPE</span></p></body></html>", nullptr));

        const bool __sortingEnabled3 = typeScreen->isSortingEnabled();
        typeScreen->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem8 = typeScreen->item(0);
        ___qlistwidgetitem8->setText(QCoreApplication::translate("MainWindow", "MET", nullptr));
        QListWidgetItem *___qlistwidgetitem9 = typeScreen->item(1);
        ___qlistwidgetitem9->setText(QCoreApplication::translate("MainWindow", "Delta", nullptr));
        QListWidgetItem *___qlistwidgetitem10 = typeScreen->item(2);
        ___qlistwidgetitem10->setText(QCoreApplication::translate("MainWindow", "Theta", nullptr));
        QListWidgetItem *___qlistwidgetitem11 = typeScreen->item(3);
        ___qlistwidgetitem11->setText(QCoreApplication::translate("MainWindow", "Alpha", nullptr));
        typeScreen->setSortingEnabled(__sortingEnabled3);

        lblIntTitle->setText(QCoreApplication::translate("MainWindow", "Intensity", nullptr));
        lblInt1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        lblInt8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        lblInt7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        lblInt6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        lblInt5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        lblInt4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        lblInt3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        lblInt2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        activeSessScreen->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700; color:#00aaff;\">ACTIVE SESSION</span></p></body></html>", nullptr));
        lblGroup->setText(QCoreApplication::translate("MainWindow", "Group: ", nullptr));
        lblType->setText(QCoreApplication::translate("MainWindow", "Type: ", nullptr));
        lblInt->setText(QCoreApplication::translate("MainWindow", "Intensity: ", nullptr));
        lblInfo->setText(QCoreApplication::translate("MainWindow", "Session Info", nullptr));
        finSessScreen->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0"
                        "px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700; color:#00aaff;\">SESSION FINISHED</span></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:8pt; font-weight:700; color:#00aaff;\">- PRESS OK -</span></p></body></html>", nullptr));
        hdrHist->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-weight:700; color:#00aaff;\">TREATMENT HISTORY</span></p></body></html>", nullptr));
        pwrOffScreen->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"</style></head><body style=\" font-family:'Segoe UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><br /></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0"
                        "px;\"><br /></p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700; color:#00aaff;\">POWERING OFF...</span></p></body></html>", nullptr));
        cboConn->setItemText(0, QCoreApplication::translate("MainWindow", "None", nullptr));
        cboConn->setItemText(1, QCoreApplication::translate("MainWindow", "Okay", nullptr));
        cboConn->setItemText(2, QCoreApplication::translate("MainWindow", "Excellent", nullptr));

        lblConn->setText(QCoreApplication::translate("MainWindow", "Connection to Skin: ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
