#include<iostream>
using namespace std;
int main(){
    int x,y,e=0,o=0;
    cout<<"Enter rows and columns: ";
    cin>>x>>y;
    int a[x][y];
    cout<<"Enter elements: ";
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>a[i][j];
            if(a[i][j]%2==0) e++;
            else o++;
        }
    }
    cout<<"Even count: "<<e<<endl<<"Odd count: "<<o<<endl;
    return 0;
}