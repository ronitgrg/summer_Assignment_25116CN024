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

    cout<<"Common Elements: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }
    cout<<endl;
    return 0;
}