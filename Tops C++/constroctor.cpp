#include <iostream>
using namespace std;
class A
{
    public:
    int a,b;
    A()
    {
        cout<<"\n Hello from constroctor\n";

    }
    void get_data()
    {
        cout<<"\na :";
        cin>>a;
        cout<<"\nb :";
        cin>>b;
    }
    void print_data()
    {
        cout<<"\n a="<<a<<"\n b="<<b;

    
    }

};
int main()
{
    A obj1,obj2,obj3;
    obj1.get_data();
    obj1.print_data();
}