#include <iostream>
using namespace std;

class Student
{

private:
    string name;
    int age, grade, id;

public:
    Student(string name, int age, int grade, int id)
    {
        this->name = name;
        this->age = age;
        this->grade = grade;
        this->id = id;
    }
    // friend class
    friend class University;
};

class University
{
public:
    void print(Student ob)
    {
        cout << "\n--- Student Info ---\n";
        cout << "Your name  | ==> " << "[ " << ob.name << " ]" << endl;
        cout << "Your age   | ==> " << "[ " << ob.age << " ]" << endl;
        cout << "Your grad  | ==> " << "[ " << ob.grade << " ]" << endl;
        cout << "Your id    | ==> " << "[ " << ob.id << " ]" << endl;
        cout << "--------------------------------------\n";
    }
};

int main()
{
    Student ob1("Ahmed", 22, 3.5, 98754);
    University ob2;
    ob2.print(ob1);
}