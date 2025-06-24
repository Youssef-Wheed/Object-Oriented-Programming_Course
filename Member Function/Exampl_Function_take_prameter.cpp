#include <iostream>
using namespace std;

//  Define the class
class company
{
public:
    int id;
    string name;
    float salary;

    //  Member function with parameters
    void save(int id_c, string name_c, float salary_c)
    {
        id = id_c;
        name = name_c;
        salary = salary_c;
    }

    // display function to show the company's info
    void displayInfo()
    {
        cout << "Company ID: " << id << endl;
        cout << "Company Name: " << name << endl;
        cout << "Company Salary: " << salary << endl;
    }
};
int main()
{
    //  Create a company object
    company c1;

    //  Call save with arguments
    c1.save(101, "Tech Innovations", 75000.50);

    //  Display the data
    c1.displayInfo();

    return 0;
}