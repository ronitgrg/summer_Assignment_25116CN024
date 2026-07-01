//Write a program to Create employee management system.

#include<iostream>
using namespace std;

struct Employee{
    int EmpID;
    string Name;
    float Salary;
};

Employee database[100];
int count=0;

void addEmployee() {

    if(count>=100){
        cout<<"Database is full."<<endl;
        return;
    }
    cout << "Enter Employee ID: ";
    cin >> database[count].EmpID;
    cout << "Enter Name: ";
    cin.ignore(); 
    getline(cin, database[count].Name);
    cout << "Enter Salary: ";
    cin >> database[count].Salary;
    count++;
    cout << "Employee added successfully!\n";
}

void displayEmployees(){
    if(count==0){
        cout<<"No records found.";
        return;
    }
    for(int i=0;i<count;i++){
        cout<<"Employee ID: "<<database[i].EmpID<<endl;
        cout<<"Name: "<<database[i].Name<<endl;
        cout<<"Salary: "<<database[i].Salary<<endl;
    }
}

int main(){
    int choice;
    while(true){
        cout<< "\n Employee Management System \n";
        cout<< "1. Add Employee\n2. View All Employees\n3. Exit\nChoice: ";
        cin>>choice;

        if(choice==1){
            addEmployee();
        }
        else if(choice==2){
            displayEmployees();
        }
        else if(choice==3){
            cout<<"Exiting the program."<<endl;
            break;
        }
        else{
            cout<<"Invalid choice. Please try again."<<endl;
        }
    }
    return 0;
}