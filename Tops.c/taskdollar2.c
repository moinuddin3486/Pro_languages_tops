#include <stdio.h>
int main()
{
    int m,j;
    for(m=0;m<=5;m++)
    {
        for(j=0;j<=5;j++)
        {
            if (m==j)
            {
                printf("$");
            }
            else
            {
                printf("*");
            }
            
        }
        printf("\n");
    }
}