#include <iostream>
using namespace std;

class Student {
public:
    string name;
    int age;

    //  Default constructor
    Student() {
        name = "Unknown";
        age = 0;
        cout << "Constructor Called!" << endl;
    }

    void display() {
        cout << "Name: " << name << "\nAge: " << age << endl;
    }
};

int main() {
    Student s1; //  Constructor is called automatically
    s1.display();
    return 0;
}