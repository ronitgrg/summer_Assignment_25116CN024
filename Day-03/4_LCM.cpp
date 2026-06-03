// Q12 Write a program to Find LCM of two numbers

#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout<<"Enter two integers: ";
    cin>>a>>b;
    int MaxN=(a>b)?a:b;
    while(true){
        if(MaxN%a==0 && MaxN%b==0){
            cout<<"LCM is: "<<MaxN<<endl;
            break;}
        MaxN++;}
}