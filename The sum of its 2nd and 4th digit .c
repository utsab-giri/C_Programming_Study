// Write a Program to find the sum of its 2nd and 4th digit ***
#include<stdio.h>
int main()
{
	int num;
	printf("Enter a four digit number : ");
	scanf("%d",&num);
	
	int r1=num % 10;
	printf("It=%d",r1);
	
	num=num % 100;
	int r2=num % 10;
	printf("It=%d",r2);
	
	int sum=r1+r2;
	printf("The sum of its 2nd and 4th digit is :%d",sum);
	return 0;
}
