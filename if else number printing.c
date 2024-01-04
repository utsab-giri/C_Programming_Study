#include<stdio.h>
int main(){
	printf("Enter a number below 100 :");
	int a;
	scanf("%d",&a);
	if(a<80){
		printf("Your entered number is below of 80");
		if(a>50){
			printf("Your entered number is above of 50");
			
		}
	}
	else{
		printf("Your entered number is above of 80");
	}
	return 0;
}
