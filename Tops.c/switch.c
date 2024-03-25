/*
switch syntax:
switch (exp)
{
    case 1:
    printf(*)
    breack;
    default:
    printf();
    breack
}*/
#include <stdio.h>
int main()
{
    int days;
    printf("Enter your days");
    scanf("%d",&days);
    switch(days)
    {
        case 1:
        printf("Monday");
        break;

        case 2:
        printf("tuesday");
        break;

        case 3:
        printf("wednesday");
        break;

        case 4:
        printf("thuesday");
        break;

        case 5:
        printf("friday");
        break;

        case 6:
        printf("saturday");
        break;

        case 7:
        printf("sunday");
        break;
        default:
        printf("Invalid input");
    }



}