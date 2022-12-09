#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    device = new Device();
    setupUI();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::setupUI()
{
    setupDeviceView();
    setupDebugView();
}

void MainWindow::setupDeviceView()
{
    // OUTPUT - screen / display
    ui->statusBar->setAttribute(Qt::WA_TransparentForMouseEvents);
    ui->screen->setAttribute(Qt::WA_TransparentForMouseEvents); // this means every child of screen is also transparent for mouse events

    ui->statusBar->setMarkdown("");

    resetCurrentRows();

    connect(device, SIGNAL(batteryReduced()), this, SLOT(updateStatusBarGUI()));

    // INPUT - buttons
    ui->btnRet->setIcon(QIcon(":/CES-Device/images/power.png"));
    ui->btnRec->setIcon(QIcon(":/CES-Device/images/power.png"));
    ui->btnHist->setIcon(QIcon(":/CES-Device/images/power.png"));
    ui->btnUp->setIcon(QIcon(":/CES-Device/images/power.png"));
    ui->btnDown->setIcon(QIcon(":/CES-Device/images/power.png"));
    ui->btnLeft->setIcon(QIcon(":/CES-Device/images/power.png"));
    ui->btnRight->setIcon(QIcon(":/CES-Device/images/power.png"));
    ui->btnSelect->setIcon(QIcon(":/CES-Device/images/power.png"));
    ui->btnPower->setIcon(QIcon(":/CES-Device/images/power.png"));

    ui->btnRet->setIconSize(QSize(25, 30));
    ui->btnRec->setIconSize(QSize(25, 30));
    ui->btnHist->setIconSize(QSize(25, 30));
    ui->btnUp->setIconSize(QSize(25, 30));
    ui->btnDown->setIconSize(QSize(25, 30));
    ui->btnLeft->setIconSize(QSize(25, 30));
    ui->btnRight->setIconSize(QSize(25, 30));
    ui->btnSelect->setIconSize(QSize(25, 30));
    ui->btnPower->setIconSize(QSize(25, 30));

    connect(ui->btnRet, SIGNAL(pressed()), this, SLOT(returnMain()));
    connect(ui->btnRec, SIGNAL(pressed()), this, SLOT(record()));
    connect(ui->btnHist, SIGNAL(pressed()), this, SLOT(history()));
    connect(ui->btnUp, SIGNAL(pressed()), this, SLOT(up()));
    connect(ui->btnDown, SIGNAL(pressed()), this, SLOT(down()));
    connect(ui->btnLeft, SIGNAL(pressed()), this, SLOT(left()));
    connect(ui->btnRight, SIGNAL(pressed()), this, SLOT(right()));
    connect(ui->btnSelect, SIGNAL(pressed()), this, SLOT(select()));
    connect(ui->btnPower, SIGNAL(released()), this, SLOT(togglePower()));

    // comment out for debugging purposes
    ui->btnLeft->setVisible(false);
    ui->btnRight->setVisible(false);
}

void MainWindow::setupDebugView()
{
    // setup skin connection dropbox
    connect(ui->cboConn, SIGNAL(activated(int)), this, SLOT(updateConnection(int)));

    // setup battery slider
    ui->sldrBattery->setValue(device->getBattery());
    connect(ui->sldrBattery, SIGNAL(valueChanged(int)), this, SLOT(updateBattery(int)));
}


void MainWindow::up()
{
    switch (ui->screen->currentIndex())
    {
        case OFF:
            // do nothing
            break;
        case USER:
            upHelper(ui->userScreen);
            break;
        case MAIN:
            upHelper(ui->mainScreen);
            break;
        case GROUP:
            upHelper(ui->groupScreen);
            break;
        case TYPE:
            upHelper(ui->typeScreen);
            break;
        case ACTIVE_SESSION:
            upIntensity();
            break;
        case HISTORY:
            upHelper(ui->histScreen);
            break;
        default:
            // do nothing
            break;
    }
}

void MainWindow::upHelper(QListWidget *o)
{
    if (o->currentRow() == 0) // OOB case
    {
        return;
    }

    o->setCurrentRow(o->currentRow()-1);
}

void MainWindow::upIntensity()
{
    if (ui->sldrIntLeft->value() == ui->sldrIntLeft->maximum()) // OOB case
    {
        return;
    }

    // update intensity
    device->setSessionIntensity(ui->sldrIntLeft->value()+1);

    // update GUI
    ui->sldrIntLeft->setValue(device->getSessionIntensity());
    ui->sldrIntRight->setValue(device->getSessionIntensity());
}

