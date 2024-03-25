#include <stdio.h>
#include <string.h>
int main()
{ int place;
float ticket;
float total;
char str[4];
while(1)
{
    printf("1 Dholka to baval 1 full  50rs\n");
    printf("2 Dholka to sarkhej 1 full 80\n");
    printf("3 Dholka to vastrapur 1 full 120rs\n");
    printf("4 Dholka to gandhigram 1 full 190rs \n");

    printf("select your place   :");
    scanf("%d",&place);
    printf("How many ticket will you buy :");
    scanf("%f",&ticket);
    
    switch(place)
    {
        case 1 :
        total+=50*ticket;
        break;
        case 2 :
        total+=80*ticket;
        break;
        case 3 :
        total+=120*ticket;
        break;
        case 4 :
        total+=190*ticket;
        break;

    }
    printf("\nDo you want to enithing else ticket yes or no :");
    scanf("%s",&str);
    if (strcmp(str,"yes")==0)
    {
        
    }
    else
    {
        printf("THANKS FOR VISITING !!!!");
        break;
    }
}
           printf(" your total bii :%.2f",total);
           return 0;
}

