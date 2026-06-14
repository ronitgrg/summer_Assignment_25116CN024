#include<bits/stdc++.h>
using namespace std;
int main(){
    int x,y,m1=INT_MIN,m2=INT_MIN;
    cout<<"Enter rows and columns: ";
    cin>>x>>y;
    int a[x][y];
    cout<<"Enter elements: ";
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++) cin>>a[i][j];
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(a[i][j]>m1){
                m2=m1;
                m1=a[i][j];}
            else if(a[i][j]>m2&&a[i][j]!=m1) m2=a[i][j];
        }
    }
    if(m2!=INT_MIN)cout<<"Second largest: "<<m2<<endl;
    else cout<<"No second largest element"<<endl;
    return 0;
}