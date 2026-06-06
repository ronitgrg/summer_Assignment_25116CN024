// Power without pow x^n

#include<iostream>
using namespace std;
int main(){
    int x,n,ans=1;
    cout<<"Enter base and power: ";
    cin>>x>>n;
    for(int i=1;i<=n;i++){
        ans=ans*x;
    }
    cout<<"Result is: "<<ans<<endl;
}