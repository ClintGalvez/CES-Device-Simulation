#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow), timer(new QTimer(this))
{
    ui->setupUi(this);

    device = new Device();
    setupUI();
}

MainWindow::~MainWindow()
{
    delete ui;
    delete timer;
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

    ui->statusBar->setText("");

    resetCurrentRows();

    connect(ui->screen, SIGNAL(currentChanged(int)), this, SLOT(startup(int)));
    connect(device, SIGNAL(batteryReduced()), this, SLOT(updateStatusBarGUI()));
    connect(device, SIGNAL(powerSoftOff()), this, SLOT(softOff()));
    connect(device, SIGNAL(sessionFinished()), this, SLOT(sessionFinished()));

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


void MainWindow::startup(int curr)
{
    if (curr != STARTUP)
    {
        return;
    }

    // simulate startup loading
    connect(timer, SIGNAL(timeout()), this, SLOT(loadStartup()));
    timer->start(500);
}

void MainWindow::loadStartup()
{
    // progress startup loading
    int lowBound = 3;
    int upBound = 10;
    int progress = ui->pbStartup->value() + (QRandomGenerator::global()->generate() % ((upBound + 1) - lowBound) + lowBound);

    // cap load progress value at 100
    if (progress >= 100)
    {
        progress = 100;
    }

    // update startup loading progress
    ui->pbStartup->setValue(progress);

    // check if load progress is complete (ie. 100)
    if (ui->pbStartup->value() != 100)
    {
        return;
    }

    // finished loading simulation
    delete timer;
    timer = new QTimer(this);

    // go to user select screen
    ui->screen->setCurrentIndex(USER);
}


void MainWindow::up()
{
    switch (ui->screen->currentIndex())
    {
        case OFF:
            // do nothing
            break;
        case ON:
            // do nothing
            break;
        case STARTUP:
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
        case FINISHED_SESSION:
            // do nothing
            break;
        case HISTORY:
            upHelper(ui->histScreen);
            break;
        case POWERING_OFF:
            // do nothing
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
    ui->lblInt->setText("Intensity: " + QString::number(device->getSessionIntensity()));
}

void MainWindow::down()
{
    switch (ui->screen->currentIndex())
    {
        case OFF:
            // do nothing
            break;
        case ON:
            // do nothing
            break;
        case STARTUP:
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
        case FINISHED_SESSION:
            // do nothing
            break;
        case HISTORY:
            downHelper(ui->histScreen);
            break;
        case POWERING_OFF:
            // do nothing
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
    ui->lblInt->setText("Intensity: " + QString::number(device->getSessionIntensity()));
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
    // return to main restrictions
    if (!device->isOn())
    {
        cout << "ERROR: unable to return to main menu, device is off" << endl;
        return;
    }
    if (device->getCurrUser() == NULL)
    {
        cout << "ERROR: unable to return to main menu, no user selected" << endl;
        return;
    }

    ui->screen->setCurrentIndex(MAIN);
}

void MainWindow::record()
{
    // recording restrictions
    if (!device->isOn())
    {
        cout << "ERROR: unable to record, device is off" << endl;
        return;
    }
    if (device->getCurrUser() == NULL)
    {
        cout << "ERROR: unable to record, no user selected" << endl;
        return;
    }
    if (ui->screen->currentIndex() != ACTIVE_SESSION && ui->screen->currentIndex() != FINISHED_SESSION)
    {
        cout << "ERROR: unable to record, neither on the active or finished session screen" << endl;
        return;
    }

    device->getCurrUser()->updateHistory(device->getCurrSession());
    cout << "session successfully recorded" << endl;
    updateHistory();
}

void MainWindow::history()
{
    // go to treatment history restrictions
    if (!device->isOn())
    {
        cout << "ERROR: unable to go to treatment history, device is off" << endl;
        return;
    }
    if (device->getCurrUser() == NULL)
    {
        cout << "ERROR: unable to go to treatment history, no user selected" << endl;
        return;
    }

    ui->screen->setCurrentIndex(HISTORY);
}

void MainWindow::select()
{
    if (device->getBattery() == 0)
    {
        return;
    }

    switch (ui->screen->currentIndex())
    {
        case OFF:
            // do nothing
            break;
        case ON:
            ui->screen->setCurrentIndex(STARTUP);
            break;
        case STARTUP:
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
        case FINISHED_SESSION:
            ui->screen->setCurrentIndex(MAIN);
            break;
        case HISTORY:
            selectHistory();
            break;
        case POWERING_OFF:
            // do nothing
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
            device->setCurrentUser(NULL);
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
    device->runSession();
    setSessionInfo();
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
    device->runSession();

    setSessionInfo();
}

void MainWindow::setSessionInfo()
{
    // group + time
    switch (device->getSessionGroup())
    {
        case TWENTY_MINUTES:
            ui->lblGroup->setText("Group: 20 mins");
            break;
        case FOURTY_FIVE_MINUTES:
            ui->lblGroup->setText("Group: 45 mins");
            break;
        case USER_DESIGNATED:
            ui->lblGroup->setText("Group: 60 mins");
            break;
        default:
            break;
    }

    // type
    switch (device->getSessionType())
    {
        case MET:
            ui->lblType->setText("Type: MET");
            break;
        case DELTA:
            ui->lblType->setText("Type: DELTA");
            break;
        case THETA:
            ui->lblType->setText("Type: THETA");
            break;
        case ALPHA:
            ui->lblType->setText("Type: ALPHA");
            break;
        default:
            break;
    }

    // intensity
    ui->lblInt->setText("Intensity: " + QString::number(device->getSessionIntensity()));
}

void MainWindow::togglePower()
{
    if (device->isOn()) // turn device off
    {
        if (ui->screen->currentIndex() == POWERING_OFF)
        {
            return;
        }

        softOff();
    }
    else // turn device on
    {
        if (device->getBattery() == 0)
        {
            cout << "battery dead, unable to turn device on" << endl;
            return;
        }

        ui->btnPower->setText("I");
        ui->screen->setCurrentIndex(ON);
        device->setPowerOn(true);

        ui->cboConn->setEnabled(true);

        updateStatusBarGUI();
    }
}

void MainWindow::softOff()
{
    cout << "initiating soft off..." << endl;

    ui->screen->setCurrentIndex(POWERING_OFF);

    // clear startup loading progress
    delete timer;
    timer = new QTimer(this);
    ui->pbStartup->setValue(0);

    // clear status bar
    ui->statusBar->setText("");

    // clear connection
    device->setConnection(NONE);
    ui->cboConn->setCurrentIndex(NONE);
    ui->cboConn->setEnabled(false);

    // clear current user
    device->setCurrentUser(NULL);

    resetCurrentRows();

    // soft off sim
    connect(timer, SIGNAL(timeout()), this, SLOT(softOffComplete()));
    timer->start(4000);
}

void MainWindow::softOffComplete()
{
    ui->btnPower->setText("⭘");
    ui->screen->setCurrentIndex(OFF);
    device->setPowerOn(false);

    delete timer;
    timer = new QTimer(this);

    cout << "...soft off complete" << endl;
}

void MainWindow::sessionFinished()
{
    ui->screen->setCurrentIndex(FINISHED_SESSION);
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
    if (ui->screen->currentIndex() == ACTIVE_SESSION) // pause and play session
    {
        if (c == NONE)
        {
            cout << "connection missing, pausing session" << endl;
            device->pauseSession();
        }

        if (device->getConnection() == NONE && c != NONE)
        {
            cout << "connection recovered, continuing session" << endl;
            device->continueSession();
        }
    }

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
            ui->statusBar->setText("CONN: NONE | BATT: " + QString::number(device->getBattery()) + "%");
            break;
        case OKAY:
            ui->statusBar->setText("CONN: OKAY | BATT: " + QString::number(device->getBattery()) + "%");
            break;
        case EXCELLENT:
            ui->statusBar->setText("CONN: EXCELLENT | BATT: " + QString::number(device->getBattery()) + "%");
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
