#include <iostream>
using namespace std;

class Book {
public:
    string title;
    string author;
    int year;

    void printInfo() {
        cout << "Title: " << title << "\n";
        cout << "Author: " << author << "\n";
        cout << "Year: " << year << "\n";
    }
};

//  Function that takes an object
void displayBook(Book b) {
    b.printInfo();
}

int main() {
    Book myBook;
    myBook.title = "Matilda";
    myBook.author = "Roald Dahl";
    myBook.year = 1988;

    //  Pass object to function
    displayBook(myBook);

    return 0;
}