#include <iostream>
using namespace std;

class Rectangle
{
private:
    int x;
    int y;

public:
    Rectangle(int x, int y)
    {
        this->x = x;
        this->y = y;
    }

    void print();
    friend void find(Rectangle ob1, Rectangle ob2);
};

void Rectangle ::print()
{
    cout << "High = " << x << endl;
    cout << "width = " << y << endl;
}

void find(Rectangle ob1, Rectangle ob2)
{
    int area_ob1 = ob1.x * ob1.y;
    int area_ob2 = ob2.x * ob2.y;

    if (area_ob1 > area_ob2)
        cout << "Area of object 1 is th00000e biggest\n";
    else if (area_ob1 < area_ob2)
        cout << "Area of object 2 is the biggest\n";
    else if (area_ob1 == area_ob2)
        cout << "Area of object 1 is Equal object 1\n";
}

int main()
{
    Rectangle ob1(5, 5);
    Rectangle ob2(4, 4);

    ob1.print();
    ob2.print();

    find(ob1, ob2);
}