#include <iostream>
using namespace std;
class A{
    
    public:
    A()
    {
        cout<<"\n constroctor";

    }
    ~A()
    {
        cout<<"\n Destructor";
    }
};
int main()
{
    char name[30];
    int rollno;
    A obj1,obj2;

    cout<<"\nEnter your name :";cin>>name;
    cout<<"\nEnter your roll number ";cin>>rollno;
}
