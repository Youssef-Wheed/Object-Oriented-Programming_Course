#include <iostream>
using namespace std;
// Class Cal
// int n1, n2
// default constructor to set the values by cin
// parameterized constructor to set the values by programmer
// 4 functions
// sum() to add n1, n2
// divide() to divide n1, n2 and the result must be in decimal
// mod() to modulus n1, n2
// mult() to multiply n1, n2
// two objects in int main
class Cal
{
private:
    int n1, n2;

public:
    // Default constructor to set the values by cin
    Cal()
    {
        cout << "\nEnter two numbers: ";
        cin >> n1 >> n2;
    }

    // Parameterized constructor to set the values by programmer
    Cal(int a, int b)
    {
        n1 = a;
        n2 = b;
    }

    // Function to add n1 and n2
    int sum()
    {
        return n1 + n2;
    }

    // Function to divide n1 by n2 (result in decimal)
    double divide()
    {
        return static_cast<double>(n1) / n2;
    }

    // Function to modulus n1 by n2
    int mod()
    {
        return n1 % n2;
    }

    // Function to multiply n1 and n2
    int mult()
    {
        return n1 * n2;
    }
};
int main()
{
    // Creating an object using the default constructor
    Cal calc1;
    cout << "Sum: " << calc1.sum() << endl;
    cout << "Division: " << calc1.divide() << endl;
    cout << "Modulus: " << calc1.mod() << endl;
    cout << "Multiplication: " << calc1.mult() << endl;

    // Creating an object using the parameterized constructor
    Cal calc2(10, 5);
    cout << "--------------------------" << endl;
    cout << "Sum: " << calc2.sum() << endl;
    cout << "Division: " << calc2.divide() << endl;
    cout << "Modulus: " << calc2.mod() << endl;
    cout << "Multiplication: " << calc2.mult() << endl;

    return 0;
}