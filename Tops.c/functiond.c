#include<stdio.h>
#include<string.h>
void tabes(int);
void main(){
		int tables;
		char choice[3];
while(1){
			printf("Enetr your values you want to print : ");
		scanf("%d",&tables);
		tabes(tables);
		printf("Do you want to print another table ? yes or no ");
		scanf("%s",&choice);
		if(strcmp(choice,"Yes")==0||strcmp(choice,"yes")==0){
			
		}else{
			printf("Thanks for using my program");
			break;
		}
}
}
void tabes(int num){
	int i;
	for(i=1;i<=10;i++){
		printf("%d  %d = %d \n",num,i,num*i);
	}
}
