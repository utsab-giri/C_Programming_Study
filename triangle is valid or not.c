/* A program to check the triangle is valid or not */
#include<stdio.h>
int main()
{
	float a1,a2,a3,sum;
	printf("Enter the angles of a triangle :");
	scanf("%f%f%f",&a1,&a2,&a3);
	sum=a1+a2+a3;
	if(sum==180)
		printf("It is a valid triangle");
	else
		printf("Opps!! It is not a valid triangle.");
	
	return 0;
}
