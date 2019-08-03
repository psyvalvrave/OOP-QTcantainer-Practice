//Zhecheng Li
#include<contacts.h>
#include<contactList.h>

ContactList::ContactList(){
}
ContactList::~ContactList(){
}
void ContactList::add(Contacts c){
    list.append(c);
}
void ContactList::remove(Contacts c){
    list.removeOne(c);
}
QStringList ContactList::getPhoneList(int n){
    QStringList q1;
    for (int i=0;i<list.size();i++){
        if(list[i].getCategory()==n){
            q1.append(list[i].firstName+" "+list[i].lastName+":"+list[i].getPhoneNumber()+"\t");
        }
    }
    return q1;
}

QStringList ContactList::getMailingList(int n){
    QStringList q1;
    for (int i=0;i<list.size();i++){
        if(list[i].getCategory()==n){
            q1.append(list[i].firstName+" "+list[i].lastName+":"+list[i].getStreetAddress()+"\t");
        }
    }
    return q1;
}
