#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of first array: ";
    cin>>n;

    int arr1[n];
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    int m;
    cout<<"Enter the size of second array: ";
    cin>>m;

    int arr2[m];
    cout<<"Enter "<<m<<" elements: ";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    int merged[n+m];
    
    for(int i=0;i<n;i++){
        merged[i]=arr1[i];
    }
    for(int i=0;i<m;i++){
        merged[n+i]=arr2[i];
    }

    cout<<"Merged Array: ";
    for(int i=0;i<(n+m);i++){
        cout<<merged[i]<<" ";
    }
    cout<<endl;
    return 0;
}