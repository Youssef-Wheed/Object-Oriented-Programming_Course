#include <iostream>
using namespace std;

// ✅ Base class
class Person {
protected:
    string name; // 👈 Protected member: accessible in this class and derived classes
    int age;

public:
    // Public method to set values
    void setPersonData(string n, int a) {
        name = n;
        age = a;
    }
};

// ✅ Derived class using public inheritance
class Student : public Person {
private:
    string school;

public:
    // Public method to set student-specific data
    void setStudentData(string s) {
        school = s;
    }

    // Method to display all information
    void displayInfo() {
        // Accessing protected members from base class
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "School: " << school << endl;
    }
};

int main() {
    Student st;

    // We can call public methods
    st.setPersonData("Youssef", 20);
    st.setStudentData("Tech University");

    // Display the student's data
    st.displayInfo();

    // ❌ Error: 'name' is protected within this context
    // cout << st.name; // This will not work

    return 0;
}
