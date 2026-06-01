//Print the Multiplication Table of a Given Number.

#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number to print its multiplication table: ";
    cin >> num;
    cout << "\nMultiplication Table for " << num << ":\n";
    for (int i = 1; i <= 10; i++) {
        cout << num << " x " << i << " = " << (num * i) << endl;
    }
}