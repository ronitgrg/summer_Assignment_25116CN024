#include<iostream>
using namespace std;
int max(int a,int b){
    if(a>b) return a;
    else return b;
}

int main(){
    int a,b;
    cout<<"Enter 2 Numbers : ";
    cin>>a>>b;
    cout<<"Max No.is :"<<max(a,b)<<endl;
    return 0;
}