#include <iostream>
using namespace std;

class Shape {
public:
    // Virtual function to be overridden
    virtual void draw() {
        cout << "Drawing a generic shape" << endl;
    }
};

class Circle : public Shape {
public:
    // Override the draw() function
    void draw() override {
        cout << "Drawing a circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() override {
        cout << "Drawing a square" << endl;
    }
};

int main() {
    Shape s;
    Circle c;
    Square sq;

    s.draw();   // Output: Drawing a generic shape
    c.draw();   // Output: Drawing a circle
    sq.draw();  // Output: Drawing a square

    return 0;
}