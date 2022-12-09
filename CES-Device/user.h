#ifndef USER_H
#define USER_H

#include <QObject>
#include <QList>

#include "defs.h"
#include "session.h"

class User : public QObject
{
    public:
        explicit User(QObject *parent = nullptr);
        ~User();

        // getters
        int getId() const;
        QList<Session *> getHistory() const;

        // other
        void updateHistory(Session *);
        void removeRecord(Session *);

    private:
        Q_OBJECT

        static int nextId;
        int id;

        QList<Session *> history;

    signals:
        //

    public slots:
        //
};

#endif // USER_H
