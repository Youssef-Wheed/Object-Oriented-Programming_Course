# 🔓 Understanding `public` in C++

In C++, `public` is an **access specifier**.  
It defines **who can access** the members (attributes and methods) of a class.

---

## 📌 What is an Access Specifier?

C++ has three access specifiers:

| Access Specifier | Accessible From                      |
|------------------|--------------------------------------|
| `public`         | Anywhere (inside or outside class)   |
| `private`        | Only inside the class itself         |
| `protected`      | Inside the class + derived classes   |

This guide focuses on `public`.

---

## ✅ What Does `public` Do?

When class members (variables or functions) are marked as `public`, they can be accessed from **anywhere** in your code — even from outside the class.

---

## 🧠 Real-Life Analogy

Think of a **public park**:  
Anyone can enter and use it freely.  
Likewise, public members are open and accessible to any code that creates or uses the class.

---

## 💡 Example

```cpp
#include <iostream>
using namespace std;

class Car {
public:
    string brand;

    void startEngine() {
        cout << "Engine started!" << endl;
    }
};

int main() {
    Car myCar;
    myCar.brand = "Toyota";       // ✅ Works: brand is public
    myCar.startEngine();          // ✅ Works: method is public
    return 0;
}
