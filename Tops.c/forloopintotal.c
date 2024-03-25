#include <stdio.h>
int main()
{
    int i,total;
    for(i=1;i<=20;i++)
    {
        printf("%d\n",i);
        if (i>0)
        {
            total+=i;  // total=total+i;  
        }
        else
        {
            printf("no");
        }
    }
    printf("\n This is your total %d",total);
}
