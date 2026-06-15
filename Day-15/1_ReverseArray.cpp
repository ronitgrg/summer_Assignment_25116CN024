#include<iostream>
using namespace std;
int main(){
    int r,c,i,j;
    cout<<"Enters Rows and colums of array : ";
    cin>>r>>c;
    int arr[100][100];
    cout<<"Enter Elements of Array : ";
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(i=0;i<r;i++){
        int start=0,end=c-1;
        while(start<end){
            swap(arr[i][start++],arr[i][end--]);
        }
    }
    cout<<"\nResult matrix:"<<endl;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}