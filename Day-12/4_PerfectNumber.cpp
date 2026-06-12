#include<iostream>
using namespace std;
bool P(int n){
    if(n<=0)return false;
    int sum=0;
    for(int i=1;i<n;i++){
        if(n%i==0)sum+=i;
    }
    return sum==n;
}
int main(){
    int n;
    cout<<"Enter number : ";
    cin>>n;
    if(P(n))cout<<"Perfect Number"<<endl;
    else cout<<"Not Perfect Number"<<endl;
    return 0;
}