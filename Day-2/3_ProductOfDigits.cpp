// Q7: Write a program to Find product of digits.

#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (num == 0) {
        cout << "Product of digits: 0" << endl;
        return 0;}
    if (num < 0) {
        num = -num;}
    int product = 1;
    int temp = num;
    while (temp > 0) {
        int currentDigit = temp % 10;
        product *= currentDigit;
        temp /= 10;}
    cout << "The product of all digits is: " << product << endl;
    return 0;
}