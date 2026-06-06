// Decimal to Binary

#include<iostream>
using namespace std;
int main(){
    int n,ans=0,p=1;
    cout<<"Enter decimal: ";
    cin>>n;
    while(n>0){
        int r=n%2;
        ans=ans+(r*p);
        p=p*10;
        n=n/2;
    }
    cout<<"Binary is: "<<ans<<endl;
}