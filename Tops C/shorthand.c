/*
=
shorthand oprator
+= -= *= /=
*/
#include <stdio.h>
int main()
{
    int num,num1;
    printf("Enter your number:");
    scanf("%d",&num);
    printf("Enter your number:");
    scanf("%d",&num1);
    num+=num1;
    
    // meaning num=num+num1;
    printf("%d",num);

}