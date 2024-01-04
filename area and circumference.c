//a program to calculate the area and circumference of a circle...
//take input the radius of circle...
#include<stdio.h>
int main()
{
	float r;
	printf("Enter the radius of a circule : ",r);
	scanf("%f",&r);
	
	float a,c;
	a=(3.142*r);
	c=((2*r)*3.142);
	
	printf("The area is :%f ",a);
	printf("The circumference is :%f ",c);
	
	return 0;
}
