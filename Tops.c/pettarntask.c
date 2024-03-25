// #include <stdio.h>
// int main()
// {
//     int m,j;
//     for(m=1;m<=5;m++)
//     {
//         for(j=1;j<=5;j++)
//         {
//             if(j>=m)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
           
//         }
//          printf("\n");
//     }
//     for(m=1;m<=5;m++)
//     {
//         for(j=1;j<=5;j++)
//         {
//             if(j>=6-m)
//             {
//                 printf("*");
//             }
//             else
//             {
//                 printf(" ");
//             }
           
//         }
//          printf("\n");
//     }
    
// }
#include <stdio.h>
int main()
{
    int m,j;
    for(m=1;m<=5;m++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=m)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
           
        }
         printf("\n");
    }

for(m=1;m<=5;m++)
    {
        for(j=1;j<=5;j++)
        {
            if(j<=6-m)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
           
        }
         printf("\n");
    }
}

    