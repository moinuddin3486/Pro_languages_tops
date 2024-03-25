// #include <stdio.h>
// void myfunc();
// int y=10;
// int main()
// {
//    myfunc();
//    printf("\n Globle variable y=%d",y);
//    y=50; // value changing in globle varia.. value change thai sake chhe
//    myfunc();

// }
// void myfunc()
// {
//     int x=20;
//     printf("\n local variable x=%d",x);
//     printf("\n globle variable y=%d",y);
// }
#include <stdio.h>
void suhana(int,int);
int main()
{
    suhana(30,50);
}
void suhana(int m,int x)
{
    printf("The sum of %d and %d=%d",m,x,m*m*x*x);
}
