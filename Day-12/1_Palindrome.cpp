#include<iostream>
using namespace std;
bool P(int n){
    int o=n,r=0;
    while(n>0){
        r=(r*10)+(n%10);
        n/=10;
    }
    return o==r;
}
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    if(P(n))cout<<"Palindrome"<<endl;
    else cout<<"Not Palindrome"<<endl;
    return 0;
}