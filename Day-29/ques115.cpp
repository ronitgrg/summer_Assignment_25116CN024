//Write a program to Create menu-driven string operations system.

#include<iostream>
using namespace std;

int main(){
    int choice;
    string str1, str2;

    cout << "Enter first string: ";
    cin.ignore();
    getline(cin, str1);
    cout << "Enter second string: ";
    getline(cin, str2);

    do {
        cout << "\nMenu-driven String Operations" << endl;
        cout << "1. Concatenate Strings" << endl;
        cout << "2. Compare Strings" << endl;
        cout << "3. Find Length of Strings" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Concatenated String: " << str1 + str2 << endl;
                break;
            case 2:
                if (str1 == str2) {
                    cout << "Strings are equal." << endl;
                } else {
                    cout << "Strings are not equal." << endl;
                }
                break;
            case 3:
                cout << "Length of first string: " << str1.length() << endl;
                cout << "Length of second string: " << str2.length() << endl;
                break;
            case 4:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 4);

    return 0;
}