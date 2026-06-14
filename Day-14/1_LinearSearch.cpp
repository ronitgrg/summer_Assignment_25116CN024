#include<iostream>
using namespace std;
int main(){
    int x,y,k,r=-1,c=-1;
    cout<<"Enter rows and columns: ";
    cin>>x>>y;
    int a[x][y];
    cout<<"Enter elements: ";
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++) cin>>a[i][j];
    }
    cout<<"Enter element to search: ";
    cin>>k;
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++)
        {
            if(a[i][j]==k){r=i;c=j;break;}
        }
        if(r!=-1)break;
    }
    if(r!=-1)cout<<"Found at : "<<r<<","<<c<<endl;
    else cout<<"Not found"<<endl;
    return 0;
}