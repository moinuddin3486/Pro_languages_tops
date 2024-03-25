#include <iostream>
using namespace std;
class calculetor{
    int a,b;
    public:
    void getdata(int m,int n)
    {
        a=m;
        b=n;
    }
    int sum()
    {
        return a+b;
    }
    int  subtraction()
    {
        return a-b;
    }
    int multiplicatin()
    {
        return a*b;
    }
    int division()
    {
        return a/b;
    }

};
int main()
{
    calculetor c1;
    int o,p,choice;
    
    cout<<"\nEnter o value :";
    cin>>o;
    cout<<"\nEnter p value :";
    cin>>p;

    c1.getdata(o,p);

    cout<<"1- addition\n ";
    cout<<"2- subtraction\n";
    cout<<"3 - multiplication endl\n";
    cout<<"4- devision";
     cout<<endl;
   
    

    cout<<"Enter your choice :";
    cin>>choice;
    switch(choice)
    {
        case 1:
        
        
            cout<<"The sum ="<<c1.sum();
            break;

        
        case 2:
        
        
            cout<<"The suntraction ="<<c1.subtraction();
            break;

        
        case 3:
        
        
            cout<<"The multiplication ="<<c1.multiplicatin();
            break;

        
        case 4:
        
        
            cout<<"The division ="<<c1.division();
            break;

        
    }
}
// #include <iostream>
// using namespace std;
// class moin
// {
//     public:
//     int a,b,c,d,e,f;
//     moin()
//     {
//         cout<<"Enter value of A=";
//         cin>>a;
//         cout<<"Enter value of B=";
//         cin>>b;
//         getdata(a,b);   
//     }
//     void getdata(int c,int d)
//     {
//         e=c;
//         f=d;

//     }
//     void sum()
//     {
//         cout<<"The sum of a and b="<<e+f;
//     }




// };
// int main()
// {    
//     moin y;
//     y.sum();
    
// }