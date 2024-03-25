#include <iostream>
using namespace std;
class calculetor{
    private:
    int a,b;
    public:
    void getdata(int x,int y)
    {
        a=x;
        b=y;
    }
    int sum()
    {
        return a+b;
    }
};
int main()
{
    int p,q;
    calculetor c1;
    cout<<endl<<"Enter first value :";
    cin>>p;
    cout<<endl<<"Enter second value ";
    cin>>q;

    c1.getdata(p,q);
    cout<<"\n sum of two :"<< c1.sum();
}
