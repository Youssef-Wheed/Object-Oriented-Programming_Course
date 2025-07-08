// friend class
#include <iostream>
using namespace std;

class student1
{

private:
    int mark;
    string name;

public:
    student1(string name, int mark)
    {
        this->mark = mark;
        this->name = name;
    }

    void print()
    {
        cout << "\nyour name is " << name << "||" << "your mark is " << mark << endl;
    }

    // friend class
    friend class student2;
};

class student2
{
private:
    int mark;
    string name;

public:
    student2(string name)
    {
        this->name = name;
    }

    void print()
    {
        cout << "\nyour name is " << name << "||" << "your mark is " << mark << endl;
    }

    void setMark(student1 ob)
    {
        mark = ob.mark;
    }
};

int main()
{
    student1 ob1("Ahmed", 100);
    student2 ob2("Ali");
    ob2.setMark(ob1);

    ob2.print();
}