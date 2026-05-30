// Q9 Write a program to Check whether a number is prime

#include <iostream>
using namespace std;
int main(){
    int num;
    cout << "Enter a number to check prime: ";
    cin >> num;
    if (num <= 1) {
        cout << num << " is not a prime number." << endl;
        return 0;}
    bool check = true;
    for(int i = 2; i * i <= num; i++) {
        if(num % i == 0) {
            check = false; 
            break; }
    }
    if(check) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }
    return 0;
}