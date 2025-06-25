#include <iostream>
using namespace std;

// Define a class named Book
class Book
{
private:
    string title;
    string author;
    int year;

public:
    // Setter function to set the data (because attributes are private)
    void setData(string t, string a, int y)
    {
        title = t;
        author = a;
        year = y;
    }

    // Function to print book details
    void printInfo()
    {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Year: " << year << endl;
    }

    //  function that accepts a Book object
    // (OR you can make it a regular function outside the class)
    void displayBook(Book b);
};

void Book::displayBook(Book b)
{
    cout << "\nInside displayBook() method ::\n";
    cout << "Title: " << b.title << endl;
    cout << "Author: " << b.author << endl;
    cout << "Year: " << b.year << endl;
}

int main()
{
    Book myBook;

    // Set data using setter
    myBook.setData("The Pragmatic Programmer", "Andy Hunt", 1999);

    // Call member function
    myBook.printInfo();

    // Pass object to external function
    myBook.displayBook(myBook);

    return 0;
}
