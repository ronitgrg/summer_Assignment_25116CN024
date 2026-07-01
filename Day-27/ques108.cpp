//Write a program to Create marksheet generation system.

#include<iostream>
using namespace std;

struct Student{
    int RollNo;
    string Name;
    float Marks;
};

Student database[100];
int count=0;

void addStudent() {

    if(count>=100){
        cout<<"Database is full."<<endl;
        return;
    }
    cout << "Enter Roll No: ";
    cin >> database[count].RollNo;
    cout << "Enter Name: ";
    cin.ignore(); 
    getline(cin, database[count].Name);
    cout << "Enter Marks: ";
    cin >> database[count].Marks;
    count++;
    cout << "Student added successfully!\n";
}

void displayStudents(){
    if(count==0){
        cout<<"No records found.";
        return;
    }
    for(int i=0;i<count;i++){
        cout<<"Roll No: "<<database[i].RollNo<<endl;
        cout<<"Name: "<<database[i].Name<<endl;
        cout<<"Marks: "<<database[i].Marks<<endl;
    }
}

int main(){
    int choice;
    while(true){
        cout<< "\nMarksheet Generation System\n";
        cout<< "1. Add Student\n2. View All Students\n3. Exit\nChoice: ";
        cin>>choice;

        if(choice==1){
            addStudent();
        }
        else if(choice==2){
            displayStudents();
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