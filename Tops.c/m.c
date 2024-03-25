#include <stdio.h>
#include <string.h>
int main()
{
    int m;
    char s[3];
    
    while(1)
    {
        for(m=0;m<2;m++)
        {
        printf("%d\n",m);
        }

        printf("Do you want to printf again yes or no :");
        scanf("%s",&s);
        if (strcmp(s,"yes")==0 || strcmp(s,"YES")==0)
        {
            continue;
        }
        else
        {
            printf("your programmm is stopped");
            break;
        }
    }

    
}
