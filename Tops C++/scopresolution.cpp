// #include <iostream>
// using namespace std;
// int x=50;
// class A{
//     public:
//     int a,b;
//     void myfun();
//     int sumoftwo();
    
// };
// // out side function defination
// void A::myfun()
// {
//     int x=20;
//     cout<<"\n scope resolutin orerator";

// }

// int A::sumoftwo()
// {
//     cout<<"\n Enter a and b =";
//     cin>>a;
//     cin>>b;
//     return a+b;
// }
// int main()
// {
//     int x=10;
//     A obj;
//     obj.myfun();
//     // cout<<obj.sumoftwo();
//     cout<<"\n local variable x="<<x;
//     cout<<"\n Globle variable x="<<::x;
// }
#include <iostream>
using namespace std;

class a{
    public:
    int e,r;
    a(int y,int t)
    {
        e=y;
        r=t;
    }
    int sum();
    


};

int a:: sum()
{
    return e+r;

    
}
int main()
{
    int w,e;
    
    cout<<"Enter w and e:";cin>>w>>e;
    a kaka(w,e);
    cout<<"The sum of two value ="<<kaka.sum();

    

}
