#include <iostream>
using namespace std;

class YT {
public:
    string name;

    // This function prints the name of the object that called it
    // Because we used just `name` (no object used in printing)
    void print(YT ob) {
        cout << "print() says name is: " << name << endl;
        // Here, it prints the name of the object that called this function
    }

    // ✅ This function prints the name of the object passed as a parameter
    void set(YT ob1) {
        cout << "set() says name is: " << ob1.name << endl;
        // Here, it prints the name of the object that was passed to the function
    }
};

int main() {
    YT ob1;
    YT ob2;

    ob1.name = "I am so proud of you";
    ob2.name = "Keep going";

    //  print() → uses the object that calls the function
    ob2.print(ob1);  // will print ob2.name
    ob1.print(ob2);  // will print ob1.name

    //  set() → uses the object passed as a parameter
    ob2.set(ob1);    // will print ob1.name
    ob1.set(ob2);    // will print ob2.name

    return 0;
}
