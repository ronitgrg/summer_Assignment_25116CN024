//Write a program to Generate Fibonacci series

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of terms: ";
    cin>>n;
    if(n<=0){
        cout<<"Invalid input"<<endl;
        return 0;
    }
    long long a=0,b=1,next;
    cout<<"Series: ";
    for(int i=1;i<=n;i++){
        if(i==1){
            cout<<a<<" ";
            continue;}
        if(i==2){
            cout<<b<<" ";
            continue;}
        next=a+b;
        a=b;
        b=next;
        cout<<next<<" ";}
    cout<<endl;
}