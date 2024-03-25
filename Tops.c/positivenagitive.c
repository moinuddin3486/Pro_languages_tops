#include <stdio.h>
int main()
{
    int number;
    printf("Enter your marks:");
    scanf("%d",&number);
    // true condition first write
    (number>0)?printf("positive"):printf("nagitive");

    return 0;

}