#ifndef CONTACTLIST_H
#define CONTACTLIST_H
#include<QStringList>
#include<QList>
#include<contacts.h>
class ContactList: public Contacts{
public:
    ContactList();
    ~ContactList();
    void add(Contacts);
    void remove(Contacts);
    QStringList getPhoneList(int n);
    QStringList getMailingList(int n);
    QList<Contacts> list;
};
#endif // CONTACTLIST_H
