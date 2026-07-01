//Write a program to Create mini library system.

#include<iostream>
using namespace std;

struct Book{
    int book_id;
    string title;
    string author;
    int year_published;
};

int main(){
    
    int n;
    cout << "Enter number of books: ";
    cin >> n;

    Book books[n];

    for(int i = 0; i < n; i++){
        cout << "Enter details for book " << i+1 << endl;
        cout << "Book ID: ";
        cin >> books[i].book_id;
        cout << "Title: ";
        cin.ignore();
        getline(cin, books[i].title);
        cout << "Author: ";
        getline(cin, books[i].author);
        cout << "Year Published: ";
        cin >> books[i].year_published;
    }

    cout << "\nLibrary Records:\n";
    for(int i = 0; i < n; i++){
        cout << "Book " << i+1 << ":\n";
        cout << "Book ID: " << books[i].book_id << endl;
        cout << "Title: " << books[i].title << endl;
        cout << "Author: " << books[i].author << endl;
        cout << "Year Published: " << books[i].year_published << endl;
    }

    return 0;
}