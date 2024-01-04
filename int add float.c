#include<stdio.h>
int main()
{
	int a;
	printf("Enter integer value = ");
	scanf("%d",&a);
	
	float b,c;
	printf("Enter float value = ");
	scanf("%f",&b);
	
	printf("%d",a);
	printf("%f",b);
	c=a+b;
	printf("%f",c);
	
	return 0;
}
