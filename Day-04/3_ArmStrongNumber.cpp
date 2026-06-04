//Write a program to Check Armstrong number

#include <iostream>
using namespace std;
int main(){
    int n,original,remainder,sum=0;
    cout<<"Enter number: ";
    cin>>n;
    original=n;
    while(n>0){
        remainder=n%10;
        int product=remainder*remainder*remainder;
        sum=sum+product;
        n=n/10;
    }
    if(sum==original){
        cout<<original<<" is Armstrong"<<endl;
    }else{
        cout<<original<<" is not Armstrong"<<endl;
    }
    return 0;
}