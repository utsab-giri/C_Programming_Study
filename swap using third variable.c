//A Program to interchange the value of two variable.
//Input Given by user...
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the first number : \n",a);
	scanf("%d",&a);
	printf("Enter the second number : \n",b);
	scanf("%d",&b);
	a=b;
	b=c;
	c=a;
	
	printf("After interchange:the first number is :%d \n",a);
	printf("After interchange:the second number is :%d ",c);
	return 0;
}
