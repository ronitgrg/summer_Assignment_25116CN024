//Write a program to Print Armstrong numbers in a range 

#include <iostream>
using namespace std;
int main(){
    int low,high;
    cout<<"Enter range (low and high): ";
    cin>>low>>high;
    cout<<"Armstrong numbers: ";
    for(int i=low;i<=high;i++){
        int n=i;
        int sum=0;
        int remainder;
        while(n>0){
            remainder=n%10;
            int product=remainder*remainder*remainder;
            sum=sum+product;
            n=n/10;}
        if(sum==i){
            cout<<i<<" ";}
        }
}