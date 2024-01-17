#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef long double ld;
#define output(v) for(auto&it:v){cout<<it<<" ";}cout<<"\n"
#define input(v) for(auto&it:v){cin>>it;}
#define watch(x) cerr<<#x<<" : "<<x<<endl;
#define all(v) v.begin(),v.end()
void FastCode() {
    std::ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
class contact {
public:
    long ph;
    char name[20],address[20],mail[20];

    void createContact(){
        cout<<"Enter your name :";
        cin.ignore();
        cin>>name;
        cout<<"Enter your Phone Number :";
        cin>>ph;
        cout<<"Enter Your address : ";
        cin.ignore();
        cin>>address;
        cout<<"Enter Your Mail :";
        cin.ignore();
        cin>>mail;

    }
    void showContact() {
        cout<<endl<<"Name"<<name;
        cout<<endl<<"Phone"<<ph;
        cout<<endl<<"Address"<<address;
        cout<<endl<<"Mail "<<mail;
    }
    long get_number(){
        return ph;
    }
    char* get_name() {
        return name;
    }
    char* get_address() {
        return address;
    }
    char* get_mail() {
        return mail;
    }

};
fstream db;
contact cont;

// to show the Contact
void saveContact() {
    db.open("contact.txt",ios::out|ios::app);
    cont.createContact();
    db.write((char*)&cont,sizeof(contact));
    db.close();
    cout<<"Contact Has Been Sucessfully Created... ";
    getchar();
}

// to show all the Contact information saved in file...
void showAll() {
    cout<<"\n\t\t================================\n\t\t\tLIST OF CONTACTS\n\t	\t================================\n";
    db.open("contact.txt",ios::in);
    while(db.read((char*)&cont,sizeof(contact)))
    {
        cont.showContact();
        cout<<endl<<"=================================================\n"<<endl;
    }
    db.close();
}

// to show specfic Contact..
void displayContact(int num) {
    bool found;
    char ch;
    db.open("contact.txt",ios::in | ios::out);
    while (db.read((char*)&cont,sizeof(contact)))
    {
        if(cont.get_number()==num)
        {
            cont.showContact();
            found=true;
        }
    }
    db.close();
    if(found == false)
    {
        cout<<"\n\nNo record found...";
    }
getchar();
}

//to edit a Contact...

void editContact()
{
    bool found=false;
    int num;
    cout<<"Edit contact\n===============================\n\n\t..::Enter the number of contact to edit:";
    cin>>num;
    db.open("contact.txt",ios::in | ios::out);
    while (db.read((char*)&cont,sizeof(contact)) && found==false)
    {
            if(cont.get_number()==num)
            {
                cont.showContact();
                cout<<"\nPlease Enter The New Details of Contact: "<<endl;
                cont.createContact();
                int pos=-1*sizeof(cont);
                db.seekp(pos,ios::cur);
                db.write((char*)&cont,sizeof(cont));
                cout<<endl<<endl<<"\t Contact Successfully Updated...";
                found=true;
            }

        }
    db.close();
    if (found==false)
        cout<<endl<<endl<<"Contact Not Found...";
}

// to delete a Contact ..
void delete_contact()
{
    int num;
    cout<<endl<<endl<<"Please Enter The contact #: ";
    cin>>num;
    db.open("contact.txt",ios::in|ios::out);
    fstream fp2;
    fp2.open("Temp.txt",ios::out);
    db.seekg(0,ios::beg);
    while(db.read((char*)&cont,sizeof(contact)))
    {
        if(cont.get_number()!=num)
        {
            fp2.write((char*)&cont,sizeof(contact));
        }
    }
    fp2.close();
    db.close();
    remove("contact.txt");
    rename("Temp.txt","contact.txt");
    cout<<endl<<endl<<"\tContact Deleted...";
}



int main(int argc, char *argv[])
{

    for (;;) {
        int ch;
        cout<<"\n\t **** Welcome to Contact Management System ****";
        cout<<"\n\n\n\t\t\tMAIN MENU\n\t\t=====================\n\t\t[1] Add a new Contact\n\t\t[2] List all Contacts\n\t\t[3] Search for contact\n\t\t[4] Edit a Contact\n\t\t[5] Delete a Contact\n\t\t[0] Exit\n\t\t=================\n\t\t";
        cout<<"Enter the choice:";
        cin>>ch;

        switch (ch) {

            case 1:saveContact();
                break;

            case 2:showAll();
                break;
            case 3:
                int num;
                cout<<"\n\n\tPhone: ";
                cin>>num;
                displayContact(num);
                break;
            case 4:editContact();
                break;

            case 5:delete_contact();
                break;
            default:
                break;
        }
        int th;
        cout<<"\n\n\n..::Enter the Choice:\n\n\t[1] Main Menu\t\t[0] Exit\n";
        cin>>th;
        switch (th)
        {
            case 1:
                continue;
            case 0:
                break;

        }

    }
    return 0;
}
