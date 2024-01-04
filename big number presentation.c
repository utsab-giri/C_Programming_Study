/* Find out the largest number between two number */
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the first number :");
	scanf("%d",&a);
	
	printf("Enter the second number :");
	scanf("%d",&b);
	
	if(a>b)
	{
		printf("It is the big number %d ",a);
	}
	printf("It is the big number %d ",b);
	return 0;
}
