#ifndef SESSION_H
#define SESSION_H

#include <QObject>

#include "defs.h"

class Session : public QObject
{
    public:
        explicit Session(SessionGroup group, SessionType type, int intensity = 1, QObject *parent = nullptr);
        ~Session();

        // getters
        SessionGroup getGroup() const;
        SessionType getType() const;
        int getIntensity() const;

        // setters
        void setIntensity(int);

    private:
        Q_OBJECT

        SessionGroup group; // aka duration
        SessionType type;
        int intensity;      // range 1-8 (inclusive)

    signals:
        //

    public slots:
        //
};

#endif // SESSION_H
