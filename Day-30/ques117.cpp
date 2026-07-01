// Write a program to create a student record system using arrays and strings.

#include <iostream>
#include <limits>
#include <string>
#include <vector>

struct Student {
    int roll_no;
    std::string name;
    float marks;
    std::string course;
};

void clearInputBuffer() {
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

Student readStudent(int index) {
    Student student;

    std::cout << "Enter details for student " << index << ":\n";

    while (true) {
        std::cout << "Roll Number: ";
        if (std::cin >> student.roll_no) {
            break;
        }
        std::cout << "Invalid input. Please enter a whole number for roll number.\n";
        std::cin.clear();
        clearInputBuffer();
    }

    clearInputBuffer();

    std::cout << "Name: ";
    std::getline(std::cin, student.name);
    while (student.name.empty()) {
        std::cout << "Name cannot be empty. Please enter a name: ";
        std::getline(std::cin, student.name);
    }

    while (true) {
        std::cout << "Marks: ";
        if (std::cin >> student.marks) {
            break;
        }
        std::cout << "Invalid input. Please enter a valid number for marks.\n";
        std::cin.clear();
        clearInputBuffer();
    }

    clearInputBuffer();

    std::cout << "Course: ";
    std::getline(std::cin, student.course);
    while (student.course.empty()) {
        std::cout << "Course cannot be empty. Please enter a course: ";
        std::getline(std::cin, student.course);
    }

    return student;
}

void printStudentRecord(const Student& student, int index) {
    std::cout << "Student " << index << ":\n";
    std::cout << "  Roll Number: " << student.roll_no << "\n";
    std::cout << "  Name:        " << student.name << "\n";
    std::cout << "  Marks:       " << student.marks << "\n";
    std::cout << "  Course:      " << student.course << "\n";
}

int main() {
    int n = 0;
    std::cout << "Enter number of students: ";
    while (!(std::cin >> n) || n <= 0) {
        std::cout << "Please enter a positive whole number for the number of students: ";
        std::cin.clear();
        clearInputBuffer();
    }

    clearInputBuffer();

    std::vector<Student> students;
    students.reserve(n);

    for (int i = 1; i <= n; ++i) {
        students.push_back(readStudent(i));
        std::cout << "\n";
    }

    std::cout << "\nStudent Records:\n";
    for (int i = 0; i < n; ++i) {
        printStudentRecord(students[i], i + 1);
        std::cout << "\n";
    }

    return 0;
}
