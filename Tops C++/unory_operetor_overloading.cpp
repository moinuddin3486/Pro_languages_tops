// operator overloadnig
#include <iostream>
using namespace std;
class Distance{
    public:
    int feet,inches;
    // Distance()
    // {
    //     feet=0;
    //     inches=0;
    // }
    Distance(int x,int y)
    {
        feet=x;
        inches=y;

    }
    void printdata()
    {
        cout<<"\nfeet:"<<feet;
        cout<<"\ninches:"<<inches;
    }
    Distance operator-()
    {
        feet=-feet;
        inches=-inches;
        return Distance(feet,inches);
    }

};
int main()
{
    Distance d1(10,20);
    d1.printdata();
    -d1;
    d1.printdata();
}
