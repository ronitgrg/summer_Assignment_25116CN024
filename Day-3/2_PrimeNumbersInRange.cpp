// Q10 Write a program to Print prime numbers in a range

#include <iostream>
using namespace std;
int main(){
    int lower, upper;
    cout << "Enter lower and upper limit: ";
    cin >> lower >> upper;
    cout << "Prime numbers between " << lower << " and " << upper << " are: " << endl;
    for(int i = lower; i <= upper; i++) {
        if (i <= 1) continue;
        bool isPrime = true;
        for(int j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                isPrime = false;
                break;}
        }
        if(isPrime) {
            cout << i << " ";}
    }
    cout <<endl;
    return 0;
}