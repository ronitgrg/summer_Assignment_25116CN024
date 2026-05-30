// Q11 Write a program to Find GCD of two numbers

#include <iostream>
using namespace std;
int main(){
    int n1, n2;
    cout << "Enter two numbers: ";
    cin >> n1 >> n2;
    int gcd = 1;
    int small = (n1 < n2) ? n1 : n2;
    for(int i = 1; i <= small; i++) {
        if(n1 % i == 0 && n2 % i == 0) {
            gcd = i;}
    }
    cout << "GCD of given numbers is: " << gcd << endl;
    return 0;
}