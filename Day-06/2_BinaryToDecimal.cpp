// Binary to Decimal

#include<iostream>
using namespace std;
int main(){
    int n,ans=0,p=1;
    cout<<"Enter binary: ";
    cin>>n;
    while(n>0){
        int r=n%10;
        ans=ans+(r*p);
        p=p*2;
        n=n/10;
    }
    cout<<"Decimal is: "<<ans<<endl;
}