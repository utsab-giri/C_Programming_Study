#include<stdio.h>
int main()
{
	int a;
	printf("Enter a integer = ");
	scanf("%d",&a);
	
	float b,c;
	printf("Enter a float value = ");
	scanf("%f",&b);
	
	printf("%d",a);
	printf("%f",b);
	c=a+b;
	printf("%f",c);
	
	return 0;
}
