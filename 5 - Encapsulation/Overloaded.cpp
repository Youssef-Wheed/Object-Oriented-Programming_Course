#include <iostream>
using namespace std;
// Class to demonstrate method overloading
class School
{
private:
    string name;
    int level;
    int id;

public:
    // Method to add school details using the 1st method of encapsulation
    void add_school(string n, int l, int i)
    {
        name = n;
        level = l;
        id = i;
    }

    // Overloaded method to add school details with different parameters
    void add_school(string n, int l)
    {
        name = n;
        level = l;
        id = 0; // Default ID if not provided
    }

    // Method to display school details
    void display_school()
    {
        cout << "School Name: " << name << endl;
        cout << "Level: " << level << endl;
        cout << "ID: " << id << endl;
    }
};
int main()
{
    // Creating instances of School and demonstrating method overloading
    // This will call the first version of add_school
    School school_1;
    school_1.add_school("Greenwood High", 10, 12345);
    school_1.display_school();

    // Using the overloaded method of encapsulation
    // This will call the second version of add_school
    School school_2;
    school_2.add_school("Riverdale Academy", 12);
    school_2.display_school();

    return 0;
}
