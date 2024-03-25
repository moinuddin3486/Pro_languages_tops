#include <iostream>
using namespace std;
class A{
    protected:  // pretected means khali child class tena data vaprisake int main nahi
    int a,b;
    public:
    void get_data(int c,int u)
    {
        a=c;
        b=u;

    }

};
class B:public A
{
    public:
    void put_data()
    {
        cout<<"\na="<<a;
        cout<<"\nb="<<b;
    }
};
int main()
{
    B obj;
    obj.get_data(10,20);
    obj.put_data();
}

