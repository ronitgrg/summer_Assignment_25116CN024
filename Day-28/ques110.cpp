#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    long long accountNumber;
    double balance;

public:
    void createAccount() {
        cout << "Enter Holder Name: ";
        cin.ignore();
        getline(cin, accountHolder);
        cout << "Enter Account Number: ";
        cin >> accountNumber;
        balance = 0.0;
        cout << "Account created successfully with 0 initial balance." << endl;
    }

    void deposit() {
        double amount;
        cout << "Enter amount to deposit: ";
        cin >> amount;
        if (amount > 0) {
            balance += amount;
            cout << "Successfully deposited. Current Balance: " << balance << endl;
        } else {
            cout << "Invalid amount!" << endl;
        }
    }

    void withdraw() {
        double amount;
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > balance) {
            cout << "Insufficient balance!" << endl;
        } else if (amount <= 0) {
            cout << "Invalid amount!" << endl;
        } else {
            balance -= amount;
            cout << "Successfully withdrawn. Remaining Balance: " << balance << endl;
        }
    }

    void checkBalance() const {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main() {
    BankAccount account;
    int choice;
    bool created = false;

    do {
        cout << endl << "1. Create Account" << endl << "2. Deposit" << endl << "3. Withdraw" << endl << "4. Check Balance" << endl << "5. Exit" << endl << "Enter choice: ";
        cin >> choice;
        if (choice >= 2 && choice <= 4 && !created) {
            cout << "Please create an account first!" << endl;
            continue;
        }
        switch (choice) {
            case 1: account.createAccount(); created = true; break;
            case 2: account.deposit(); break;
            case 3: account.withdraw(); break;
            case 4: account.checkBalance(); break;
            case 5: cout << "Exiting..." << endl; break;
            default: cout << "Invalid choice!" << endl;
        }
    } while (choice != 5);
    return 0;
}