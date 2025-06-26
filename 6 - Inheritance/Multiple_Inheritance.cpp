#include <iostream>
using namespace std;

//  First base class
class Engine {
public:
    Engine(int hp) {
        cout << "Engine created with " << hp << " horsepower" << endl;
    }
};

//  Second base class
class Radio {
public:
    Radio(string brand) {
        cout << "Radio brand: " << brand << endl;
    }
};

//  Derived class
class Car : public Engine, public Radio {
public:
    Car(int hp, string brand) : Engine(hp), Radio(brand) {
        cout << "Car object is fully constructed!" << endl;
    }
};

int main() {
    Car myCar(200, "Sony");  //  Constructor will call Engine(200) and Radio("Sony")
    return 0;
}
