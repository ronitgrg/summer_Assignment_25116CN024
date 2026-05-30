//Find the Factorial of a Number

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a non-negative integer: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not for negative numbers." << endl;
    } else {
        unsigned long long factorial = 1;
        for (int i = 1; i <= num; ++i) {
            factorial *= i;
        }
        cout << "Factorial of " << num << " is: " << factorial << endl;
    }

    return 0;
}