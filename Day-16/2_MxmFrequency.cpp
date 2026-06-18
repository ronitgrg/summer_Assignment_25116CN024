#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;

    int arr[n];
    cout<<"Enter "<<n<<" elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max_frequency=0;
    int max_frequency_element=arr[0];

    for(int i=0;i<n;i++){
        int frequency=0;
        for(int j=0;j<n;j++){
            if(arr[i]==arr[j]){
                frequency++;
            }
        }
        if(frequency>max_frequency){
            max_frequency=frequency;
            max_frequency_element=arr[i];
        }
    }
    cout<<"Maximum frequency element is: "<<max_frequency_element<<" with frequency: "<<max_frequency<<endl;
    return 0;
}