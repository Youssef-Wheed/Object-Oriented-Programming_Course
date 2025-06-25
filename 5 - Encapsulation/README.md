# 📦 Encapsulation in C++

Encapsulation is a fundamental principle of Object-Oriented Programming (OOP). It refers to the concept of bundling data (variables) and the functions (methods) that operate on that data into a single unit — typically a class — and restricting direct access to some of the object’s internal components. This ensures better control, security, and modularity.

This guide includes the most important topics related to encapsulation in C++, with clear explanations and essential code examples including their output.

---

## 🧠 What You'll Learn

### 1. **Access Specifiers: `private` and `public`**

Access specifiers define the visibility of class members:

* `private`: Members are only accessible within the class.
* `public`: Members can be accessed from outside the class via an object.

Encapsulation encourages keeping data members private and accessing them through public methods.

#### 🔸 Example: Access Specifiers

```cpp
#include <iostream>
using namespace std;

class Person {
private:
    string name; // not accessible directly

public:
    void setName(string n) {
        name = n;
    }
    void showName() {
        cout << "Name: " << name << endl;
    }
};

int main() {
    Person p;
    p.setName("John");
    p.showName();
    return 0;
}
```

**Output:**

```
Name: John
```

---

### 2. **Getter and Setter Methods**

Getters and setters are public methods used to access and update private variables. This enforces validation, prevents misuse, and maintains integrity.

#### 🔸 Example: Getter and Setter

```cpp
#include <iostream>
using namespace std;

class Account {
private:
    double balance;

public:
    void setBalance(double b) {
        if (b >= 0)
            balance = b;
        else
            cout << "Invalid balance" << endl;
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    Account acc;
    acc.setBalance(1500.75);
    cout << "Balance: $" << acc.getBalance() << endl;
    return 0;
}
```

**Output:**

```
Balance: $1500.75
```

---

### 3. **Constructor Types**

Constructors are special functions used to initialize objects. There are two main types:

* **Default Constructor**: Takes no parameters.
* **Parameterized Constructor**: Takes parameters to initialize values directly.

#### 🔸 Example: Default and Parameterized Constructors

```cpp
#include <iostream>
using namespace std;

class Car {
private:
    string brand;
    int year;

public:
    Car() {
        brand = "Unknown";
        year = 0;
    }

    Car(string b, int y) {
        brand = b;
        year = y;
    }

    void display() {
        cout << "Brand: " << brand << ", Year: " << year << endl;
    }
};

int main() {
    Car car1;
    Car car2("Toyota", 2022);
    
    car1.display();
    car2.display();
    return 0;
}
```

**Output:**

```
Brand: Unknown, Year: 0
Brand: Toyota, Year: 2022
```

---

### 4. **Destructor**

A destructor is a special function that is automatically called when an object is destroyed. It is useful for cleanup tasks.

```cpp
#include <iostream>
using namespace std;

class Temp {
public:
    Temp() {
        cout << "Constructor called" << endl;
    }

    ~Temp() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Temp obj;
    return 0;
}
```

**Output:**

```
Constructor called
Destructor called
```

---

### 5. **Scope Resolution Operator (`::`)**

Used to define methods outside the class definition to keep class declarations clean.

```cpp
#include <iostream>
using namespace std;

class Student {
private:
    string name;

public:
    void setName(string);
    void display();
};

void Student::setName(string n) {
    name = n;
}

void Student::display() {
    cout << "Student: " << name << endl;
}

int main() {
    Student s;
    s.setName("Sara");
    s.display();
    return 0;
}
```

**Output:**

```
Student: Sara
```

---

### 6. **Friend Function**

A friend function is not a member of the class but has access to its private members. It is declared using the `friend` keyword.

```cpp
#include <iostream>
using namespace std;

class Box {
private:
    int width;

public:
    Box(int w) {
        width = w;
    }

    friend void showWidth(Box b);
};

void showWidth(Box b) {
    cout << "Box width: " << b.width << endl;
}

int main() {
    Box b(20);
    showWidth(b);
    return 0;
}
```

**Output:**

```
Box width: 20
```

---

## ✅ Summary Table

| Concept                   | Purpose / Benefit                             |
| ------------------------- | --------------------------------------------- |
| `private` / `public`      | Controls data access (data hiding)            |
| Getter / Setter           | Access and modify private members safely      |
| Constructor Types         | Initialize objects (with/without values)      |
| Destructor                | Cleanup when object is destroyed              |
| Scope Resolution Operator | Define functions outside class body           |
| Friend Function           | Give outside functions access to private data |

---

## 🧾 About This Repo

I'm learning Object-Oriented Programming (OOP) step by step and documenting everything I study clearly for future reference and sharing with others.

*Stay tuned for more OOP principles like Inheritance, Polymorphism, and Abstraction!* 🚀
