#ifndef SETCONTACTS_H
#define SETCONTACTS_H

#include <QObject>
#include <QList>
#include "Contact.h"
#include <QTextStream>
#include <QDir>

class SetContacts : public QObject
{
    Q_OBJECT

public:
    SetContacts();
    ~SetContacts();
    QList<Contact *> list;
    void LoadFromPath(QString dir);
    void CreateCVS();
    void CreateICS();
    void print();
    void sort();//Sort by name
    int countShowBirthday();

};

#endif // SETCONTACTS_H
