#include <stdio.h>
#include <string.h>
int main()
{
    char name[50],name2[50];
    int lenght,i;
    printf("\n Enter your string :");
    gets(name);
    lenght=strlen(name);
    printf("\n Lenght of string is %d ",lenght);
   // strcmp(name2,name);
    gets(name2);
    puts(name2);
    printf("\n \t compare = %d",strcmp(name,name2)); // ane variable ma store karine print karavi sakay
    strcat(name,name2);
    printf("\n concanate=  %s",name);


}
