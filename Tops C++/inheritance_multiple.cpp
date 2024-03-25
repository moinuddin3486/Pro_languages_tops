// // multipale inheritance
// #include <iostream>
// using namespace std;
// class student{
//     protected:
//     int rollno,sub_mark;
//     char name[30];
//     public:
//     void get_data()
//     {
//         cout<<"\n rollno :";
//         cin>>rollno;
//         cout<<"\n sub_marks:";
//         cin>>sub_mark;
//         cout<<"\nname:";
//         cin>>name;
//     }
// };
// class sport
// {
//     protected:
//     int sport_marks;
//     char sport_name[30];
//     public:
//     void get_sp_details()
//     {
//         cout<<"\nEnter sport name:";
//         cin>>sport_name;
//         cout<<"\nEnter your sport marks:";
//         cin>>sport_marks;


//     }
// };
// class result:public student,public sport{
//     public:

//     void print()
//     {
//         cout<<"\n \tStudent name:"<<name;
//         cout<<"\n\tstudent rollno:"<<rollno;
//         cout<<"\n\tsport name:"<<sport_name;
//         cout<<"\n\t student total marks:"<<sub_mark+sport_marks;
//     }
// };
// int main()
// {
//     result moin;
//     moin.get_data();
//     moin.get_sp_details();
//     moin.print();
// }
#include<iostream>
using namespace std;
class student{
    protected:
    char name[40],subject[6];
    int marks;
    public:
    void get()
    {
        cout<<"\nEnter your name:";
        cin>>name;
        cout<<"\nEnter your subject:";
        cin>>subject;
        cout<<"\nEnter your subject marks :";
        cin>>marks;

    }

};
class sport:public student{
    protected:
    int smarks;
    char sport_name[30];
    public:
    void sget()
    {
        cout<<"\nEnter your sport name:";
        cin>>sport_name;
        cout<<"\nEnter your sport marks:";
        cin>>smarks;
    }
};
class result:public sport{
    public:
    void print()
    {
    cout<<"\n----------------student---------";
    cout<<"\nstudent name:"<<name;
    cout<<"\nstudent subject:"<<subject;
    cout<<"\nsubject marks:"<<marks;
    cout<<"\n-------------------sport----------";
    cout<<"\nsport name:"<<sport_name;
    cout<<"\nsport marks :"<<smarks;
    cout<<"\nTotal of sport marks and student marks:"<<smarks+marks;


}

};
int main()
{
    result r1;
    r1.get();
    r1.sget();
    r1.print();
}
