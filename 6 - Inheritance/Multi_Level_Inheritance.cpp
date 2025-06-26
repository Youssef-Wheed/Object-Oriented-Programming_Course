#include <iostream>
using namespace std;

// 🏢 Base class
class Company
{
protected:
    string companyName;
    string location;

public:
    Company(string name, string loc)
    {
        companyName = name;
        location = loc;
        cout << "Company: " << companyName << " | Location: " << location << endl;
    }
};

// 🏬 First Level Derived Class
class Department : public Company
{
protected:
    string departmentName;

public:
    Department(string name, string loc, string dept) : Company(name, loc)
    {
        departmentName = dept;
        cout << "Department: " << departmentName << endl;
    }
};

// 👷 Second Level Derived Class
class Employee : public Department
{
protected:
    string employeeName;
    int employeeID;

public:
    Employee(string name, string loc, string dept, string empName, int id)
        : Department(name, loc, dept)
    {
        employeeName = empName;
        employeeID = id;
        cout << "Employee Name: " << employeeName << " | ID: " << employeeID << endl;
    }
};

// 🎓 Third Level Derived Class
class Intern : public Employee
{
private:
    string university;

public:
    Intern(string name, string loc, string dept, string empName, int id, string uni)
        : Employee(name, loc, dept, empName, id)
    {
        university = uni;
        cout << "Intern University: " << university << endl;
    }

    // Function to display a full summary
    void displayInfo()
    {
        cout << "\nFull Summary:\n";
        cout << "Company: " << companyName << ", Location: " << location << endl;
        cout << "Department: " << departmentName << endl;
        cout << "Employee: " << employeeName << " (ID: " << employeeID << ")" << endl;
        cout << "Intern From: " << university << endl;
    }
};

// 🔧 Main Function
int main()
{
    // Create an Intern object with full details
    Intern intern1("TechSoft", "New York", "Development", "Youssef", 101, "MIT");

    // Call display function
    intern1.displayInfo();

    return 0;
}
