#include <stdio.h>
int main()
{
    int a[3][3], b[3][3], c[3][3], i, j;
    printf("Enter A array value :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter your value [%d][%d]", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter B array value :\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter your value [%d][%d]", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    printf("\n______Sum of two array_______ \n\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {

            printf("[%d][%d] = %d\n", i, j, c[i][j]);
        }
        
    }
}