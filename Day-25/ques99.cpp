//Write a program to Sort names alphabetically.

#include <iostream>
#include <string>
#include <algorithm> 
using namespace std;
int main() {
    int n;
    cout << "How many names do you want to enter? ";
    cin >> n;

    string names[n];
    cout << "Enter " << n << " names:\n";
    for(int i = 0; i < n; i++) {
        cin >> names[i];
    }

    sort(names, names + n);

    cout << "\nNames in alphabetical order:\n";
    for(int i = 0; i < n; i++) {
        cout << names[i] << endl;
    }
    return 0;
}