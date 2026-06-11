#include<iostream>
using namespace std;
bool Prime(int n){
    if(n<=1) return false;
    for(int i=2;i*i<=n;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter a Number : ";
    cin>>n;
    if(Prime(n)) cout<<"Prime"<<endl;
    else cout<<"Not Prime"<<endl;
    return 0;
}