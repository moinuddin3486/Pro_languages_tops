#include <stdio.h>
int main()
{
    int i,j;
    char count='A';
    for(i=0;i<5;i++)
    {
        count='A';
    for(j=0;j<5;j++)
    {
        if (j<=i ) // j i  thi n
        {
            printf("%c",count);
            count++;
        }
        else
        {
            printf("");
        }
    }
    printf("\n");
    }
}