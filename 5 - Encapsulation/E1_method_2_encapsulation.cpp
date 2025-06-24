#include <iostream>
using namespace std;
// Class definition for Circle
class Circle
{
    // Data members are private to ensure encapsulation
    // and to prevent direct access from outside the class.
private:
    float radius;

public:
    void setValue()
    {
        cout << "Enter radius: ";
        cin >> radius; // Set the radius value
    }
    void printArea()
    {
        float area = 3.14 * radius * radius;
        cout << "Area of the circle: " << area << endl;
    }
};

int main()
{
    Circle c1;      // Create an instance of Circle
    c1.setValue();  // Set the radius using the encapsulated method
    c1.printArea(); // Print the area using the encapsulated method

    return 0;
}