#include <stdio.h>
int main()
{
    int arr[10], i, m=0, even[10], odd[10], j=0, etotal=0, ototal=0;
    for (i = 0; i < 10; i++)
    {
        printf("Enter your number here :");
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < 10; i++)
    {
        printf("%d", arr[i]);
        if (arr[i] % 2 == 0)
        {
            even[j] = arr[i];
            etotal += arr[i];
            j++;
        }
        else
        {
            odd[m] = arr[i];
            ototal += arr[i];
            m++;
        }
    }
    printf("\nEven number is :");
    for (i = 0; i < j; i++)
    {
        printf("%d\t", even[i]);
    }
    printf("\nYour odd numbes is ");
    for (i = 0; i < m; i++)
    {
        printf("%d\t", odd[i]);
    }
    printf("\n even number total is : %d", etotal);
    printf("\n odd  number total is : %d", ototal);
    printf("\n even numbers is : %d",j);
    printf("\n odd number is :%d",m);
    
}