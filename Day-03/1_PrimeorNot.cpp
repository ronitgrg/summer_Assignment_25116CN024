// Q9 Write a program to Check whether a number is prime

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number to check prime: ";
    cin>>n;
    if(n<=1){
        cout<<n<< " is not a prime number."<<endl;
        return 0;}
    bool check = true;
    for(int i=2 ; i*i<=n; i++) {
        if(n%i==0) {
            check = false; 
            break; }
    }
    if(check){
        cout<<n<< " is a prime number."<<endl;
    } else{
        cout<<n<<" is not a prime number."<<endl;}
}