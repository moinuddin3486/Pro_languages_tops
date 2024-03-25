#include<iostream>
using namespace std;
class student{
    public:
    //data member
    int rollno;
    float per;
    char name[50];

    // member function 
    void getdata()
    {
        cout<<"\n Enter student name:";
        cin>>name;
        cout<<"\n enter student rollnumber :";
        cin>>rollno;
        cout<<"\n Enter student percentage :";
        cin>>per;

    }
    void printdata()
    {
        cout<<"------------------------------";
        cout<<"\n roll no:"<<rollno<<"\n name:"<< name<<"\n percentage:"<<per<<endl;

    }
};
int main()
{
    student s1,s2,s3;
    s1.getdata();
    s1.printdata();

    s2.rollno=2;
    cout<<"\n enter s2 name :";
    cin>>s2.name;
    s2.per=80.0;

    s2.printdata();


}
