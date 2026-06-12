#include<iostream>
using namespace std;
void F(int n){
    int a=0,b=1,next;
    for(int i=1;i<=n;i++){
        if(i==1){cout<<a<<" ";continue;}
        if(i==2){cout<<b<<" ";continue;}
        next=a+b;
        a=b;
        b=next;
        cout<<next<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cout<<"Enter terms :";
    cin>>n;
    F(n);
    return 0;
}