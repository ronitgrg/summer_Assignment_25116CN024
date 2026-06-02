// Q6 Write a program to Reverse a number

#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a number to reverse: ";
    cin>>n;
    int reverse = 0;
    int temp=n;
    while(temp!= 0) {
        int r = temp%10;
        reverse = (reverse*10)+r;
        temp /= 10;}
    cout<<"Reversed number: "<<reverse<< endl;
}