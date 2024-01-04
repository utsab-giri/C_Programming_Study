#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter integer value = ");
	scanf("%d",&a);
	
	char d;
	printf("Enter float value = ");
	scanf("%c",&d);
	
	printf("%d",a);
	printf("%c",d);
	b=a+d;
	printf("%d",d);
	
	return 0;
}
