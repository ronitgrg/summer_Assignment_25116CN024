// Write a program to Calculate sum of first N natural numbers.

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a positive integer: ";
    cin >> n;

    if (n < 1) {
        cout << "Enter a valid natural number greater than 0." <<endl;
    } else {
       
        float sum = n * (n + 1) / 2;
        cout << "The sum of the first " << n << " natural numbers is: " << sum << endl;
    }

    return 0;
}
