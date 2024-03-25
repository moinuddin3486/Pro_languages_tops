#include <stdio.h>
int main()
{
    int arr[10], i, even, m = 0, n = 0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {

            m++;
        }
        else
        {

            n++;
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("\t%d", arr[i]);
    }
    printf("\nThis is your even =%d", m);
    printf("\n This is your odd =%d", n);
}
