// A program to convert the kilo meter Value to meters,feet,inches.
#include<stdio.h>
int main()
{
	float k;
	printf("Enter the value in Km : ",k);
	scanf("%f",&k);
	
	float m,f,i;
	m=(k*1000);
	f=(k*3280.84);
	i=(k*39370.08);
	
	printf("The converting meter value is :%f",m);
	printf("The converting feet is :%f",f);
	printf("The converting inches is :%f",i);
	
	return 0;
	
}
