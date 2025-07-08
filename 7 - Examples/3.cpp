#include <iostream>
using namespace std;
class Engineer; // importan note
class Teacher
{
private:
    string name;
    int salary;

public:
    Teacher(string name, int salary)
    {
        this->name = name;
        this->salary = salary;
    }
    void displayInfo()
    {
        cout << "name: " << name << " || Salary : " << salary << endl;
        cout << "====================================\n";
    }
    friend void add(Teacher ob1, Engineer ob2);
};

class Engineer
{
private:
    string name;
    int salary;

public:
    Engineer(string name, int salary)
    {
        this->name = name;
        this->salary = salary;
    }
    void displayInfo()
    {
        cout << "name: " << name << " || Salary : " << salary << endl;
        cout << "====================================\n";
    }
    friend void add(Teacher ob1, Engineer ob2);
};

void add(Teacher ob1, Engineer ob2)
{
    if ((ob1.name == "Ali" || ob1.name == "ali") && (ob2.name == "Ahmed" || ob2.name == "ahmed"))
    {
        cout << "add 1000 to Teacher :" << ob1.salary + 1000 << endl;
        cout << "add 1000 to Engineer :" << ob2.salary + 1000 << endl;
    }

    else
    {
        cout << "Not add 1000 because name must be  ==> Teacher is *Ali* and Engineer is *Ahmed*" << endl;
    }
}

int main()
{
    Teacher ob1("omer", 1000);
    ob1.displayInfo();

    Engineer ob2("Ahmed", 2000);
    ob2.displayInfo();

    add(ob1, ob2);
}