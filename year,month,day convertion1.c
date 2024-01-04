/* A program to covert few days into year,month,day....*/
#include<stdio.h>
int main()
{
	int y,m,day;
	printf("Enter days for convert :");
	scanf("%d",&day);
	
	y=day/365;
	y=day%365;
	
	m=day/30;
	m=day%30;
	
	Printf("The days convertion in year and month..\n Calculating year is %d \n Calculating month is %d",y,m);
	return 1;
}
