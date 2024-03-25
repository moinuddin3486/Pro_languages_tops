/*



user will input 10 numbers
you have to check that numbers are div by 2 5 10
show them in different arrays
total of that three arrays
count the numbers
show that array*/
#include <stdio.h>
int main()
{
    int arr[10], i, num2[10], num5[10], num10[10], k = 0, l = 0, m = 0, total=0;
    for (i = 0; i < 10; i++)
    {
        printf("Enter your number :");
        scanf("%d", &arr[i]);
        if (arr[i] % 2 == 0)
        {
            num2[k] = arr[i];
            k++;
            total += arr[i];
        }
        if (arr[i] % 5 == 0)
        {
            num5[l] = arr[i];
            l++;
            total += arr[i];
        }
        if (arr[i] % 10 == 0)
        {
            num10[m] = arr[i];
            m++;
            total += arr[i]; 
        }
    }
  
  
    for (i = 0; i < 10; i++)
    {
        printf("\n%d\t", arr[i]);
    }
    printf("\n\n devided by 2 value is : ");
    for (i = 0; i < k; i++)
    {
        printf(" %d\t", num2[i]);
    }
    printf("\n devided by 5 value is : ");
    for (i = 0; i < l; i++)
    {
        printf(" %d\t", num5[i]);
    }
    printf("\n devided by 10 value is : ");

    for (i = 0; i < m; i++)
    {
        printf(" %d\t", num10[i]);
    }
    printf("\nThis is your total of abov array =%d", total);
    
    printf("\nThis is your count of devide by 2 numbers : %d ",k);
    printf("\nThis is your count of devide by 5 numbers : %d ",l);
    printf("\nThis is your count of devide by 10 numbers : %d ",m);
    
    printf("\nThis is your total of all number count is :%d",k+l+m);
}