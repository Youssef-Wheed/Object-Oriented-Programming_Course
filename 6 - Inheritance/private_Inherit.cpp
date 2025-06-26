#include <iostream>
using namespace std;

// Base class (Parent)
class Animal {
public:
    void eat() {
        cout << "Animal is eating..." << endl;
    }
};

// Derived class (Child) using private inheritance
class Cat : private Animal {
public:
    void meow() {
        cout << "Cat is meowing..." << endl;
    }

    void callEat() {
        eat();  //  Still accessible inside the class
    }
};

int main() {
    Cat c;

    //  We can access meow() normally
    c.meow();

    //  Error: eat() is private in Cat due to private inheritance
    // c.eat(); // This will cause a compilation error

    //  Instead, we can call eat() using a public function in Cat
    c.callEat();

    return 0;
}

/*******************************************************
 Explanation:
- Cat privately inherits from Animal, so public members like eat() become private inside Cat.
- That's why c.eat() is not allowed outside Cat, but eat() can still be used inside the class 
(like in callEat()).
 ********************************************************
 */