void MainWindow::down()
{
    switch (ui->screen->currentIndex())
    {
        case OFF:
            // do nothing
            break;
        case USER:
            downHelper(ui->userScreen);
            break;
        case MAIN:
            downHelper(ui->mainScreen);
            break;
        case GROUP:
            downHelper(ui->groupScreen);
            break;
        case TYPE:
            downHelper(ui->typeScreen);
            break;
        case ACTIVE_SESSION:
            downIntensity();
            break;
        case HISTORY:
            downHelper(ui->histScreen);
            break;
        default:
            // do nothing
            break;
    }
}

void MainWindow::downHelper(QListWidget *o)
{
    if (o->currentRow() == o->count()-1) // OOB case
    {
        return;
    }
    o->setCurrentRow(o->currentRow()+1);
}

void MainWindow::downIntensity()
{
    if (ui->sldrIntLeft->value() == ui->sldrIntLeft->minimum()) // OOB case
    {
        return;
    }

    // update intensity
    device->setSessionIntensity(ui->sldrIntLeft->value()-1);

    // update GUI
    ui->sldrIntLeft->setValue(device->getSessionIntensity());
    ui->sldrIntRight->setValue(device->getSessionIntensity());
}

void MainWindow::left()
{
    if (ui->screen->currentIndex() == 0) // OOB case
    {
        return;
    }

    ui->screen->setCurrentIndex(ui->screen->currentIndex()-1);
}

void MainWindow::right()
{
    if (ui->screen->currentIndex() == ui->screen->count()-1) // OOB case
    {
        return;
    }

    ui->screen->setCurrentIndex(ui->screen->currentIndex()+1);
}


void MainWindow::returnMain()
{
    if (!device->isOn() || device->getCurrUser() == NULL) // can't return to main if device is off or no user is logged in
    {
        return;
    }

    ui->screen->setCurrentIndex(MAIN);
}

void MainWindow::record()
{
    if (!device->isOn() || device->getCurrUser() == NULL || ui->screen->currentIndex() != ACTIVE_SESSION) // can't record session if device is off, no user is logged in, or not in a session
    {
        return;
    }

    device->getCurrUser()->updateHistory(device->getCurrSession());
    updateHistory();
}

void MainWindow::history()
{
    if (!device->isOn() || device->getCurrUser() == NULL) // can't go to history if device is off or no user is logged in
    {
        return;
    }

    ui->screen->setCurrentIndex(HISTORY);
}

void MainWindow::select()
{
    switch (ui->screen->currentIndex())
    {
        case OFF:
            // do nothing
            break;
        case USER:
            selectUser();
            break;
        case MAIN:
            selectMain();
            break;
        case GROUP:
            selectGroup();
            break;
        case TYPE:
            selectType();
            break;
        case ACTIVE_SESSION:
            // do nothing (only up and down buttons should be needed)
            break;
        case HISTORY:
            selectHistory();
            break;
        default:
            // do nothing
            break;
    }
}

void MainWindow::selectUser()
{
    if (ui->userScreen->currentRow() == ui->userScreen->count()-1) // add user
    {
        // create user
        device->addUser();
        ui->userScreen->insertItem(ui->userScreen->count()-1, new QListWidgetItem("User " + QString::number(ui->userScreen->count())));

        // set current row to newly created user row
        ui->userScreen->setCurrentRow(ui->userScreen->count()-2);
    }

    // set current user
    device->setCurrentUser(device->getUsers()[ui->userScreen->currentRow()]);

    // update treatment history
    updateHistory();

    // go to main screen now
    ui->screen->setCurrentIndex(MAIN);
}

void MainWindow::selectMain()
{
    switch (ui->mainScreen->currentRow())
    {
        case START_SESSION:
            ui->screen->setCurrentIndex(GROUP);
            ui->groupScreen->setCurrentRow(0);
            break;
        case TREATMENT_HISTORY:
            ui->screen->setCurrentIndex(HISTORY);
            ui->histScreen->setCurrentRow(0);
            break;
        case CHANGE_USER:
            ui->screen->setCurrentIndex(USER);
            break;
        default:
            break;
    }
}

void MainWindow::selectGroup()
{
    device->setSessionGroup(ui->groupScreen->currentRow());
    ui->screen->setCurrentIndex(TYPE);
    ui->typeScreen->setCurrentRow(0);
}

