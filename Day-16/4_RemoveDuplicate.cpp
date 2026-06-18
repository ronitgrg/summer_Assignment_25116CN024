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

    int unique_arr[n];
    int unique_count=0;

    for(int i=0;i<n;i++){
        bool is_duplicate=false;
        for(int j=0;j<unique_count;j++){
            if(arr[i]==unique_arr[j]){
                is_duplicate=true;
                break;
            }
        }
        if(!is_duplicate){
            unique_arr[unique_count]=arr[i];
            unique_count++;
        }
    }

    cout<<"Array after removing duplicates: ";
    for(int i=0;i<unique_count;i++){
        cout<<unique_arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}