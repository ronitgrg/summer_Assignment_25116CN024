// To get Largest prime factor

#include <iostream>
using namespace std;
int main(){
    int n,mp=-1;
    cout<<"Enter number: ";
    cin>>n;
    int temp=n;
    while(temp%2==0){
        mp=2;
        temp=temp/2;}
    for(int i=3;i*i<=temp;i=i+2){
        while(temp%i==0){
            mp=i;
            temp=temp/i;}
    }
    if(temp>2){
        mp=temp;
    }
    cout<<"Largest prime factor of "<<n<<" is: "<<mp<<endl;
   
}