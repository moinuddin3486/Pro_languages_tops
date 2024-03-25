// with return type without return value 
#include <stdio.h>
int sumoftwo();
int main()
{
    int m;
    m=sumoftwo();
    printf("This is your tottal of :%d",m);
}
int sumoftwo()
{
    int a,b,c;
    printf("Enter two value here :");
    
    scanf("%d%d",&a,&b);
     return c=a+b;
}