// Q7 Write a program to Find product of digits

#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    if(n==0) {
        cout<<"Product of digits: 0"<<endl;
    }
    if (n<0) {
        n = -n;
    }
    int product=1;
    int temp=n;
    while (temp>0) {
        int currentDigit = temp % 10;
        product*=currentDigit;
        temp/=10;}
    cout<< "The product of all digits is: "<< product << endl;
    return 0;
}