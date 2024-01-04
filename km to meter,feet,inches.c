//A Program to convert the kilo meter value to meters,feet,inches.....
#include<stdio.h>
int main()
{
	float a;
	print("Enter a kilo meter value to change : ",a);
	scanf("%f",&a);
	
	float b;
	b=(a*1000);
	printf("The meter value is :%f ",b);
	
	float c;
	c=(a*3280.84);
	printf("The feet value is :%f ",c);
	
	float d;
	d=(a*39370.08);
	printf("The inches value is :%f ",d);
	
	return 0;
}
