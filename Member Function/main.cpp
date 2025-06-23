#include <iostream>
using namespace std;
// Defining a class named Book
class Book
{
    // Access specifier for the class attributes
public:
    // Attributes of the Book class
    string title;
    int price;
    int pages;
    string author;

    // Member function to display book details
    void displayDetails() {
        cout << "Book Name: " << title << endl;
        cout << "Book Price: " << price << endl;
        cout << "Book Pages: " << pages << endl;
        cout << "Book Author: " << author << endl;
        cout << "------------------------" << endl;
    }
};
int main()
{
    // Creating an instance of Book and initializing its attributes
    Book book1;
    book1.title = "C++ Programming";
    book1.price = 500;                  
    book1.pages = 300;
    book1.author = "John Doe";

    // Displaying book details using the member function
    book1.displayDetails();
  
}