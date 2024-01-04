//A Program to convert the Km Value to meters,feet,inches.....
//Input given by user...
#include<stdio.h>
int main()
{
	float k;
	printf("Enter a Km value : ");
	scanf("%k",&k);
	
	float m;
	m=(1000*k);
	printf("The meters value is : %f \n",m);
	scanf("%f",&m);
	
	float f;
	f=(3280.84*k);
	printf("The feet value is : %f \n",f);
	scanf("%f",&f);
	
	float i;
	i=(39370.08*k);
	printf("The inches value is : %f",i);
	
	return 0;
}
