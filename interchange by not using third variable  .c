// A program to interchange the value of two variable.
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the first number : \n",a);
	scanf("%d",&a);
	
	printf("Enter the second number : \n",b);
	scanf("%d",&b);
	
	a=b;
	b=a;
	
	printf("After interchange,first number is :%d \n",b);
	printf("\n After interchange,second number is :%d",a);
	
	return 0;
	
}
