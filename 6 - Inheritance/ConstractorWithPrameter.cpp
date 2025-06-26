#include <iostream>
using namespace std;

// This code demonstrates how constructors with parameters work in inheritance.
// When a derived class object is created, the base class constructor
// with parameters is called first, followed by the derived class constructor
// to ensure that the base part of the object is initialized with the provided parameters.
class Person
{
public:
    Person(string n)
    {
        cout << "Person constructor: " << n << endl;
    }
};

// Derived class
class Student : public Person
{
public:
    // The Student constructor takes a name and a grade.
    // It calls the Person constructor with the name parameter.
    // This ensures that the base class part of the Student object is initialized
    // with the provided name before the Student constructor executes.
    // Constructor with parameters

    Student(string n, int g) : Person(n)
    {
        cout << "Student constructor: Grade = " << g << endl;
    }
};

int main()
{
    Student s1("Ahmed", 90);
    return 0;
}
