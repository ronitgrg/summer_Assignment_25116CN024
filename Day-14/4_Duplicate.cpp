#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter rows and columns: ";
    cin>>x>>y;
    int a[x][y];
    cout<<"Enter elements: ";
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++) cin>>a[i][j];
    }
    int n=x*y,t[n],k=0;
    for(int i=0;i<x;i++)
    {
        for(int j=0;j<y;j++)t[k++]=a[i][j];
    }
    bool f=false;
    cout<<"Duplicate elements: ";
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++)
        {
            if(t[i]==t[j])
            {
                bool al=false;
                for(int m=0;m<i;m++) if(t[m]==t[i]) al=true;
                if(!al) {cout<<t[i]<<" ";f=true;}
                break;
            }
        }
    }
    if(!f)cout<<"None";
    cout<<endl;
    return 0;
}