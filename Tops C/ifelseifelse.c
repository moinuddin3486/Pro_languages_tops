/*

if elseif else
syntex;
if(condition){
if(condition){
    statement;}
    elseif(condition){
        statement;
    }
    else{
        falsestatment;
    }
    }
    else{
        false statement;
    }
    amam badhi condition tapasya pachhi compiler badhi condition khoti
    hase toj else printt karse
*/
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);
    
    if(marks>90 && marks<100)
    {
        printf("A grade !!");
    }
    else if(marks>70 && marks<=90)
    {
        printf("B Grade!!!");
    }
    else if(marks>60 && marks<=70)
    {
        printf("C Grade !!!");
    }
    else if (marks>50 && marks<=60)
    {
        printf("Pass  !!!");

    }
    else if (marks>33 && marks<=50)
    {
        printf("Just Pass");
    }
    else if (marks>0 && marks<=33)
    {
        printf("fail !!!");
    }
    
    else
    {
    printf("Invalid input");
    }
}
