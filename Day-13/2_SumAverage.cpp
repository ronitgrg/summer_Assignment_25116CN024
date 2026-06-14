#include<iostream>
using namespace std;
int main(){
    int x,y,s=0;
    cout<<"Enter rows and columns: ";
    cin>>x>>y;
    int a[x][y];
    cout<<"Enter elements:";
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>a[i][j];
            s+=a[i][j];
        }
    }
    cout<<"Sum: "<<s<<endl<<"Average: "<<(float)s/(x*y)<<endl;
    return 0;
}