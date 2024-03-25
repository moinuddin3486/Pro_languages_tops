#include <stdio.h>
int main()
{
    int i;
    float a[5],b[5],c[5];
    printf("\nEnter value of A :");
    for(i=0;i<5;i++)
    {
        scanf("%f",&a[i]);
    }
    printf("\nEnter value of B :");
    for(i=0;i<5;i++)
    {
        scanf("%f",&b[i]);
    }
     for(i=0;i<5;i++)
    {
        c[i]=a[i]+b[i];
    }
    for(i=0;i<5;i++)
    {
        printf("\t %.2f",c[i]);
    }


}
