//Tempareture Convert Celcius To Farenhite.....
#include<stdio.h>
int main()
{
	float a;
	printf("Enter a value of celcius scale : ",a);
	scanf("%f",&a);
	
	float b;
	b=((9*a-160)/5);
	printf("The value in farenhite is : %f",b);
	scanf("%f,&b");
	
	return 0;
}
