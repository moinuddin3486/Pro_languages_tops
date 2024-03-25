// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char m[20]="momin";
//     char m1[20]="momin";
//     char m3[60];
//     //printf("%d",strlen(m1));
//     //puts(stcmp(m,m1));
//     // strcpy(m3,strcat(m,m1));
//     // puts(m3);
//   printf("%d",strcmp(m,m1));

    
// }
#include <stdio.h>
#include <string.h>
int main()
{
  int m;
  char s[20];
  printf("Enter your response in yes or no :");
  scanf("%s",&s);
  if (strcmp(s,"yes")==0)
  {
    for(m=0;m<=10;m++)
    {
      printf("%d",m);
    }

  }
  else
  {
    printf("Your programm is stoped");

  }
}