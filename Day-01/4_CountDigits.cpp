// Write a program to Count digits in a number

#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;
    int temp = num;
    int count = 0;
    if (temp == 0) {
        count = 1;
    } else {
      if (temp < 0) {
            temp = -temp;
        }  
        while (temp > 0) {
            temp /= 10; 
            count++;  }
    }
    cout << "Number of digits in " << num << " is: " << count << endl;
}