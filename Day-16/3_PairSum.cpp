#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" elements. ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
    int target_sum;
    cout<<"Enter the target sum: ";
    cin>>target_sum;

    sort(arr, arr+n);
    int left=0,right=n-1;
    bool pair_found=false;
    
    while(left<right){
        int current_sum=arr[left]+arr[right];
        if(current_sum==target_sum){
            cout<<"Pair found: "<<arr[left]<<" and "<<arr[right]<<endl;
            pair_found=true;
            break;
        }
        else if(current_sum<target_sum){
            left++;
        }
        else{
            right--;
        }
    }
    if(!pair_found){
        cout<<"No pair found with the given sum."<<endl;
    }
    return 0;
}