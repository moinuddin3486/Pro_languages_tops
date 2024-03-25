#include <iostream>
using namespace std;
class A{

public:
int a,b;
A()
{
    cout<<"\n simple constroctor ";

}
A(int x,int y)
{
    a=x;
    b=y;
}
A(const A&old)
{
    a=old.a;
    b=old.b;

}
void print()
{
    cout<<"\n a="<<a;
    cout<<"\n b="<<b;



}
};
int main()
{
    A obj(10,20);
    A obj2(obj);
    obj2.print();
    
}
