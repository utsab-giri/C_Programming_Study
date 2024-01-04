//A program to convert km to inches.....
#include<stdio.h>
int main()
{
	float a;
	printf("Enter a kilo meter value to change : ",a);
	scanf("%f",&a);
	
	int b;
	b=(a*39370.08);
	printf("The conversion meter value is :%f ",b);
	
	return 0;
	
}
