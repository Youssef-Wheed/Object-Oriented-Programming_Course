#include <iostream>
using namespace std;            
// Defining a class named rectangle
class Rectangle {
    // Access specifier for the class attributes
    public:
        // Attributes of the Rectangle class
        int length;
        int width;

        // Member function to calculate area
        int calculateArea() {
            return length * width;
        }
};

int main() {
    // Creating an instance of Rectangle
    Rectangle rect;
    rect.length = 10;
    rect.width = 5;

    // Calculating and displaying the area
    cout << "\nArea of Rectangle: " << rect.calculateArea() << endl;

    return 0;
}