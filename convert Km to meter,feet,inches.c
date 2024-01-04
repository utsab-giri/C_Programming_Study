/*A Program to convert the kilo meter value to meters,feet,inches.....*/
#include<stdio.h>
int main(){
	float a;
	print("Enter a kilo meter value to change : ",a);
	scanf("%f",&a);
	
	float b,c,d;
	b=(a*1000);
	c=(a*3280.84);
	d=(a*39370.08);
	
	printf("The meter value is :%f ",b);
	printf("The feet value is :%f ",c);
	printf("The inches value is :%f ",d);
	return 0;
}
