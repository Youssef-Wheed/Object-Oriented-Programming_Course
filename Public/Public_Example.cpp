#include <iostream>
using namespace std;

// Defining a class named Book
class Book
{
    // Access specifier for the class attributes
public:
    // Attributes of the Book class
    int price;
    int pages;
    string name;
};

int main()
{
    // Creating an instance of Book and initializing its attributes
    // Using the public access specifier to access attributes directly  
    Book book1;
    book1.price = 500;
    book1.pages = 300;
    book1.name = "C++ Programming";

    // Displaying book details
    cout << "Book Name: " << book1.name << endl;
    cout << "Book Price: " << book1.price << endl;
    cout << "Book Pages: " << book1.pages << endl;
    return 0;
}