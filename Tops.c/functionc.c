// // function with argument without return type
// void main()
// {
//     function_name(arguments);

// }
// datatype function_name(parameters)
// {
//     function body;
// }

#include <stdio.h>
void sum(int,int);
void main()
{
    int number,number2;
    printf("Enter your number :");
    scanf("%d%d",&number,&number2);
    sum(number,number2);
}
void sum(int num,int num2)
{
   printf("This is your number 1 %d and Number 2 %d and Total is %d",num,num2,num+num2);
}
