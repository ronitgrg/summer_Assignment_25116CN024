// Q8 Write a program to Check whether a nber is palindrome

#include <iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter an integer: ";
    cin>>n;
    if(n<0) {
        cout<<n << " is not a palindrome number."<<endl;
    }
    int rev=0;
    int temp = n;
    while(temp>0) {
        int digit=temp%10;
        rev=(rev*10)+digit;
        temp=temp/10;}
    if(n==rev) {
        cout<<n<< " is a palindrome number."<<endl;
    } else{
        cout<<n<<" is not a palindrome number." << endl;
}
}