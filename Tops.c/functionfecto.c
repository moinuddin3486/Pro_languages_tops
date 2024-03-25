#include <stdio.h>
int fact(int n);
int main()
{
    printf("Factorial= %d",fact(4));
}
int fact(int n)
{
    int f=1;
    if(n==0)
    {
        return 1;
    }
    else
    {
        f=n*fact(n-1);
       //n=n*fact(n-1);
        
        return f;
    }
}