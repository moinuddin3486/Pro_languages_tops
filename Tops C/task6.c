#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter value of A:");
    scanf("%d",&a);
    printf("Enter value of B:");
    scanf("%d",&b);
    printf("Enter value of C:");
    scanf("%d",&c);
    if(a>b && a>c)
    {
        printf("A is big!!!");
    }
    else if(b>c && b>a)  
    {
        printf("B is biggest!!!");
    }
    else if(c>a && c>b)
    {
        printf("C is biggest!!!");
    }
    else
    {
        printf("All is biggest!!");
    }
    
    
    
}
