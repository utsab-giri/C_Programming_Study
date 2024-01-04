#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter integer value = ");
	scanf("%d",&a);
	
	float c;
	printf("Enter float value = ");
	scanf("%f",&c);
	
	printf("%d",a);
	printf("%f",c);
	b=a+c;
	printf("%f",b);
	
	return 0;
}
