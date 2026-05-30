// Q5: Write a program to Find sum of digits of a number.

#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter any number: ";
    cin >> num;
    if (num < 0) {
        num = -num;}
         int totalSum = 0;
     int temp = num;
     while (temp > 0) {
        int lastDigit = temp % 10; 
        totalSum += lastDigit;    
        temp = temp / 10;       }
    cout << "The sum of the digits is: " << totalSum << endl;
    return 0;
}