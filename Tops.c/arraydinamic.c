// #include <stdio.h> // array dinamic means user je array banave ne tene dinamic array kahevay
// int main()
// {
//     int i;
//     int arr[5];
//     for(i=0;i<5;i++)
//     {
//         printf("Enter your number here :");
//         scanf("%d",&arr[i]);
//     }
//     for(i=0;i<5;i++)
//     {
//         printf("%d\n",arr[i]);
//     }
// }
// Find character value from ascii
// C program to calculate the following series 
#include <stdio.h>
int main()
{
    double i, n,sum=0;
    n=10;
    for(i=1;i<=n;i++)
    {
        if ((int)i%2==1)
            sum+=i/(i+1);
        else
            sum-=i/(i+1);
    }
    printf("Sum: %lf",sum);
    return 0;
}