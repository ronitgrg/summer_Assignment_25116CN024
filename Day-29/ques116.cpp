//Write a program to Create inventory management system.

#include<iostream>
using namespace std;

int main(){
    int choice, size;
    cout << "Enter the number of items in inventory: ";
    cin >> size;

    string* items = new string[size];
    int* quantities = new int[size];

    for (int i = 0; i < size; i++) {
        cout << "Enter name of item " << (i + 1) << ": ";
        cin >> items[i];
        cout << "Enter quantity of item " << (i + 1) << ": ";
        cin >> quantities[i];
    }

    do {
        cout << "\nMenu-driven Inventory Management System" << endl;
        cout << "1. Display Inventory" << endl;
        cout << "2. Update Quantity" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Inventory List:" << endl;
                for (int i = 0; i < size; i++) {
                    cout << items[i] << ": " << quantities[i] << endl;
                }
                break;
            case 2: {
                string itemName;
                int newQuantity;
                cout << "Enter the name of the item to update: ";
                cin >> itemName;
                bool found = false;

                for (int i = 0; i < size; i++) {
                    if (items[i] == itemName) {
                        found = true;
                        cout << "Enter new quantity for " << itemName << ": ";
                        cin >> newQuantity;
                        quantities[i] = newQuantity;
                        cout << "Quantity updated." << endl;
                        break;
                    }
                }

                if (!found) {
                    cout << "Item not found in inventory." << endl;
                }
                break;
            }
            case 3:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 3);

    delete[] items;
    delete[] quantities;

    return 0;
}