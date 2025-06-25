#include <iostream>
#include <cmath>
using namespace std;

// Define a class named Student
class Student
{
private:
    string name;
    int mark;

public:
    // default constructor
    Student()
    {
        // Initialize the attributes with default values
        // This constructor allows creating a Student object without any specific values
        cout << "Enter Your Name : " << endl;
        cin >> name;
        cout << "Enter Your Mark : " << endl;
        cin >> mark;
    }

    // constructor with parameters
    Student(string name, int mark)
    {
        // Initialize the attributes with the provided values
        // This constructor allows creating a Student object with specific values
        this->name = name;
        this->mark = mark;
    }

    // friend function to access private members
    //  three Student objects are passed to the function
    //  and it calculates the sum of their marks
    friend void sum(Student obj1, Student obj2, Student obj3);

    // check marks for students
    //  This function can be used to check the marks of students
    void checkMarks(Student obj1, Student obj2, Student obj3)
    {
        if (obj1.mark > obj2.mark && obj1.mark > obj3.mark)
        {
            cout << obj1.name << " congratulation you are the first and your mark is : " << obj1.mark << endl;
            if (obj2.mark > obj3.mark)
            {
                cout << obj2.name << " congratulation you are the second and your mark is : " << obj2.mark << endl;
            }

            cout << obj3.name << " congratulation you are the thred and your mark is : " << obj3.mark << endl;
        }

        else if (obj2.mark > obj1.mark && obj2.mark > obj3.mark)
        {
            cout << obj2.name << " congratulation you are the first and your mark is : " << obj2.mark << endl;
            if (obj1.mark > obj3.mark)
            {
                cout << obj1.name << " congratulation you are the second and your mark is : " << obj1.mark << endl;
            }

            cout << obj3.name << " congratulation you are the thred and your mark is : " << obj3.mark << endl;
        }
        else if (obj3.mark > obj1.mark && obj3.mark > obj2.mark)
        {
            cout << obj3.name << " congratulation you are the first and your mark is : " << obj3.mark << endl;
            if (obj2.mark > obj1.mark)
            {
                cout << obj2.name << " congratulation you are the second and your mark is : " << obj2.mark << endl;
            }
            cout << obj1.name << " congratulation you are the thred and your mark is : " << obj1.mark << endl;
        }
    }
};
// Function to calculate the sum of marks of three Student objects
void sum(Student obj1, Student obj2, Student obj3)
{
    int totalSum = obj1.mark + obj2.mark + obj3.mark;
    cout << "Total Marks of Students: " << totalSum << endl;
}

int main()
{
    Student ob1("Ahmed", 50);
    Student ob2("Ali", 60);
    Student ob3("nour", 100);

    // call friend function
    sum(ob1, ob2, ob3);
    ob1.checkMarks(ob1, ob2, ob3);
}