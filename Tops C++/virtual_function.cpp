#include <iostream>
using namespace std;
class Car{
    public:
    virtual void print_myname()
    {
        cout<<"car";
    }
};
class Bike:public Car
{
    public:
    void print_myname()
    {
        cout<<"Bike";
    }
};
int main()
{
    Bike b1;
    b1.print_myname();
    // b1.Car::print_myname();
}