//date 18/12/23
/*
sum of two with argument without return value */
#include <stdio.h>
void sumoftwo(int a,int b);
void printmyvalue(int a,float b,float c);
int main()
{
    int d;
    float e,f;
    sumoftwo(10,20);  // ama variable declare karya vagar direct value api sakay
    printf("\n------------");
    sumoftwo(50,50);
    printf("\n enter integer");
    scanf("%d",&d);
    printf("\n enter float value:");
    scanf("%f",&e);
    printf("\n Enter float value :");
    scanf("%f",&f);

    printmyvalue(d,e,f);



}
void sumoftwo(int a,int b)
{
    printf("\n sum of %d and %d is %d",a,b,a+b);
}
void printmyvalue(int a,float b,float c)
{
    printf("\n %d%f%f",a,b,c);
}
// 