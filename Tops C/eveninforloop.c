#include <stdio.h>
int main()
{
    int i;
    for (i = 1; i <= 10; i++)
    {
        printf("%d\n", i);
        if (i % 2 == 0)



        {
            printf("*");

        }
        else
        {
            printf("%d\n", i);
        }
        
    }
}