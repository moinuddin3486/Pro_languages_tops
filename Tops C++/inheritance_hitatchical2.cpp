#include<iostream>
using namespace std;
class side{
    protected:
    int l;
    public:
    void set_value(int a)
    {
        l=a;

    }
};
class square:public side{
    public:
    int cal_square()
    {
        return l*l;
    }
};
class cube:public side{
    public:
    int cal_cube()
    {
        return l*l*l;
        
    }

};
int main()
{
    square s1;
    s1.set_value(10);
    cout<<"\nsquare="<<s1.cal_square();
    cube c1;
    c1.set_value(10);
    cout<<"\ncube="<<c1.cal_cube();
    

}
