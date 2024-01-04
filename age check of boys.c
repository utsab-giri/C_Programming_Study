/* A program to check the age of above 18 or not,only for boys... */
#include<stdio.h>
int main()
{
	int b,a;
	printf("If you are a boy press 0 otherwise press 1 :");
	scanf("%d",&b);
	if(b==0){
		printf("So,you are intarected here as a boy.\n");
		if(a>18){
			printf("You are a boy of above 18 years old\n");
		}
		if(a<18){
			printf("You are a boy of below 18 years old\n");
		}
		if(a==18){
			printf("you are 18 years old\n");
		}
	}
	else{
		printf("Oops !! You are a girl...\n");
	}
	printf("Thank you......")
}
