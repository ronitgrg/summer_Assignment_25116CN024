//Write a program to Find nth Fibonacci term

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter term position: ";
    cin>>n;
    if(n<=0){
        cout<<"Invalid position"<<endl;
        return 0;
    }
    if(n==1){
        cout<<"1st term is: 0"<<endl;
        return 0;
    }
    if(n==2){
        cout<<"2nd term is: 1"<<endl;
        return 0;
    }
    long long a=0,b=1,ans=0;
    for(int i=3;i<=n;i++){
        ans=a+b;
        a=b;
        b=ans;
    }
    cout<<n<<"th term is: "<<ans<<endl;
    return 0;
}