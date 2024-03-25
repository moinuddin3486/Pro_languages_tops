// hirarchical inheritamce;
#include <iostream>
using namespace std;
class vehicle
{
    protected:
    int speed,gear,avg;
    char name[30],model[30];
    public:
    void print()
    {
        cout<<"\n name:"<<name;
        cout<<"\n model"<<model;
        cout<<"\n speed:"<<speed;
        cout<<"\ngear:"<<gear;
        cout<<"\navg:"<<avg;

    }
};
class car:public vehicle
{
    public:
    void car_details()
    {
        cout<<"\nEnter your car name:";
        cin>>name;
        cout<<"\nEnter your car model";
        cin>>model;
        cout<<"\nspeed gear avg";
        cin>>speed>>gear>>avg;

    }
};
class bike:public vehicle
{public:
    void bike_details()
    {
        cout<<"\nEnter your bike name:";
        cin>>name;
        cout<<"\nEnter your bike model";
        cin>>model;
        cout<<"\nspeed gear avg";
        cin>>speed>>gear>>avg;

    }
};
int main()
{ car c1;
c1.car_details();

bike b1;
b1.bike_details();

cout<<"\n------------CAR------------";
c1.print();
cout<<"\n-------------BIKE------------";
b1.print();

}
