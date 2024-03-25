// stuctture and union
#include <stdio.h>
#include <string.h>
struct student
{
    int rollnum;
    char name[10];
    float per;
}s4,s5;    
int main()
{
    struct student s1,s2,s3;
    s1.rollnum=1;
    strcpy(s1.name,"moinudin");
    s1.per =90.0;

    s2.rollnum=2;
    strcpy(s2.name,"sahnavaz");
    s2.per=99.99;

    printf("---------student 1---------");
    printf("\n \t roll no = %d",s1.rollnum);
    printf("\n \t name = %s",s1.name);
    printf("\n \t percentage = %f",s1.per);
}



// // }
// #include <stdio.h>
// int main()
// {
//     int m,n,j=0,p=1,total,q=0,w=0;
//     int k=0;
//     for(m=1;m<=6;m++)
//     {
//         p++;
//            for(n=2;n<=p;m++)       
//            {
              
//               if(n%2==0)
//               {
//                 q=m/n;
//                 k-=q;
//               }
//               else
//               {
//                 w=m/n;
//                 k+=w;
//               }
//            }
//     }
//     printf("%d",k);
// }
