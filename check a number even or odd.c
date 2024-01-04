/* A program to check a number even or odd ...*/
#include<stdio.h>
int main(){
	int a,b;
	printf("Enter a number to check even or odd :");
	scanf("%d",&a);
	b=a%2;
	if(b==1){
		printf("Your entered number is odd");
	}
	else{
		printf("Your entered number is even");
	}
	
	return 0;
}
