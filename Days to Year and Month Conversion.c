/* Days to Year and Month Conversion... */
#include<stdio.h>
int main()
{
	int y,m,d;
	printf("Enter total days :");
	scanf("%d",&d);
	
	y=d/365;
	d=d%365;
	
	m=d/30;
	d=d%30;
	
	printf("Total year is :%d",y);
	printf("Total month is :%d",m);
	return 0;
}

