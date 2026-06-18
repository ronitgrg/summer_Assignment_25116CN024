#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int sum=(n+1)*(n+2)/2;
    for(int i=0;i<n;i++){
        sum-=arr[i];
    }
    cout<<"Missing number is: "<<sum<<endl;
    return 0;
}