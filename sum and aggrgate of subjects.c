//A Program to Calulate the sum and aggergate of five subject of a student.
//Input given by user...
#include<stdio.h>
int main()
{
	float a,b,c,d,e;
	printf("Enter the first number : \n",a);
	scanf("%f",&a);
	printf("Enter the second number : \n",b);
	scanf("%f",&b);
	printf("Enter the third number : \n",c);
	scanf("%f",&c);
	printf("Enter the fourth number : \n",d);
	scanf("%f",&d);
	printf("Enter the fifth number : \n",e);
	scanf("%f",&e);
	
	int sum;
	sum=(a+b+c+d+e);
	printf("The aggrgate is :%f",sum);
	
	return 0;
}
