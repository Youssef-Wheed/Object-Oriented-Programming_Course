#include <iostream>
using namespace std;

class Company
{
    // Data members are private to ensure encapsulation
    // and to prevent direct access from outside the class.
private:
    string name;
    int id;
    int salary;

public:
    // method to add employee details
    // using the 1st method encapsulation

    void add(string n, int i, int sal)
    {
        name = n;
        id = i;
        salary = sal;
    }
    void display()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Company c1;
    c1.add("John Doe", 101, 50000);
    c1.display();

    return 0;
}