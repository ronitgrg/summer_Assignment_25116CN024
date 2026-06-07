// Recursive Reverse

#include <iostream>
using namespace std;
int rev(int n, int temp){
    if(n==0)
        return temp;
    return rev(n/10, temp*10+n%10);
}
int main(){
    int n;
    cout<<"Enter number: ";
    cin>>n;
    cout<<"Reversed number: "<<rev(n,0)<<endl;
}