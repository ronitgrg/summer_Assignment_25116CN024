//Write a program to Create mini employee management system.

#include<iostream>
using namespace std;

struct Employee{
    int emp_id;
    string name;
    string department;
    float salary;
};

int main(){
    
    int n;
    cout << "Enter number of employees: ";
    cin >> n;

    Employee employees[n];

    for(int i = 0; i < n; i++){
        cout << "Enter details for employee " << i+1 << endl;
        cout << "Employee ID: ";
        cin >> employees[i].emp_id;
        cout << "Name: ";
        cin.ignore();
        getline(cin, employees[i].name);
        cout << "Department: ";
        getline(cin, employees[i].department);
        cout << "Salary: ";
        cin >> employees[i].salary;
    }

    cout << "\nEmployee Records:\n";
    for(int i = 0; i < n; i++){
        cout << "Employee " << i+1 << ":\n";
        cout << "Employee ID: " << employees[i].emp_id << endl;
        cout << "Name: " << employees[i].name << endl;
        cout << "Department: " << employees[i].department << endl;
        cout << "Salary: " << employees[i].salary << endl;
    }

    return 0;
}