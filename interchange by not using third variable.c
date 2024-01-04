// A program to interchange the value of two variable.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the first number : ",a);
	scanf("%d",&a);
	
	printf("Enter the second number : ",b);
	scanf("%d",&b);
	
	a=b;
	b=a;
	
	printf("After interchange,first number is :%d",a);
	printf("After interchange,second number is :%d",b);
	
	return 0;
	
}
