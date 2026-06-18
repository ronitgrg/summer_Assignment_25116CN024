#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr, arr + n);
    reverse(arr, arr + n);

    cout<<"Sorted Array in descending order: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}