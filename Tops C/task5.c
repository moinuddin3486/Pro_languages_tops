/*
vowels and consonants
a=1
e=2
i=3
o=4
u=5
*/
#include <stdio.h>
int main()
{
    int m;
    char a;
    printf("Enter your number");
    scanf("%d",&m);
    switch(m)
    {
    case 1:
    printf("A");
    
    break;

    case 2:
    printf("E");
    break;
    
    case 3:
    printf("I");
    break;

    case 4:
    printf("O");
    break;

    case 5:
    printf("U");
    break;

    default:
    printf("cosonants");
    break;
    }
}