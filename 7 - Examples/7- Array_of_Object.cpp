#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;
    int mark;

public:
    void setValues()
    {
        cout << "--- Student Info ---\n";
        cout << "enter your name : ";
        cin >> name;
        cout << "\nenter your age : ";
        cin >> age;
        cout << "\nenter your mark : ";
        cin >> mark;
        cout << "-----------------------\n";
    }
};

int main()
{
    // array of object
    Student ob[4];
    for (int i = 0; i < 4; i++)
    {
        ob[i].setValues();
    }
}