#include <stdio.h>
int main()
{
    int m,j;
    for(m=1;m<=5;m++)
    {
        for(j=1;j<=5;j++)
        {
            if (j==m)
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
     for(m=1;m<=5;m++)
    {
        for(j=1;j<=5;j++)
        {
            if (j==6-m)
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
// #include <stdio.h>
// int main()
// {
//     int i,j;
//     for (i=1;i<=5;i++)
//     {
//         for(j=5;j>=i;j--) //  j =5 i=1
//         {
//             printf("*");

//         }
//         printf("\n");
//     }
// }
// #include <stdio.h>
// int main()
// {
//     int k,m;
//     for(k=1;k<=5;k++)
//     {
//         for(m=1;m<=5;m++)
//         {
//            if (m>=k)     
//            printf("*");
//            else
//            {
//             printf(" ");
//            }

//         }
//         printf("\n");
//     }
// }
