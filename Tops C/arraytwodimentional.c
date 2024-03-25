#include <stdio.h>
int main()
{
    int i, j, arr[3][3];
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("Enter your value [%d][%d]", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    printf("\nEnter your value \n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
}