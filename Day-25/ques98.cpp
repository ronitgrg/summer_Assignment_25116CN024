//Write a program to Find common characters in strings.

#include<iostream>
using namespace std;

int main(){
    string str1,str2;
    cout<<"Enter string 1: ";
    getline(cin,str1);
    cout<<"Enter string 2: ";
    getline(cin,str2);

    cout<<"Common Elements: ";
    for(int i=0;i<str1.length();i++){
        for(int j=0;j<str2.length();j++){
            if(str1[i]==str2[j]){
                cout<<str1[i]<<" ";
                str2[j]=' ';
                break;
            }
        }
    }
    cout<<endl;
    return 0;
}