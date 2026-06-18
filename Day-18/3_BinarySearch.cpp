#include<iostream>
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

    int target;
    cout<<"Enter the element to be found: ";
    cin>>target;

    int left=0;
    int right=n-1;
    int result_index=-1;

    while(left<=right){
        int mid=left+(right-left)/2;
        if(arr[mid]==target){
            result_index=mid;
            break;
        }
        else if(arr[mid]<target){
            left=mid+1;
        }
        else{
            right=mid-1;
        }
    }
    if(result_index!=-1){
        cout<<"Element found at index: "<<result_index;
    }
    else{
        cout<<"Element not found in the array.";
    }
    return 0;
}