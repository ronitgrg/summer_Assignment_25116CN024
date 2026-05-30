// Q6: Write a program to Reverse a number.

#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number to reverse: ";
    cin >> num;
    int reversedNum = 0;
    int temp = num;
    while (temp != 0) {
        int remainder = temp % 10;
        reversedNum = (reversedNum * 10) + remainder;
        temp /= 10;}
    cout << "Reversed number: " << reversedNum << endl;
    return 0;
}