#include <iostream>
using namespace std;

class Student
{
private:
    string name;
    int age;
    int mark;

public:
    Student()
    {
        cout << "--- Student Info ---\n";
        cout << "enter your name : ";
        cin >> name;
        cout << "enter your age : ";
        cin >> age;
        cout << "enter your mark : ";
        cin >> mark;
        cout << "-----------------------\n";
    }

    friend void calc_average(Student ob[20]);
};

void calc_average(Student ob[20])
{
    int sum = 0;
    for (int i = 0; i < 20; i++)
    {
        sum = ob[i].mark;
    }

    cout <<"avarage of all students "<<sum/20<<endl;
}

int main()
{
    Student ob[3];
    for (int i = 0; i < 20; i++)
    {
        ob[i];
    }
    calc_average(ob);
}
