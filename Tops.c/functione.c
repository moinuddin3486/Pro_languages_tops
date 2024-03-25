// without argument with return tipe
/*
int function_name()
{
    return
}
void main()
{
    int ans=finction_name();
}
*/
//jyare argument  pass kariye tyare function na  kouns ma lakhvanu 
#include <stdio.h>
int sum();
void main()
{
    int ans=sum();
    printf("This is your total :%d",ans);

}
int sum()
{
    int num1,num2;
    printf("Enter your value here :");
    scanf("%d %d",&num1,&num2);
    return num1+num2;
}