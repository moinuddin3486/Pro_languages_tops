#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char a[3];
    
    while(1)
    {
        for(i=0;i<=5;i++)
        {
            printf("%d\n",i);
        }
        printf("Do you wan to printf again yes or no :");
        scanf("%s",&a);
        if (strcmp(a,"yes")==0 || strcmp(a,"YES")==0)
        {
            
        }
        else
        {
            printf("Your programm is stoped");
            break;
        }
    }
}
