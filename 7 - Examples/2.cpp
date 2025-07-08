#include <iostream>
using namespace std;

class Workers
{
private:
    string name;
    float salary;

public:
    Workers(string name, float salary)
    {
        this->name = name;
        this->salary = salary;
    }

    void displayInfo()
    {
        cout << "name: " << name << " || Salary : " << salary << endl;
        cout << "====================================\n";
    }

    friend void avg_salary(Workers ob1, Workers ob2, Workers ob3);
};
void avg_salary(Workers ob1, Workers ob2, Workers ob3)
{
    float avg_salary = (ob1.salary + ob2.salary + ob3.salary) / 3.0f;
    cout << "Average Salaries = " << avg_salary << "\n";
}

int main()
{
    Workers ob1("Ahmed", 2500);
    Workers ob2("Ali", 5000);
    Workers ob3("sameh", 6500);

    ob1.displayInfo();
    ob2.displayInfo();
    ob3.displayInfo();

    avg_salary(ob1, ob2, ob3);
}