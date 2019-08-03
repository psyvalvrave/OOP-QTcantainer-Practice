//Zhecheng Li
#include<contacts.h>

Contacts::Contacts(){
}
Contacts::~Contacts(){
}
Contacts::Contacts(int category, QString firstName, QString lastName,
                   QString streetAddress, QString zipCode, QString city,QString phoneNumber):
        category(category),firstName(firstName),lastName(lastName),streetAddress(streetAddress),
        zipCode(zipCode),city(city),phoneNumber(phoneNumber){
}

int Contacts::getCategory(){
    return category;
}

QString Contacts::getFirstName(){
    return firstName;
}
QString Contacts::getLastName(){
    return lastName;
}
QString Contacts::getStreetAddress(){
    return streetAddress;
}
QString Contacts::getZipCode(){
    return zipCode;
}
QString Contacts::getCity(){
    return city;
}
QString Contacts::getPhoneNumber(){
    return phoneNumber;
}
QString Contacts::toString()const{
    return QString("Category:'%1', first name:'%2', last name:'%3', street address:'%4', zipcode:'%5', city:'%6', phoneNumber:'%7'\n")
            .arg(category).arg(firstName).arg(lastName).arg(streetAddress).arg(zipCode).arg(city).arg(phoneNumber);
}
//important question
Contacts &Contacts::operator=(const Contacts &c){
    this->category = c.category;
    this->firstName = c.firstName;
    this->lastName = c.lastName;
    this->phoneNumber = c.phoneNumber;
    this->streetAddress = c.streetAddress;
    this->zipCode = c.zipCode;
    this->city = c.city;
}
bool const &Contacts::operator ==(const Contacts &c){
    if((this->category==c.category)&&(this->firstName==c.firstName)&&(this->lastName==c.lastName)&&(this->phoneNumber==c.phoneNumber)&&(this->streetAddress==c.streetAddress)&&
            (this->zipCode==c.zipCode)&&(this->city ==c.city))
        return true;
    else
        return false;
}

