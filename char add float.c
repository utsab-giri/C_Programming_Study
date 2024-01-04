#include<stdio.h>
int main()
{
	char a;
	printf("Enter a charecter = ");
	scanf("%c",&a);
	
	float b,d;
	printf("Enter float value = ");
	scanf("%f",&b);
	
	printf("%c",a);
	printf("%f",b);
	d=a+b;
	printf("%f",d);
	
	return 0;
}
