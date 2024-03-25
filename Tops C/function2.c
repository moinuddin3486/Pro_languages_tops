
// with return type without argument
#include <stdio.h>
int myfun();  // kouns khali etle without argument 
int main()
{
    int m;
    m=myfun();
    printf("%d",m);
}
int myfun()
{
    int n;
    printf("Enter any value here :");
    scanf("%d",&n);
    return n;    //  n return kare chhe etle with return type
                 // ane je ne return karavvanu hey tene return karine lakhvu
}