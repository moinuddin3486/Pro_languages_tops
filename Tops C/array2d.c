#include <stdio.h>
int main()
{
    int a[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}}, b[2][2], c[3][3], i, j;
    b[0][0] = 45;
    b[0][1] = 33;
    b[1][0] = 56;
    b[1][1] = 90;

    printf("\n Enter c matrix :");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            scanf("%d", &c[i][j]);
        }
    }
    printf("_______Matrix A_______\n");

    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %d", a[i][j]);
        }
        printf("\n");
    }

    printf("_______Matrix B_______\n");
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            printf(" %d", b[i][j]);
        }
        printf("\n");
    }

    printf("_______Matrix c_______\n");
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf(" %d", c[i][j]);
        }
        printf("\n");
    }
}
