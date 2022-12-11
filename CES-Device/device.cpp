#include "device.h"

Device::Device(QObject *parent)
    : QObject{parent}, powerOn(false), battery(100), connection(NONE), currUser(NULL), runTimer(NULL), battTimer(NULL), currSession(NULL), sessGroup(TWENTY_MINUTES), sessType(MET)
{
    // create first user and set that to the current user
    addUser();
}

Device::~Device()
{
    // remove and delete every user
    while(!users.isEmpty())
    {
        User* user = users.last();
        users.removeLast();
        delete user;
    }

    delete runTimer;
    delete battTimer;
}

// getters
int Device::getBattery() const
{
    return battery;
}

Connection Device::getConnection() const
{
    return connection;
}

QList<User *> Device::getUsers() const
{
    return users;
}

User *Device::getCurrUser() const
{
    return currUser;
}

Session *Device::getCurrSession() const
{
    return currSession;
}

SessionGroup Device::getSessionGroup() const
{
    return currSession->getGroup();
}

SessionType Device::getSessionType() const
{
    return currSession->getType();
}

int Device::getSessionIntensity() const
{
    return currSession->getIntensity();
}


// setters
void Device::setPowerOn(bool on)
{
    powerOn = on;
}

void Device::setBattery(int batt)
{
    battery = batt;

    if (battery <= 0)
    {
        battery = 0;

        if (powerOn)
        {
            softOff();
        }
    }
}

void Device::setConnection(int c)
{
    switch (c)
    {
        case NONE:
            connection = NONE;
            break;
        case OKAY:
            connection = OKAY;
            break;
        case EXCELLENT:
            connection = EXCELLENT;
            break;
        default:
            break;
    }
}

void Device::setCurrentUser(User *user)
{
    currUser = user;
}

void Device::setCurrentSession(int i)
{
    currSession = currUser->getHistory()[i];
}

void Device::setSessionGroup(int g)
{
    switch (g)
    {
        case TWENTY_MINUTES:
            sessGroup = TWENTY_MINUTES;
            break;
        case FOURTY_FIVE_MINUTES:
            sessGroup = FOURTY_FIVE_MINUTES;
            break;
        case USER_DESIGNATED:
            sessGroup = USER_DESIGNATED;
            break;
        default:
            break;
    }
}

void Device::setSessionType(int t)
{
    switch (t)
    {
        case MET:
            sessType = MET;
            break;
        case DELTA:
            sessType = DELTA;
            break;
        case THETA:
            sessType = THETA;
            break;
        case ALPHA:
            sessType = ALPHA;
            break;
        default:
            break;
    }
}

void Device::setSessionIntensity(int i)
{
    currSession->setIntensity(i);
}


// other
bool Device::isOn() const
{
    return powerOn;
}


void Device::addUser()
{
    User *user = new User();
    users.append(user);
}

void Device::createSession()
{
    currSession = new Session(sessGroup, sessType);
}


void Device::runSession()
{
    // set run timer for session duration
    delete runTimer;
    runTimer = new QTimer(this);
    connect(runTimer, SIGNAL(timeout()), this, SLOT(endSession()));
    switch (sessGroup)
    {
        case TWENTY_MINUTES:
            runTimer->start(10000);
            break;
        case FOURTY_FIVE_MINUTES:
            runTimer->start(20000);
            break;
        case USER_DESIGNATED:
            runTimer->start(60000);
            break;
        default:
            break;
    }

    // set battery timer for continous battery reduction every 2 seconds
    battTimer = new QTimer(this);
    connect(battTimer, SIGNAL(timeout()), this, SLOT(reduceBattery()));
    battTimer->start(2000);

    if (connection == NONE)
    {
        cout << "no connection detected, waiting for a connection before starting session" << endl;
        pauseSession();
    }
}

void Device::pauseSession()
{
    runTimer->stop();
    battTimer->stop();
}

void Device::continueSession()
{
    runTimer->start();
    battTimer->start();
}

void Device::reduceBattery()
{
    battery -= (currSession->getIntensity() + connection) * 0.2;
    emit batteryReduced();

    if (battery <= 0)
    {
        battery = 0;

        if (powerOn)
        {
            softOff();
        }
    }
}

void Device::endSession()
{
    delete runTimer;
    delete battTimer;

    runTimer = new QTimer(this);
    battTimer = new QTimer(this);

    // end of session should have the intensity level go down each level until nothing is outputted
    // *note* look through project docs to see if additional things need to be added

    emit sessionFinished();
}

void Device::updateHistory(Session *ses)
{
    currUser->updateHistory(ses);
}


void Device::softOff()
{
    // gradually reduce CES stimulus (ie. intensity)
    delete runTimer;
    delete battTimer;

    // turn off
    powerOn = false;
    emit powerSoftOff();
}
