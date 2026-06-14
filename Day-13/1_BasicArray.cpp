#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter rows and columns: ";
    cin>>r>>c;
    int a[r][c];
    cout<<"Enter elements: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++) cin>>a[i][j];
    }
    cout<<"Displaying array: ";
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++)cout<<a[i][j]<<" ";
        cout<<endl;
    }
    return 0;
}