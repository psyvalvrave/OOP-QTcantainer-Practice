//Zhecheng Li
#include<contactFactory.h>
#include<iostream>
#include<stdlib.h>
using namespace std;
ContactFactory::ContactFactory(){
}
ContactFactory::~ContactFactory(){
}
QList<int> ContactFactory::categoryFactory = (QList<int>()<<1<<2<<3);
QStringList ContactFactory::firstNameFactory = (QStringList()<<"Syeda"<<"Fern"<<"Gabriella"<<"Troy"<<"Ana"
                                                <<"Amelia"<<"Khadija"<<"Victoria"<<"Rosa"<<"Lauren");
QStringList ContactFactory::lastNameFactory = (QStringList()<<"Norris"<<"Johnson"<<"Hart"<<"Owens"<<"Love"<<"Hansen"
                                               <<"Rees"<<"Cunningham"<<"Klein"<<"Schneider");
QStringList ContactFactory::streetAddressFactory = (QStringList()<<"Street0"<<"Street1"<<"Street2"<<"Street3"<<"Street4"<<"Street5"
                                                    <<"Street6"<<"Street7"<<"Street8"<<"Street9");
QStringList ContactFactory::cityFactory = (QStringList()<<"Boston"<<"New York"<<"Houston"<<"Phoenix"<<"Dallas"<<"Austin"
                                          <<"Jacksonville"<<"San Jose"<<"Chicago"<<"Los Angeles");
QStringList ContactFactory::zipCodeFactory = (QStringList()<<"46523"<<"98563"<<"45216"<<"75486"<<"66531"<<"66314"
                                              <<"53156"<<"98643"<<"98762"<<"64631");
QStringList ContactFactory::phoneNumberFactory = (QStringList()<<"896-245"<<"198-563"<<"454-216"<<"754-186"<<"665-131"<<"661-314"
                                                  <<"513-156"<<"986-943"<<"987-062"<<"646-031");
ContactFactory::ContactFactory(int n){
    int i=0;
    while(i<n){
        clist.add(randomContact());
        i++;
    }
}
Contacts ContactFactory::randomContact(){
    Contacts c;
    c.category = categoryFactory.at(rand()%(categoryFactory.size()));
    c.lastName = lastNameFactory.at(rand()%(lastNameFactory.size()));
    c.firstName = firstNameFactory.at(rand()%(firstNameFactory.size()));
    c.streetAddress = streetAddressFactory.at(rand()%(streetAddressFactory.size()));
    c.city = cityFactory.at(rand()%(cityFactory.size()));
    c.zipCode = zipCodeFactory.at(rand()%(zipCodeFactory.size()));
    c.phoneNumber = phoneNumberFactory.at(rand()%(phoneNumberFactory.size()));
    return c;
}
