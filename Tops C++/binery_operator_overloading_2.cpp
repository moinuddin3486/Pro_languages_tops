#include <iostream>
using namespace std;
class complax
{
public:
    int x, y;
    void get_value()
    {
        cout << "\nEnter x:";
        cin >> x;
        cout << "\nEnter y:";
        cin >> y;
    }
    complax operator+(complax obj)
    {
        complax t1;
        t1.x = x + obj.x;
        t1.y = y + obj.y;
        return t1;
    }
    void print_value()
    {
        cout << "\nx=" << x << "\n y=" << y;
    }
};
int main()
{
    complax a1, a2, r1;
    a1.get_value();
    a2.get_value();
    r1 = a1 + a2;
    r1.print_value();
}
