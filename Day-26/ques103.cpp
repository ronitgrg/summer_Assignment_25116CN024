//Write a program to Create ATM simulation.

#include<iostream>
using namespace std;
int main(){
    
    int pin, enteredPin, choice;
    double balance = 1000.0;

    cout << "Welcome to the ATM Simulation!" << endl;
    cout << "Please set your PIN: ";
    cin >> pin;

    cout << "Enter your PIN to access the ATM: ";
    cin >> enteredPin;

    if(enteredPin != pin){
        cout << "Incorrect PIN. Access denied." << endl;
        return 0;
    }

    do {
        cout << "\nATM Menu:" << endl;
        cout << "1. Check Balance" << endl;
        cout << "2. Deposit Money" << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "Your current balance is: $" << balance << endl;
                break;
            case 2:
                double depositAmount;
                cout << "Enter amount to deposit: $";
                cin >> depositAmount;
                balance += depositAmount;
                cout << "Deposit successful. New balance: $" << balance << endl;
                break;
            case 3:
                double withdrawAmount;
                cout << "Enter amount to withdraw: $";
                cin >> withdrawAmount;
                if(withdrawAmount > balance){
                    cout << "Insufficient funds. Transaction failed." << endl;
                } else {
                    balance -= withdrawAmount;
                    cout << "Withdrawal successful. New balance: $" << balance << endl;
                }
                break;
            case 4:
                cout << "Thank you for using the ATM. Goodbye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while(choice != 4);

    return 0;
}