#include <iostream>
using namespace std;
// Define a class named Book
class Book
{
public:
    int id;
    string title;
    string author;
    int price;
    int pages;
};

int main()
{
    // Create an object of the Book class
    Book book1;

    // Assign values to the object's attributes
    book1.id = 1;
    book1.title = "Algorithms";
    book1.author = "George Orwell";
    book1.price = 328;
    book1.pages = 328;

    // Display the object's attributes
    cout << "Book ID: " << book1.id << endl;
    cout << "Title: " << book1.title << endl;
    cout << "Author: " << book1.author << endl;
    cout << "Price: " << book1.price << endl;
    cout << "Pages: " << book1.pages << endl;

    return 0;
}   