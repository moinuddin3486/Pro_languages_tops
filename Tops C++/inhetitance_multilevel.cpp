// multilevel inheritance
#include <iostream>
using namespace std;
class student{
    protected:
    int rollno,sub_mark;
    char name[30];
    public:
    void get_data()
    {
        cout<<"\n rollno :";
        cin>>rollno;
        cout<<"\n sub_marks:";
        cin>>sub_mark;
        cout<<"\nname:";
        cin>>name;
    }
};
class sport:public student
{
    protected:
    int sport_marks;
    char sport_name[30];
    public:
    void get_sp_details()
    {
        cout<<"\nEnter sport name:";
        cin>>sport_name;
        cout<<"\nEnter your sport marks:";
        cin>>sport_marks;


    }
};
class result:public sport{
    public:

    void print()
    {
        cout<<"\n \tStudent name:"<<name;
        cout<<"\n\tstudent rollno:"<<rollno;
        cout<<"\n\tsport name:"<<sport_name;
        cout<<"\n\tstudent total marks:"<<sub_mark+sport_marks;
    }
};
int main()
{
    result moin;
    moin.get_data();
    moin.get_sp_details();
    moin.print();
}
