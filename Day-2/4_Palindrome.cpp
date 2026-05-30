// Q8: Write a program to Check whether a number is palindrome.4

#include <iostream>
using namespace std;
int main() {
    int Num;
    cout << "Enter an integer: ";
    cin >> Num;
    if (Num < 0) {
        cout << Num << " is not a palindrome number." << endl;
        return 0;}
    int rev = 0;
    int temp = Num;
    while (temp > 0) {
        int digit = temp % 10;
        rev = (rev * 10) + digit;
        temp = temp / 10;}
    if (Num == rev) {
        cout <<Num << " is a palindrome number." << endl;
    } else {
        cout << Num << " is not a palindrome number." << endl;}
    return 0;
}