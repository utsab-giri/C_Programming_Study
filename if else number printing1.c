#include<stdio.h>
int main(){
	printf("Enter a number below 100 :\n");
	int a;
	scanf("%d",&a);
	if(a<80){
		printf("Your entered number is below of 80\n");
		if(a>50){
			printf("Your entered number is above of 50\n");
			
		}
	}
	else{
		printf("Your entered number is above of 80");
	}
	return 0;
}
