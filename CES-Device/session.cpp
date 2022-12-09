#include "session.h"

Session::Session(SessionGroup group, SessionType type, int intensity, QObject *parent)
    : QObject{parent}, group(group), type(type), intensity(intensity)
{
    //
}

Session::~Session()
{
    //
}


// getters
SessionGroup Session::getGroup() const
{
    return group;
}

SessionType Session::getType() const
{
    return type;
}

int Session::getIntensity() const
{
    return intensity;
}


// setters
void Session::setIntensity(int i)
{
    intensity = i;
}
