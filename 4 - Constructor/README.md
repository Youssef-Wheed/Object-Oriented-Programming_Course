## 🔧 C++ Constructors Explained in Detail

In Object-Oriented Programming, a **constructor** is a special type of function that is automatically called when an object of the class is created.

---

### ✅ What is a Constructor?

A **constructor** is a special function inside a class:
- It has the **same name as the class**.
- It has **no return type** (not even `void`).
- It is **automatically invoked** when an object is created.

```cpp
class ClassName {
public:
    ClassName() {
        // constructor body
    }
};
```

---

### 🧠 Why Use Constructors?

| Feature                     | Benefit                                                 |
|----------------------------|----------------------------------------------------------|
| Initialization             | Automatically set default values                         |
| Cleaner Code               | Avoid repeating the same setup code in `main()`          |
| Better Organization        | Keeps code modular and readable                          |

---

### 💡 Default Constructor Example

```cpp
#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    // ✅ Default Constructor
    Student() {
        name = "Unknown";
        age = 0;
        cout << "Constructor called!\n";
    }

    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    Student s1; // Constructor is automatically called
    s1.display();

    return 0;
}
```

**Output:**
```
Constructor called!
Name: Unknown
Age: 0
```

---

### 💡 Parameterized Constructor Example

```cpp
class Student {
public:
    string name;
    int age;

    // ✅ Constructor with parameters
    Student(string n, int a) {
        name = n;
        age = a;
    }

    void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Student s1("Youssef", 22); // Constructor with arguments
    s1.display();
    return 0;
}
```

---

### 📦 Types of Constructors

| Type                    | Description                                        |
|-------------------------|----------------------------------------------------|
| **Default Constructor** | No parameters; sets default values                 |
| **Parameterized**       | Accepts values to initialize attributes directly   |
| **Copy Constructor**    | Creates a copy of another object                   |

---

### 🆚 Constructor vs Member Function

| Feature              | Constructor                              | Member Function                    |
|----------------------|-------------------------------------------|-------------------------------------|
| Name                 | Same as class name                        | Any valid name                      |
| Return Type          | None                                      | Can be `void`, `int`, etc.          |
| Called Automatically | Yes                                       | No (called manually)                |

---

### ✅ Summary

- A **constructor** is a special function that prepares an object when it’s created.
- It can assign default or custom values.
- There are multiple types of constructors: default, parameterized, and copy.
- Unlike member functions, constructors are **called automatically**.

---

Feel free to copy this entire content into your GitHub README.md or Notion for future reference. 🎯
