// Q12 Write a program to Find LCM of two numbers

#include <iostream>
using namespace std;
int main(){
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;
    int maxNum = (a > b) ? a : b;
    while(true) {
        if(maxNum % a == 0 && maxNum % b == 0) {
            cout << "LCM is: " << maxNum << endl;
            break;}
        maxNum++;}
    return 0;
}