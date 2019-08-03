#ifndef CONTACTS_H
#define CONTACTS_H
#include<QString>
#include<QStringList>

class Contacts{
public:
    Contacts();
    ~Contacts();
    Contacts(int category, QString firstName,
             QString lastName, QString streetAddress, QString zipCode, QString city,QString phoneNumber);
    int getCategory();
    QString getFirstName();
    QString getLastName();
    QString getStreetAddress();
    QString getZipCode();
    QString getCity();
    QString getPhoneNumber();
    QString toString()const;
    Contacts &operator=(const Contacts &c);
    bool const &operator==(const Contacts &c);
    int category;
    QString firstName;
    QString lastName;
    QString streetAddress;
    QString zipCode;
    QString city;
    QString phoneNumber;
};
#endif // CONTACTS_H
