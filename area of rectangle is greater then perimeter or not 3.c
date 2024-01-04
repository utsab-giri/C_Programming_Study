// A program to check if area of rectangle is grater then perimeter or not...
#include<stdio.h>
int main()
{
	int s1,s2,a,p;
	printf("Enter two sides of a rectangle :");
	scanf("%d%d",&s1,&s2);
	a=s1*s2;
	p=2*(s1+s2);
	printf("The area of the rectangle is :%d\n",a);
	printf("The perimeter of the rectangle is :%d\n",p);
	if(a>p)
	printf("Area of the rectangle is grater then it's perimeter.\n");
	else
	printf("Perimeter of the rectangle is grater then it's area.");
	
	return 0;
}
