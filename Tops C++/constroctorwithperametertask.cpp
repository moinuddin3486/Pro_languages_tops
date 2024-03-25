#include <iostream>
using namespace std;
class moin{
    public:
    int a;
    moin(int x)
    {
        a=x;
        

    }
    int squ()
    {
        return a*a;
    }
    int qub()
    {
        return a*a*a;
    }
    




};
int main()
{
    
    int m;
    cout<<"Enter your m :";
    cin>>m;
    moin maths(m);
    cout<<"\nThe square = "<<maths.squ();
    cout<<"\nThe qube = "<<maths.qub();
    

}