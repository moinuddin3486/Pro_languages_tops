#include <iostream>
using namespace std;
class A
{
public:
    void funA()
    {
        cout << "\n A class";
    }
};
 class B:virtual public A
{
public:
    void funB()
    {
        cout << "\n B class";
    }
};
class C:virtual public A{
    public:
    void funC()
    {
        cout<<"\n C class";

    }
};
class D:public B,public C{
    public:
    void funD()
    {
        cout<<"\n D class";
    }
};
int main()

{
    D s1;
    s1.funA();
}
