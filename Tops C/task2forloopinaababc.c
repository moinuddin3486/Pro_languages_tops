#include <stdio.h>
int main()
{
    int i,j;
    // char count;
    char count;
    for(i=1;i<=5;i++)
    {
        count='A';
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            {
                printf("%c",count);
                count++;
                
                
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
}