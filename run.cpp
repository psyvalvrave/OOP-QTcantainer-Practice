//Zhecheng Li
#include<contactFactory.h>
#include<contactList.h>
#include<contacts.h>
#include<QTextStream>
#include<time.h>

int main(){
    srand(time(NULL));
    QTextStream cout(stdout);
    ContactFactory contacts(5);
    cout<<"This is five random contacts:"<<endl;
    for(int i=0;i<contacts.clist.list.size();i++){
        cout<<(contacts.clist.list.at(i)).toString();
    }
    cout<<"This is category 1 phone list:"<<endl;
    for(int i = 0;i<contacts.clist.getPhoneList(1).size();i++){
        cout<<contacts.clist.getPhoneList(1).at(i);
    }
    cout<<"This is category 2 phone list:"<<endl;
    for(int i = 0;i<contacts.clist.getPhoneList(2).size();i++){
        cout<<contacts.clist.getPhoneList(2).at(i);
    }
    cout<<"This is category 3 phone list:"<<endl;
    for(int i = 0;i<contacts.clist.getPhoneList(3).size();i++){
        cout<<contacts.clist.getPhoneList(3).at(i);
    }
    cout<<"This is category 1 mail list:"<<endl;
    for(int i = 0;i<contacts.clist.getMailingList(1).size();i++){
        cout<<contacts.clist.getMailingList(1).at(i);
    }
    cout<<"This is category 2 mail list:"<<endl;
    for(int i = 0;i<contacts.clist.getMailingList(2).size();i++){
        cout<<contacts.clist.getMailingList(2).at(i);
    }
    cout<<"This is category 1 mail list:"<<endl;
    for(int i = 0;i<contacts.clist.getMailingList(3).size();i++){
        cout<<contacts.clist.getMailingList(3).at(i);
    }

}
