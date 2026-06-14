#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter rows and columns: ";
    cin>>x>>y;
    int a[x][y];
    cout<<"Enter elements: ";
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++)cin>>a[i][j];
    }
    int mx=a[0][0],mn=a[0][0];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(a[i][j]>mx) mx=a[i][j];
            if(a[i][j]<mn) mn=a[i][j];
        }
    }
    cout<<"Largest: "<<mx<<endl<<"Smallest: "<<mn<<endl;
    return 0;
}