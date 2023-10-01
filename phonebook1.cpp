#include<iostream>
#include<string.h>
#include<map>
using namespace std;
class contact
{
    string name,phonenumber,email;
    map<string,contact>phonebook;

    public:
    void add()
    {
        contact addcontact;
        cout<<"ENTER CONTACT NAME=";
        cin.get();
        getline(cin,addcontact.name);
        cout<<"ENTER MOBILE NO.=";
        cin>>addcontact.phonenumber;
        cout<<"ENTER EMAIL=";
        cin>>addcontact.email;
        phonebook [addcontact.name] = addcontact;
        cout<<"CONTACT ADDED!!\n";
    }
    void Search()
    {
            contact searchcontact;
            cout<<"\nENTER NAME=";
            cin.get();
            getline(cin,searchcontact.name);
            if(phonebook.count(searchcontact.name))
            {
                 contact Contact= phonebook[searchcontact.name];
                 cout<<"\nname="<<Contact.name;
                 cout<<"\nmobile no.="<<Contact.phonenumber;
                 cout<<"\nEmail="<<Contact.email;
            }
            else
            {
                cout<<"\nCONTACT NOT FOUND!!";
            }
    }
    void Delete()
    {
        contact removecontact;
        cout<<"ENTER NAME=";cin.get();
        getline(cin,removecontact.name);
        if(phonebook.count(removecontact.name))
        {
            phonebook.erase(removecontact.name);
            cout<<"CONTACT REMOVED!!\n";
        }
        else
        {
            cout<<"CONTACT NOT FOUND!!\n";
        }

    }
    void display()
    {
        for(const auto&[name,Contact]:phonebook)
        {
            cout<<"\nNAME="<<Contact.name;
            cout<<"\tphonenumber="<<Contact.phonenumber;
            cout<<"\temail="<<Contact.email;cout<<"\n";
        }
    }
    void exit()
    {
        cout<<"\nEXITING PHONEBOOK!!";
    }
};
int main()
{
    contact p;
    int choice=0;
    while (choice!=5)
        {
     cout<<"\n"<<"\t*****************************\n";
           cout<<"\t*       MENU                *\n";
           cout<<"\t*---------------------------*\n";
           cout<<"\t*   1.ADD CONTACT           *\n";
           cout<<"\t*   2.SEARCH CONTACT        *\n";
           cout<<"\t*   3.DELETE CONTACT        *\n";
           cout<<"\t*   4.DISPLAY ALL CONTACTS  *\n";
           cout<<"\t*   5.EXIT!!                *\n";
           cout<<"\t*****************************\n";
           cout<<"\tINPUT CHOICE=";
           cin>>choice;
    switch(choice)
    {
    case 1:
        p.add();
        break;
    case 2:
        p.Search();
        break;
    case 3:
        p.Delete();
        break;
    case 4:
        p.display();
        break;
    case 5:
        p.exit();
        break;
    default:
        cout<<"\nEXITING PHONEBOOK!!\n";
    }
}
}
