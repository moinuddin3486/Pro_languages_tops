// #include <stdio.h>
// int main()
// {
//     char name[50];
//     char name2[10] = {'m', 'o', 'i', 'n'};
//     printf("Enter your string :");
//     scanf("%s", &name);
//     printf("%s\n", name);
//     printf("%s", name2);
// }
#include <stdio.h>
int main()
{
    char name[50];
    printf("Enter your name here :");
    gets(name); // for input from user 
    puts(name); // for printf string
}