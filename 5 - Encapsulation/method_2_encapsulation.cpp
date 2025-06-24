#include <iostream> 
using namespace std;    

// Class definition for Company 
class Company
{
    // Data members are private to ensure encapsulation
    // and to prevent direct access from outside the class.
private:
    string name;
    int id;
    int salary;

public: 
    void setvalues()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter ID: ";
        cin >> id;
        cout << "Enter Salary: ";
        cin >> salary;
    }
    void printvalues()
    {
        cout << "Name: " << name << endl;
        cout << "ID: " << id << endl;
        cout << "Salary: " << salary << endl;
    }
};
    int main()
    {
        Company c1;
        c1.setvalues(); // Set values using the encapsulated method
        c1.printvalues(); // Print values using the encapsulated method

        return 0;
    }