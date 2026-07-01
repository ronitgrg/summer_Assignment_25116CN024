//Write a program to Create contact management system.

#include<iostream>
using namespace std;

struct contact_management{
    char contact_name[30];
    char phone_number[15];
    char email[30];
};

int main() {
    contact_management contact1;
    
    cout << "Enter contact name: ";
    cin.getline(contact1.contact_name, 30);
    
    cout << "Enter phone number: ";
    cin.getline(contact1.phone_number, 15);
    
    cout << "Enter email address: ";
    cin.getline(contact1.email, 30);
    
    cout << "\nContact Details:\n";
    cout << "Contact Name: " << contact1.contact_name << endl;
    cout << "Phone Number: " << contact1.phone_number << endl;
    cout << "Email Address: " << contact1.email << endl;

    return 0;
}