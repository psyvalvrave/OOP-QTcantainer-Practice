#ifndef CONTACTFACTORY_H
#define CONTACTFACTORY_H
#include<QStringList>
#include<contacts.h>
#include<contactList.h>
class ContactFactory{
public:
    ContactFactory();
    ~ContactFactory();
    ContactList clist;
    static QList<int> categoryFactory;
    static QStringList firstNameFactory;
    static QStringList lastNameFactory;
    static QStringList streetAddressFactory;
    static QStringList cityFactory;
    static QStringList zipCodeFactory;
    static QStringList phoneNumberFactory;
    ContactFactory(int n);
    Contacts randomContact();
};
#endif // CONTACTFACTORY_H
