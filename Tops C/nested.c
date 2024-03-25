/*
nested if 
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
    nested ma  upar if if be vakhat chhe ama ek if ma apeli condition
    sachi hase toj compiler agad no program run karse athava to
    ditect else print karse
*/
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks:");
    scanf("%d",&marks);
    if(marks >0 && marks <100)
    {
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
    else if (marks>0 && marks<=50)
    {
        printf("Just Pass");
    }
    }
    else
    {
    printf("Invalid input");
    }
}