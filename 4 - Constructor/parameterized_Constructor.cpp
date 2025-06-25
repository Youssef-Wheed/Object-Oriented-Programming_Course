#include <iostream>
using namespace std;
// Defining a class named Student
class Student
{
public:
    string name;
    int age;
    // Default constructor
    Student()
    {
        name = "Unknown";
        age = 0;
        cout << "Default Constructor Called!\n"
             << endl;
    }

    // Parameterized constructor
    Student(string student_name, int student_age)
    {
        name = student_name;
        age = student_age;
        cout << "Parameterized Constructor Called!\n"
             << endl;
    }
    void displayInfo()
    {
        cout << "Student name : " << name << endl;
        cout << "Student age : " << age << endl;
        cout << "------------------------" << endl;
    }
};

int main()
{
    // Creating an instance of Student and initializing its attributes using the parameterized constructor
    Student student_1("Youssef", 22);
    // Displaying student details
    student_1.displayInfo();
    return 0;
}
