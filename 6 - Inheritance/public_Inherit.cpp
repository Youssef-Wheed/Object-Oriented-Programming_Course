#include <iostream>
using namespace std;

// Base class (Parent)
class Animal
{
public:
    void eat()
    {
        cout << "Animal is eating..." << endl;
    }
};

/**
Derived class (Child) using **public** inheritance
The Dog class inherits from Animal publicly.
This means that all public members of Animal are accessible in Dog.
Public inheritance is the most common form of inheritance in C++.
It allows the derived class to be treated as an instance of the base class,
while still allowing access to the base class's public members.
**/
class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Dog is barking..." << endl;
    }
};

int main()
{
    Dog d;

    //  We can access both bark() and eat()
    d.bark(); // from Dog class
    d.eat();  // from Animal class (inherited publicly)

    return 0;
}

/**************************************************
 Explanation:
- Dog publicly inherits Animal, so public members in Animal (like eat()) remain public in Dog.
- That’s why we can call d.eat() directly in main().
*****************************************************/