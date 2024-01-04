/*a farenhite value given by user and take the output in celcius scale */
#include<stdio.h>
int main()
{
	float b;
	printf("Enter the farenhite tempareture (32-212) = ",b);
	scanf("%f",&b);
	
	float a;
	a=(5*b-160)/9;
	printf("The celcius tempareture %f",a);
	scanf("%f",&a);
	
	return 0;
}
