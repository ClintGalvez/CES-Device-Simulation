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


void Device::runSession(Session *ses)
{
    // set run timer for session duration (for now I just set all session durations to 4 seconds <-- temporary)
    runTimer = new QTimer(this);
    connect(runTimer, SIGNAL(timeout()), this, SLOT(endSession()));
    runTimer->start(4000);

    // set battery timer for continous battery reduction every 2 seconds
    battTimer = new QTimer(this);
    connect(battTimer, SIGNAL(timeout()), this, SLOT(reduceBattery()));
    battTimer->start(2000);
}

void Device::reduceBattery()
{
    // prob find a bettery reduction algorithm, but prob no need to
    // *project specs say to include skin connection into this algorithm somehow (??)
    battery -= 2 * currSession->getIntensity();
    emit batteryReduced();
}

void Device::endSession()
{
    delete runTimer;
    delete battTimer;

    // end of session should have the intensity level go down each level until nothing is outputted
    // *note* look through project docs to see if additional things need to be added
    // maybe make and endSession function or whatever
}

void Device::updateHistory(Session *ses)
{
    currUser->updateHistory(ses);
}


void Device::softOff()
{
    // gradually reduce CES stimulus (ie. intensity)

    // turn off
    // swap to offScreen and clear batteryDisplay
    powerOn = false;
}
