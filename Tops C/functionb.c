#include <stdio.h>
int display();
int main()
{
    display();
}
int  display()
{
    int i,j;
    printf("Enter where do you want to start :");
    scanf("%d",&j);

    
    for(i=j;i<=50;i++)
    {
        printf("%d\n",i);
    }
}