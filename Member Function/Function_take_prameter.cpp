#include <iostream>
using namespace std;

//  Define the class
class Student {
public:
    string name;
    int age;

    //  Member function with parameters
    void setInfo(string studentName, int studentAge) {
        name = studentName;
        age = studentAge;
    }

    //  Another function to display the student's info
    void displayInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

int main() {
    //  Create a student object
    Student s1;

    //  Call setInfo with arguments
    s1.setInfo("Youssef", 22);

    //  Display the data
    s1.displayInfo();

    return 0;
}