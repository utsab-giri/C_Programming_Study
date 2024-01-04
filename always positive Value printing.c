/* A program to print always positive Value of number.`/*
 If input is positive so output is positive and If input is negative 
 then print positive value only...*/
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a any value :");
	scanf("%d",&a);
	if(a<0){
		printf("You entered a negative number.");
		b=(-1)*a;
		printf("So,your entering number's positive value is:%d",b);
	}
	else{
		printf("You entered a positive value.");
		printf("the value is :%d",a);
	}
	return 0;
}
