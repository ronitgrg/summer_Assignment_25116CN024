//Write a program to Merge two sorted arrays.

#include<iostream>
using namespace std;

int main(){   
    int n1, n2;
    cout << "Enter the size of first array: ";
    cin >> n1;
    int arr1[n1];
    cout << "Enter elements of first sorted array: ";
    for(int i = 0; i < n1; i++){
        cin >> arr1[i];
    }

    cout << "Enter the size of second array: ";
    cin >> n2;
    int arr2[n2];
    cout << "Enter elements of second sorted array: ";
    for(int i = 0; i < n2; i++){
        cin >> arr2[i];
    }

    int mergedSize = n1 + n2;
    int mergedArray[mergedSize];

    int i=0,j=0,k=0;

    while(i < n1 && j < n2){
        if(arr1[i] < arr2[j]){
            mergedArray[k++] = arr1[i++];
        } else {
            mergedArray[k++] = arr2[j++];
        }
    }

    while(i < n1){
        mergedArray[k++] = arr1[i++];
    }

    while(j < n2){
        mergedArray[k++] = arr2[j++];
    }

    cout << "Merged sorted array: ";
    for(int i = 0; i < mergedSize; i++){
        cout << mergedArray[i] << " ";
    }
    
    return 0;
}