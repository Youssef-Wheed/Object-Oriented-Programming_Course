#include <iostream>
using namespace std;

class Shape {
public:
    // Virtual function to be overridden
    virtual void draw() {
        cout << "Drawing a generic shape" << endl;
    }
};

class Circle  {
public:
    // Override the draw() function
    void draw() {
        cout << "Drawing a circle" << endl;
    }
};

class Square : public Shape , public Circle {
public:
    void draw() override {
        // Call the base class draw method and Circle's draw method
        // This is a bit unusual, but it demonstrates multiple inheritance
        // and calling methods from both base classes.

        // Note: In a real-world scenario, you might want to avoid this kind of design
        // as it can lead to confusion. It's better to use composition or clear inheritance hierarch
        // hierarchies.
        
        Shape::draw(); // Call base class draw method
        Circle::draw(); // Call Circle's draw method
        cout << "Drawing a square" << endl;
    }
};

int main() {

    Square sq;
    sq.draw();  // Output:the three statement 

    return 0;
}