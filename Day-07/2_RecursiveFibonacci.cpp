// Recursive Fibonacci

#include<iostream>
using namespace std;
int fib(int n){
    if(n<=1)
        return n;
    return fib(n-1)+fib(n-2);
}
int main(){
    int n;
    cout<<"Enter term: ";
    cin>>n;
    cout<<"Fibonacci term is: "<<fib(n)<<endl;
}