void MainWindow::selectType()
{
    device->setSessionType(ui->typeScreen->currentRow());

    // start session
    ui->screen->setCurrentIndex(ACTIVE_SESSION);
    ui->sldrIntLeft->setValue(1);
    ui->sldrIntRight->setValue(1);
    device->createSession();
    device->runSession(device->getCurrSession());
}

void MainWindow::selectHistory()
{
    if (ui->histScreen->count() == 0) // OOB case
    {
        return;
    }

    device->setCurrentSession(ui->histScreen->currentRow());
    ui->screen->setCurrentIndex(ACTIVE_SESSION);
    ui->sldrIntLeft->setValue(device->getCurrSession()->getIntensity());
    ui->sldrIntRight->setValue(device->getCurrSession()->getIntensity());
    device->runSession(device->getCurrSession());
}

void MainWindow::togglePower()
{
    if (device->isOn()) // turn device off
    {
        ui->btnPower->setText("⭘");
        ui->screen->setCurrentIndex(OFF);
        device->setPowerOn(false);

        // clear status bar
        ui->statusBar->setMarkdown("");

        // clear connection
        device->setConnection(NONE);
        ui->cboConn->setCurrentIndex(NONE);
        ui->cboConn->setEnabled(false);

        // clear current user
        device->setCurrentUser(NULL);

        resetCurrentRows();
    }
    else // turn device on
    {
        ui->btnPower->setText("I");
        ui->screen->setCurrentIndex(USER);
        device->setPowerOn(true);

        ui->cboConn->setEnabled(true);

        updateStatusBarGUI();
    }
}


void MainWindow::updateBattery(int batt)
{
    device->setBattery(batt);

    if (device->isOn())
    {
        updateStatusBarGUI();
    }
}

void MainWindow::updateConnection(int c)
{
    device->setConnection(c);

    if (device->isOn())
    {
        updateStatusBarGUI();
    }
}


void MainWindow::updateStatusBarGUI()
{
    // status bar display
    switch (device->getConnection())
    {
        case NONE:
            ui->statusBar->setMarkdown("CONN: NONE | BATT: " + QString::number(device->getBattery()) + "%");
            break;
        case OKAY:
            ui->statusBar->setMarkdown("CONN: OKAY | BATT: " + QString::number(device->getBattery()) + "%");
            break;
        case EXCELLENT:
            ui->statusBar->setMarkdown("CONN: EXCELLENT | BATT: " + QString::number(device->getBattery()) + "%");
            break;
        default:
            break;
    }
    ui->statusBar->setAlignment(Qt::AlignRight);

    // battery slider
    ui->sldrBattery->setValue(device->getBattery());
}


void MainWindow::resetCurrentRows()
{
    ui->userScreen->setCurrentRow(0);
    ui->mainScreen->setCurrentRow(0);
    ui->groupScreen->setCurrentRow(0);
    ui->typeScreen->setCurrentRow(0);
    ui->histScreen->setCurrentRow(0);
}

void MainWindow::updateHistory()
{
    // clear history list widget
    ui->histScreen->clear();

    // add item widgets to the history list widget
    for (int i = 0; i < device->getCurrUser()->getHistory().count(); ++i)
    {
        Session *s = device->getCurrUser()->getHistory()[i];

        QString group = "Group=" + groupToString(s->getGroup());
        QString type = "Type=" + typeToString(s->getType());
        QString intensity = "Intensity=" + QString::number(s->getIntensity());
        QString name = group + ", " + type + ", " + intensity;
        ui->histScreen->addItem(name);
    }

    // start at the newest added
    ui->histScreen->setCurrentRow(0);
}

QString MainWindow::groupToString(SessionGroup g)
{
    switch (g)
    {
    case TWENTY_MINUTES:
        return "20min";
        break;
    case FOURTY_FIVE_MINUTES:
        return "45min";
        break;
    case USER_DESIGNATED:
        return "UserDesignated";
        break;
    default:
        return "ERROR";
        break;
    }
}

QString MainWindow::typeToString(SessionType t)
{
    switch (t)
    {
        case MET:
            return "MET";
            break;
        case DELTA:
            return "Delta";
            break;
        case THETA:
            return "Theta";
            break;
        case ALPHA:
            return "Alpha";
            break;
        default:
            return "ERROR";
            break;
    }
}
