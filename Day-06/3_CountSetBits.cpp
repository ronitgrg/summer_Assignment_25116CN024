// Count Set Bits

#include<iostream>
using namespace std;
int main(){
   int n,c=0;
    cout<<"Enter number: ";
    cin>>n;
    while(n>0){
        if(n%2==1){
            c++;
        }
        n=n/2;
    }
    cout<<"Total set bits: "<<c<<endl;
}