//Write a program to Create ticket booking system.

#include<iostream>
using namespace std;

struct ticket_booking{
    char passenger_name[30];
    int ticket_number;
    float ticket_price;
};

int main() {
    ticket_booking ticket1;
    
    cout << "Enter passenger name: ";
    cin.getline(ticket1.passenger_name, 30);
    
    cout << "Enter ticket number: ";
    cin >> ticket1.ticket_number;
    
    cout << "Enter ticket price: ";
    cin >> ticket1.ticket_price;
    
    cout << "\nTicket Details:\n";
    cout << "Passenger Name: " << ticket1.passenger_name << endl;
    cout << "Ticket Number: " << ticket1.ticket_number << endl;
    cout << "Ticket Price: $" << ticket1.ticket_price << endl;

    return 0;
}
