#include <iostream>
using namespace std;
class student
{
    protected:
    int rollno,m1,m2,m3;
    char name[50];
    public:
    void get_details()
    {
        cout<<"\nrollno :";
        cin>>rollno;
        cout<<"\n name :";
        cin>>name;
        cout<<"\n m1,m2,m3";
        cin>>m1>>m2>>m3;



    }

};
class result:public student{
    private:
    int total;
    public:
    int calculate()
    {
    return total=m1+m2+m3;
    }
    void printdata()
    {
        cout<<"\n name="<<name<<"\nrollno="<<rollno<<"\n total="<<calculate();
    }
};
int main()
{
    result r1;
    r1.get_details();
    r1.printdata();
}
