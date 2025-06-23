## 🔧 What is a Member Function?

A **member function** is a function defined **inside a class**.  
It is used to perform actions or operations related to that class or its objects.

---

### 💡 Example:

```cpp
class Book {
public:
    string title;
    string author;
    // Member function 
    void printInfo() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
    }
};

