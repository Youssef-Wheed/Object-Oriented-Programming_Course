#include <iostream>
using namespace std;

// Parent class
class Animal {
public:
    void eat() {
        cout << "I can eat 🍖" << endl;
    }

    void sleep() {
        cout << "I can sleep 😴" << endl;
    }
};

// Child class (inherits from Animal)
class Dog : public Animal {
public:
    void bark() {
        cout << "I can bark 🐶" << endl;
    }
};

int main() {
    Dog myDog;

    myDog.eat();    // inherited from Animal
    myDog.sleep();  // inherited from Animal
    myDog.bark();   // defined in Dog

    return 0;
}
