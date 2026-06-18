#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size of first array: ";
    cin>>n;

    int arr1[n];
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }

    int m;
    cout<<"Enter size of second array: ";
    cin>>m;

    int arr2[m];
    cout<<"Enter "<<m<<" elements. ";
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }

    int intersection_Arr[n+m];
    int k=0;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                bool found=false;
                for(int l=0;l<k;l++){
                    if(intersection_Arr[l]==arr1[i]){
                        found=true;
                        break;
                    }
                }
                if(!found){
                    intersection_Arr[k++]=arr1[i];
                }
                break;
            }
        }
    }

    cout<<"Intersection of Arrays: ";
    for(int i=0;i<k;i++){
        cout<<intersection_Arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}