#include <iostream>
using namespace std;
class suhana{
    public:
    int a,b;
    void getdata()
    {
        cout<<"\n a=";
        cin>>a;
        cout<<"\nb=";
        cin>>b;
    };
    void printdata()
    {
        cout<<"\na="<<a;
        cout<<"\nb="<<b;
    }
    suhana operator-()
    {
        a=-a;
        b=-b;

    }

};
int main()
{
    suhana m1;
    m1.getdata();
    // m1.operator-(); a rite pan call karisakay
    -m1;
    m1.printdata();
    

}