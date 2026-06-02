// Q5 Write a program to Find sum of digits of a number

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter any number: ";
    cin>>n;
    if (n<0) {
        n=-n;}
         int Sum=0;
     int temp=n;
     while (temp > 0) {
        int lastDigit=temp%10; 
        Sum+=lastDigit;    
        temp = temp/10;       }
    cout<<"The sum of the digits is:"<<Sum<<endl;
}