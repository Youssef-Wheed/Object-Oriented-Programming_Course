#include <iostream>
using namespace std;

// This code demonstrates how constructors are called in inheritance.
// When a derived class object is created, the base class constructor
// is called first, followed by the derived class constructor
// to ensure that the base part of the object is initialized before
// the derived part.    
class Animal {
public:
    Animal() {
        cout << "Animal constructor called 🐾" << endl;
    }
};

// Child class (inherits from Animal)
// The Dog class inherits from Animal.  
// When a Dog object is created, the Animal constructor is called first.
// This ensures that the base class part of the Dog object is initialized before
// the Dog class constructor is executed.
class Dog : public Animal {
public:
    Dog() {
        cout << "Dog constructor called 🐶" << endl;
    }
};

int main() {
    // Create a Dog object
    // This will trigger the Animal constructor first, followed by the Dog constructor. 
    
    Dog myDog;
    return 0;
}

