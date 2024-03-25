// // static array
// #include <stdio.h>
// int main()
// {

//     int arra[5]={1,2,3,4,5};
//     printf("%d\n",arra[0]++);
//     printf("%d",arra[0]);

// }
#include <stdio.h>
int main()
{
    int arr[3][3], i, m;
    printf("Enter your number :\n");
    for (i = 0; i < 3; i++)
    {
        for (m = 0; m < 3; m++)
        {
            printf(" [%d][%d]=", i, m);
            scanf("%d", &arr[i][m]);
        }
    }
    for (i = 0; i < 3; i++)
    {
        for (m = 0; m < 3; m++)
        {
            printf("%d", arr[i][m]);
        }
        printf("\n");
        
    }
}