#include<iostream>
using namespace std;
class A{
    public:
    int a;
    A(int x)
    {
        cout<<"\n class A constroctor";
        a=x;

    }
};
class B:public A{
    public:
    int b;
    B(int y,int z):A(z)
    {
        cout<<"\n class B constroctor";
        b=y;

    }
    void print()
    {
        cout<<"\n a="<<a<<"\n b="<<b;
    }
};
int main()
{
    B objB(10,20);
    objB.print();
}
// #include<iostream>
// using namespace std;
// class A{
//     public:
//     int a;
//     A(int x)
//     {
//         cout<<"\n class A constroctor";
//         a=x;

//     }
// };
// class B:public A{
//     public:
//     int b;
//     B(int z):A(z) // single A no constroctor khali B ma call thase
//     {
//         cout<<"\n class B constroctor";
//         // b=y;

//     }
//     void print()
//     {
//         cout<<"\n a="<<a;
//     }
// };
// int main()
// {
//     B objB(20);
//     objB.print();
// }
