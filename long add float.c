#include<stdio.h>
int main()
{
	int a;
	printf("Enter long int value = ");
	scanf("%ld",&a);
	
	float b,c;
	printf("Enter float value = ");
	scanf("%f",&b);
	
	printf("%ld",a);
	printf("%f",b);
	c=a+b;
	printf("%f",c);
	
	return 0;
}
