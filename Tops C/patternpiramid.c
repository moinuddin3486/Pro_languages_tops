 #include <stdio.h>
// // int main()
// // {
// //     int m,j;
// //     for(m=1;m<=5;m++)
// //     {
// //         for(j=1;j<=9;j++)
// //         {
// //             if(j>=6-m && j<=4+m)
// //             {
// //                 printf("*");
// //             }
// //             else
// //             {
// //                 printf(" ");
// //             }
// //         }
// //         printf("\n");
// //     }
// // }

   #include <stdio.h>
   int main() 
   {
    int m,h,k=0,y;
    printf("Enter your number :");
    scanf("%d",&m);
    y=m%10;
    while(m!=0)
    {
          h=m%10;
          
          m=m/10;
          
    }
    printf("total is  %d",h-y);
   }
// int main()
// {
//     int m,h,k=0;
//     printf("Enter your number :");
//     scanf("%d",&m);

//     while(m!=0)
//     {
//         h=m%10;
//         if(h>k)
//         {
//             k=h;
//         }
//         m=m/10;
//     }
//     printf("Biggest Digit is :%d",k);
// }
