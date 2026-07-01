//Write a program to Create menu-driven array operations system.

#include<iostream>
using namespace std;

int main(){
    int choice, size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size];

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    do {
        cout << "\nMenu-driven Array Operations" << endl;
        cout << "1. Display Array" << endl;
        cout << "2. Find Maximum Element" << endl;
        cout << "3. Find Minimum Element" << endl;
        cout << "4. Calculate Sum of Elements" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Array Elements: ";
                for (int i = 0; i < size; i++) {
                    cout << arr[i] << " ";
                }
                cout << endl;
                break;
            case 2: {
                int maxElement = arr[0];
                for (int i = 1; i < size; i++) {
                    if (arr[i] > maxElement) {
                        maxElement = arr[i];
                    }
                }
                cout << "Maximum Element: " << maxElement << endl;
                break;
            }
            case 3: {
                int minElement = arr[0];
                for (int i = 1; i < size; i++) {
                    if (arr[i] < minElement) {
                        minElement = arr[i];
                    }
                }
                cout << "Minimum Element: " << minElement << endl;
                break;
            }
            case 4: {
                int sum = 0;
                for (int i = 0; i < size; i++) {
                    sum += arr[i];
                }
                cout << "Sum of Elements: " << sum << endl;
                break;
            }
            case 5:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }

    } while (choice != 5);

    delete[] arr;
    return 0;
}