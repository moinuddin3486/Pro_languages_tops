#include <stdio.h>
int main()
{
    char name[50];
    int i;
    printf("Enter your name :");
    gets(name);
    puts(name);
    for(i=0;name[i]!='\0';i++);
    printf("The size of string is=%d",i);
    

}