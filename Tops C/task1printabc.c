// #include <stdio.h>
// // a aski value is 64 

// int main()
// {
//     char  i,j;
//     char count=65;
//     for(i=65;i<69;i++)
// {
//     for(j=65;j<=i;j++)  
//     {
//         printf("%c",count);
//         count++;
        
//     }

//     printf("\n");
// }
// }
#include <stdio.h>
int main()
{
    int i,j;
    // char count;
    char coun='A';
    for(i=1;i<=5;i++)
    {
        
        for(j=1;j<=5;j++)
        {
            if(j<=i)
            {
                printf("%c",coun);
                coun++;
                
                
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
}