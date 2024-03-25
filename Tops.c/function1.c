#include <stdio.h>
// without argument without return value
void myvalue();
int main()
{
    int a;
    printf("\n hello all....");
    printf("\nGood morning");

    myvalue();
    myvalue();
    printf("\n.....bye bye---");
    myvalue();
    return 0;

}
void myvalue()
{ int m;
printf("\nEnter any number :");
scanf("%d",&m);
printf("This is your number :%d",m);

 }
