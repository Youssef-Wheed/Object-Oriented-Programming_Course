#include <iostream>
using namespace std;

// ✅ Define a class named Car
class Car {
public:
    //  Constructor: Called when object is created
    Car() {
        cout << "Constructor: Car object created 🚗" << endl;
    }

    //  Destructor: Called when object is destroyed
    ~Car() {
        cout << "Destructor: Car object destroyed 💥" << endl;
    }

    //  A simple method
    void drive() {
        cout << "Driving the car... 🛣️" << endl;
    }
};

int main() {
    //  Create an object of Car
    Car myCar;

    //  Call a method of the object
    myCar.drive();

    //  Destructor will be called automatically at the end of main()

    return 0;
}
