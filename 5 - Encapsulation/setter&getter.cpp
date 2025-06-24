#include <iostream>
using namespace std;
// Class definition for Company
class Company
{
    // Data members are private to ensure encapsulation
    // and to prevent direct access from outside the class.
private:
    int salary;
    string name;

public:
    // sitter methods to set private data members
    // Method to print the salary and name
    void setSalary()
    {
        cout << "Enter salary: ";
        cin >> salary; // Set the salary value
    }
    void setName()
    {
        cout << "Enter name: ";
        cin >> name; // Set the name value
    }

    // gitter methods to access private data members
    //  Method to print the salary and name
    int getSalary()
    {
        return salary;
    }
    string getName()
    {
        return name;
    }
};

int main()
{
    // Create an instance of Company
    Company c1;
    c1.setSalary();
    c1.setName();

    Company c2;
    c2.setSalary();
    c2.setName();

    // print sum two salaries in a two objects
    int sum = c1.getSalary() + c2.getSalary();
    cout << "Sum of salaries in C1 + C2 = " << sum << endl;

    return 0;
}