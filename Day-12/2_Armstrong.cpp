#include<iostream>
#include<cmath>
using namespace std;
bool A(int n){
    int o=n,t=n,d=0,sum=0;
    while(t>0){
        d++;
        t/=10;
    }
    t=n;
    while(t>0){
        sum+=round(pow(t%10,d));
        t/=10;
    }
    return o==sum;
}
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    if(A(n))cout<<"Armstrong"<<endl;
    else cout<<"Not Armstrong"<<endl;
    return 0;
}