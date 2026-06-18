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

    int union_Arr[n+m];
    int k=0;

    for(int i=0;i<n;i++){
        union_Arr[k++]=arr1[i];
    }

    for(int i=0;i<m;i++){
        bool found=false;
        for(int j=0;j<k;j++){
            if(arr2[i]==union_Arr[j]){
                found=true;
                break;
            }
        }
        if(!found){
            union_Arr[k++]=arr2[i];
        }
    }

    cout<<"Union of Arrays: ";
    for(int i=0;i<k;i++){
        cout<<union_Arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}