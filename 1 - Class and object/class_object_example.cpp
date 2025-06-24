#include <iostream>
using namespace std;

//  Define a class named Book
class Book {
public:
    // Attributes (Data Members)
    string title;
    string author;
    int year;

    // Method (Member Function) to display book info
    void printInfo() {
        cout << "Title: " << title << "\n";
        cout << "Author: " << author << "\n";
        cout << "Year: " << year << "\n\n";
    }
};

int main() {
    // Create first object from the Book class
    Book book1;
    book1.title = "Matilda";
    book1.author = "Roald Dahl";
    book1.year = 1988;

    // Create second object from the Book class
    Book book2;
    book2.title = "The Giving Tree";
    book2.author = "Shel Silverstein";
    book2.year = 1964;

    // Call the printInfo() method for each object
    cout << "Book 1 Info:\n";
    book1.printInfo();

    cout << "Book 2 Info:\n";
    book2.printInfo();

    return 0;
}
