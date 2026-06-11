#include<iostream>
using namespace std;
int f(int n){
    int f=1;
    for(int i=1;i<=n;i++) f*=i;
    return f;
}
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    cout<<"Factorial is :"<<f(n)<<endl;
    return 0;
}