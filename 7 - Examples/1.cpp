#include <iostream>
using namespace std;

class Car
{
private:
    string name;
    int price;

public:
    Car(string name, int price)
    {
        this->price = price;
        this->name = name;
    }
    void print_price();
    friend void inc_price(Car ob1);
};

void Car::print_price()
{
    cout << "\nthis car " << name << " This price is : " << price << endl;
}

void inc_price(Car ob1)
{
    int sum = ob1.price + 1000;
    cout << "Then increase the car price by 1000 ==> " << sum << endl;
}

int main()
{
    Car ob("BMW", 2005);
    ob.print_price();
    inc_price(ob);
}