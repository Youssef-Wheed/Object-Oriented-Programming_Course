# 📘 C++ Class & Object Example

This project demonstrates the basic concept of **Classes** and **Objects** in C++ using a simple `Book` example.

---

## 📄 Description

The code defines a `Book` class with three attributes:

- `title` (string)  
- `author` (string)  
- `year` (int)

And one method:

- `printInfo()` — displays the details of the book.

In the `main()` function, two book objects are created and initialized with different data. Then, the `printInfo()` method is called for each object.

---

## 🧱 Concepts Covered

- Defining a **class**
- Creating **objects** from a class
- Using **attributes** and **methods**
- Accessing members using the **dot operator**
- Basic I/O using `cout`

---

## 🧾 Code Example

```cpp
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
        cout << "Year: " << year << "\n\n";
    }
};

int main() {
    Book book1;
    book1.title = "Matilda";
    book1.author = "Roald Dahl";
    book1.year = 1988;

    Book book2;
    book2.title = "The Giving Tree";
    book2.author = "Shel Silverstein";
    book2.year = 1964;

    cout << "Book 1 Info:\n";
    book1.printInfo();

    cout << "Book 2 Info:\n";
    book2.printInfo();

    return 0;
}

**output**
Book 1 Info:
Title: Matilda
Author: Roald Dahl
Year: 1988

Book 2 Info:
Title: The Giving Tree
Author: Shel Silverstein
Year: 1964
