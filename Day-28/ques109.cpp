#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct Book {
    int id;
    string title;
    string author;
};

void addBook(vector<Book>& library) {
    Book b;
    cout << "Enter Book ID: ";
    cin >> b.id;
    cin.ignore();
    cout << "Enter Title: ";
    getline(cin, b.title);
    cout << "Enter Author: ";
    getline(cin, b.author);
    library.push_back(b);
    cout << "Book added successfully!" << endl;
}

void displayBooks(const vector<Book>& library) {
    if (library.empty()) {
        cout << "No books available in the library." << endl;
        return;
    }
    cout << endl << "Library Books" << endl;
    for (const auto& b : library) {
        cout << "ID: " << b.id << " | Title: " << b.title << " | Author: " << b.author << endl;
    }
}

void searchBook(const vector<Book>& library) {
    cin.ignore();
    string query;
    cout << "Enter book title to search: ";
    getline(cin, query);
    
    for (const auto& b : library) {
        if (b.title == query) {
            cout << "Book Found! ID: " << b.id << " | Author: " << b.author << endl;
            return;
        }
    }
    cout << "Book not found." << endl;
}

int main() {
    vector<Book> library;
    int choice;
    do {
        cout << endl << "1. Add Book" << endl << "2. Display Books" << endl << "3. Search Book" << endl << "4. Exit" << endl << "Enter choice: ";
        cin >> choice;
        switch (choice) {
            case 1: addBook(library); break;
            case 2: displayBooks(library); break;
            case 3: searchBook(library); break;
            case 4: cout << "Exiting..." << endl; break;
            default: cout << "Invalid choice!" << endl;
        }
    } while (choice != 4);
    return 0;
}