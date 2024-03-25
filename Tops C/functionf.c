/*
with with
int function_name(arguments){
return value;
}
void main()
{
    int variable;
    printf;
}*/
#include <stdio.h>
int fun(int,int);
void main()
{
    int num1,num2,ans;
    printf("Enter your value :");
    scanf("%d%d",&num1,&num2);
    ans=fun(num1,num2);
    printf("This is your total : %d",ans);


}
int fun(int num,int num1)
{
    return num*num1;
}