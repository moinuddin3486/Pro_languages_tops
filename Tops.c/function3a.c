// tua jate banaveli method more better chhe ana karta 
#include <stdio.h>
void maxvalue(int a,int b,int c);
int main()
{
    maxvalue(10,5,12);
}
void maxvalue(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
        {
            printf("%d is biggest",a);
        }
    }
    else if(b>c)
    {
        printf("%d is biggest",b);
    }
    else
    {
        printf("%d is biggest",c);
    }
}
