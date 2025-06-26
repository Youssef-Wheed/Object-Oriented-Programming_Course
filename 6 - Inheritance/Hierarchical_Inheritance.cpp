#include <iostream>
using namespace std;

// 🏢 Base class
class Company {
protected:
    string companyName;
    string companyLocation;

public:
    // Base class constructor with 2 parameters
    Company(string name, string location) {
        companyName = name;
        companyLocation = location;
        cout << "Company: " << companyName << " | Location: " << companyLocation << endl;
    }
};

// 👷‍♂️ Derived class 1: Engineer
class Engineer : public Company {
private:
    string department;

public:
    // Constructor: passes 2 parameters to base, and sets department
    Engineer(string name, string location, string dept) : Company(name, location) {
        department = dept;
        cout << "Engineer Department: " << department << endl;
    }
};

// 👨‍💼 Derived class 2: Manager
class Manager : public Company {
private:
    string level;

public:
    // Constructor: passes 2 parameters to base, and sets manager level
    Manager(string name, string location, string lvl) : Company(name, location) {
        level = lvl;
        cout << "Manager Level: " << level << endl;
    }
};

// 🎓 Derived class 3: Intern
class Intern : public Company {
private:
    string university;

public:
    // Constructor: passes 2 parameters to base, and sets university name
    Intern(string name, string location, string uni) : Company(name, location) {
        university = uni;
        cout << "Intern from: " << university << endl;
    }
};

//  Main function
int main() {
    cout << "\n=== Engineer Info ===" << endl;
    Engineer e1("TechSoft", "Cairo", "R&D");

    cout << "\n=== Manager Info ===" << endl;
    Manager m1("TechSoft", "Cairo", "Senior");

    cout << "\n=== Intern Info ===" << endl;
    Intern i1("TechSoft", "Cairo", "MIT");

    return 0;
}
