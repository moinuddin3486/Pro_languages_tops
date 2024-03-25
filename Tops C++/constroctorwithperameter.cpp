#include<iostream>
using namespace std;
class A
{
    public:
    int a,b;
    A()
    {
        cout<<"\n simple constroctor";
    }
    A(int x,int y)
    {
        a=x;
        b=y;
    }
    void printdata()
    {
        cout<<"\n a= "<<a<<"\n b= "<<b;
    }

};
int main()
{
    A obj(10,20);
    obj.printdata();
    A obj1(50,50);
    obj1.printdata();

    A obj3(40,50);
    obj.printdata();

    A obj4;
    



}