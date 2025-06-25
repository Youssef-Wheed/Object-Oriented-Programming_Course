#include <iostream>
using namespace std;

// Define a class named "Box"
class Box {
private:
    int length;  // Private attribute - not accessible outside directly

public:
    // Constructor to initialize the value
    Box(int l) {
        length = l;
    }

    // Declare a friend function
    // This function is NOT a member of Box, but it can access private members
    friend void printBoxLength(Box b);
};

// Define the friend function outside the class
void printBoxLength(Box b) {
    // Because this is a friend, it can access the private member "length"
    cout << "The length of the box is: " << b.length << endl;
}

int main() {
    // Create an object of Box and initialize it
    Box box1(25);

    // Call the friend function and pass the object
    printBoxLength(box1);

    return 0;
}
