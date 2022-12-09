#ifndef DEVICE_H
#define DEVICE_H

#include <QObject>
#include <QList>
#include <QTimer>

#include "defs.h"
#include "user.h"
#include "session.h"

class Device : public QObject
{
    public:
        explicit Device(QObject *parent = nullptr);
        ~Device();

        // getters
        int getBattery() const;
        Connection getConnection() const;

        QList<User *> getUsers() const;
        User *getCurrUser() const;

        Session *getCurrSession() const;
        SessionGroup getSessionGroup() const;
        SessionType getSessionType() const;
        int getSessionIntensity() const;

        // setters
        void setPowerOn(bool);
        void setCurrentUser(User *);

        // other
        bool isOn() const;

        void addUser();

        void createSession();
        void runSession(Session *);
        void updateHistory(Session *);

        void softOff();

    private:
        Q_OBJECT

        bool powerOn;
        int battery;
        Connection connection;

        QList<User *> users;
        User *currUser;

        QTimer* runTimer;
        QTimer* battTimer;

        Session *currSession;
        SessionGroup sessGroup; // values used to create new active current sessions
        SessionType sessType;   // |

    signals:
        void batteryReduced();

    public slots:
        void setBattery(int);
        void setConnection(int);

        void setCurrentSession(int);
        void setSessionGroup(int);
        void setSessionType(int);
        void setSessionIntensity(int);

        void reduceBattery();
        void endSession();
};

#endif // DEVICE_H
