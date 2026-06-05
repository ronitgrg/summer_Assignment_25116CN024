// To print strong number

#include <iostream>
using namespace std;
int main(){
    int n,o,r,sum=0;
    cout<<"Enter number: ";
    cin>>n;
    o=n;
    while(n>0){
        r=n%10;
        int f=1;
        for(int i=1;i<=r;i++){
            f=f*i;}
        sum=sum+f;
        n=n/10;
    }
    if(sum==o){
        cout<<o<<" is a Strong Number"<<endl;
    }else{
        cout<<o<<" is not a Strong Number"<<endl;
    }
}