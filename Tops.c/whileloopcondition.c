#include <stdio.h>
#include <string.h>
int main()
{
    int m=0;
    char s[20];

    printf("Enter your response in yes or no  :");
    scanf("%s",s);

    while(m<=7 &&   strcmp(s,"yes")==0 )
    {
        printf("\n%d",m);
        m++;
    }
    printf("\nDo you want to print again Yes or No :");
    scanf("%s",&s);
   
    while(m<10 &&   strcmp(s,"yes")==0 )
    {
        printf("\n%d",m);
        m++;
    }

    printf("\nTHANKS FOR PRINT AGAIN!!");

}