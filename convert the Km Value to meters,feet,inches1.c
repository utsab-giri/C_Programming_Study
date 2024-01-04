//A Program to convert the Km Value to meters,feet,inches.....
//Input given by user...
#include<stdio.h>
int main()
{
	float k;
	printf("Enter a Km value : ");
	scanf("%k",&k);
	
	float m,f,i;
	m=(1000*k);
	printf("The meters value is :%f",m);
	scanf("%f",&m);
	
	f=(3280.84*k);
	printf("The feet value is :%f",f);
	scanf("%f",&f);
	
	i=(39370.08*k);
	printf("The inches value is :%f",i);
	scanf("%f",&i);
	
	return 0;
}
