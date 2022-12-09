#include "user.h"

int User::nextId = 1;

User::User(QObject *parent)
    : QObject{parent}, id(nextId++)
{
    //
}

User::~User()
{
    // remove and delete every session from history
    while(!history.isEmpty())
    {
        Session* ses = history.last();
        history.removeLast();
        delete ses;
    }
}


// getters
int User::getId() const
{
    return id;
}

QList<Session *> User::getHistory() const
{
    return history;
}


// other
void User::updateHistory(Session *ses)
{
    history.prepend(ses);
}

void User::removeRecord(Session *ses)
{
    history.removeOne(ses);
}
