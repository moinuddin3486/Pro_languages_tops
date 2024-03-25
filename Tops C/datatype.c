#include <stdio.h>
/*

you have to use only alfa in starting you cant use numbers
you can use number in ending of variable
you can't use white space you can use as you whitespace
you can't use any keyword as variable g
*/
int main()
{
    int num=5;  // %d     4bites
    float numf=5.55;  // %f      4 bites
    double numd=22.22;  // %lf    8 biteds
    char name='m';     //%c       1 bites
    char name1[50]="moinuddin";  //%s
    printf("%d\n",num);                   
    printf("%.2f\n",numf);
    printf("%.2lf\n",numd); 
    printf("%c\n",name);
    printf("%s\n",name1);


}

