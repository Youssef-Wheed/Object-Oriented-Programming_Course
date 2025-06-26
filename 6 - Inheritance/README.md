# 🧬 Inheritance in C++ (OOP)

This repository contains complete learning content about **Inheritance in C++**, with explanations, code examples, outputs, and theoretical summaries.

> ✍️ Created by **Youssef Wheed**

---

## 📘 Table of Contents

* [Single Inheritance](#single-inheritance)
* [Constructor with Inheritance](#constructor-with-inheritance)
* [Parameterized Constructor](#parameterized-constructor)
* [Public & Private Access Modifiers](#public--private-access-modifiers)
* [Protected Keyword](#protected-keyword)
* [Multiple Inheritance](#multiple-inheritance)
* [Function Overriding](#function-overriding)
* [Hierarchical Inheritance](#hierarchical-inheritance)
* [Multi-Level Inheritance](#multi-level-inheritance)

---

## 🔹 Single Inheritance

### 📚 Theory:

In single inheritance, a derived class inherits from only one base class. It allows code reuse and extension.

| Base Class | Derived Class |
| ---------- | ------------- |
| Parent     | Child         |

### ✅ Code:

```cpp
class Parent {
public:
    void speak() {
        cout << "Speaking" << endl;
    }
};

class Child : public Parent {
};

int main() {
    Child c;
    c.speak();
}
```

### 🔸 Output:

```
Speaking
```

---

## 🔹 Constructor with Inheritance

### 📚 Theory:

When a derived class object is created, the base class constructor is executed first, followed by the derived class constructor.

### ✅ Code:

```cpp
class Parent {
public:
    Parent() {
        cout << "Parent Constructor" << endl;
    }
};

class Child : public Parent {
public:
    Child() {
        cout << "Child Constructor" << endl;
    }
};

int main() {
    Child c;
}
```

### 🔸 Output:

```
Parent Constructor
Child Constructor
```

---

## 🔹 Parameterized Constructor

### 📚 Theory:

To pass values during inheritance, the derived class should call the base class constructor explicitly using the initializer list.

### ✅ Code:

```cpp
class Parent {
public:
    Parent(string name) {
        cout << "Parent Name: " << name << endl;
    }
};

class Child : public Parent {
public:
    Child(string name, int age) : Parent(name) {
        cout << "Child Age: " << age << endl;
    }
};

int main() {
    Child c("Company", 25);
}
```

### 🔸 Output:

```
Parent Name: Company
Child Age: 25
```

---

## 🔹 Public & Private Access Modifiers

### 📚 Theory:

* **Public Inheritance**: Public and protected members remain accessible.
* **Private Inheritance**: All inherited members become private.

| Inheritance Type | Access in Child | Outside Access |
| ---------------- | --------------- | -------------- |
| Public           | ✅               | ✅              |
| Private          | ✅               | ❌              |

### ✅ Code:

```cpp
class Parent {
public:
    void publicFunc() {
        cout << "Public Function" << endl;
    }
};

class Child1 : public Parent {};
class Child2 : private Parent {};

int main() {
    Child1 c1;
    c1.publicFunc();

    // Child2 c2;
    // c2.publicFunc(); // ❌ Not allowed
}
```

### 🔸 Output:

```
Public Function
```

---

## 🔹 Protected Keyword

### 📚 Theory:

* Used to hide members from outside the class but allow access in derived classes.
* More flexible than private, used for inheritance logic.

### ✅ Code:

```cpp
class Base {
protected:
    int value = 10;
};

class Derived : public Base {
public:
    void show() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Derived d;
    d.show();
}
```

### 🔸 Output:

```
Value: 10
```

---

## 🔹 Multiple Inheritance

### 📚 Theory:

* One class inherits from more than one base class.
* Useful when combining functionalities.

| Class A |           |
| ------- | --------- |
|         | → Class C |
| Class B |           |

### ✅ Code:

```cpp
class A {
public:
    void showA() {
        cout << "From A" << endl;
    }
};

class B {
public:
    void showB() {
        cout << "From B" << endl;
    }
};

class C : public A, public B {};

int main() {
    C obj;
    obj.showA();
    obj.showB();
}
```

### 🔸 Output:

```
From A
From B
```

---

## 🔹 Function Overriding

### 📚 Theory:

* Redefining a base class method in the derived class.
* Used in polymorphism to change behavior.

### ✅ Code:

```cpp
class Shape {
public:
    void draw() {
        cout << "Drawing shape" << endl;
    }
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing Circle" << endl;
    }
};

int main() {
    Shape s;
    Circle c;
    s.draw();
    c.draw();
}
```

### 🔸 Output:

```
Drawing shape
Drawing Circle
```

---

## 🔹 Hierarchical Inheritance

### 📚 Theory:

* One base class is inherited by multiple child classes.

\|      |→ Dog     |
|Animal|→ Cat     |

### ✅ Code:

```cpp
class Animal {
public:
    void eat() {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal {};
class Cat : public Animal {};

int main() {
    Dog d;
    Cat c;
    d.eat();
    c.eat();
}
```

### 🔸 Output:

```
Eating...
Eating...
```

---

## 🔹 Multi-Level Inheritance

### 📚 Theory:

A derived class inherits from another derived class (like a chain).

\| Company → Department → Employee |

### ✅ Code:

```cpp
class Company {
public:
    Company() {
        cout << "Company Constructor" << endl;
    }
};

class Department : public Company {
public:
    Department() {
        cout << "Department Constructor" << endl;
    }
};

class Employee : public Department {
public:
    Employee() {
        cout << "Employee Constructor" << endl;
    }
};

int main() {
    Employee emp;
}
```

### 🔸 Output:

```
Company Constructor
Department Constructor
Employee Constructor
```

---

## 📌 Summary of What You Learned:

| Concept                   | Description                                     |
| ------------------------- | ----------------------------------------------- |
| Single Inheritance        | One base → one derived class                    |
| Constructor Inheritance   | Base constructor runs before derived one        |
| Parameterized Constructor | Values passed via constructor chaining          |
| Public vs Private         | Affects accessibility of members in child class |
| Protected                 | Visible in derived class, not outside           |
| Multiple Inheritance      | Inherit from multiple classes                   |
| Function Overriding       | Change base function in derived                 |
| Hierarchical              | One parent, many children                       |
| Multi-Level               | Chain of inheritance                            |

> ✅ This documentation was created by **Youssef Wheed** to help others learn OOP Inheritance in a structured and clean way.

---

🎯 Happy Coding & Keep Practicing!
