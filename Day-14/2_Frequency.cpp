#include<iostream>
using namespace std;
int main(){
    int x,y,k,c=0;
    cout<<"Enter rows and columns: ";
    cin>>x>>y;
    int a[x][y];
    cout<<"Enter elements: ";
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++) cin>>a[i][j];
    }
    cout<<"Enter element for frequency: ";
    cin>>k;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++) if(a[i][j]==k) c++;
    }
    cout<<"Frequency: "<<c<<endl;
    return 0;
}