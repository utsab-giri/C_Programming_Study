/* A program to check A year is leap year or not..*/
#include<stdio.h>
int main()
{
	int y,c,h,p;
	printf("Enter a year to check that the year is leap year or not:");
	scanf("%d",&y);
	c=y%100;
	p=y/4;
	if(c==0){
		h=y/400;
		if(h==0){
			printf("Your entered year is a Leap year.");
		}
		else
		printf("Your entered year isn't a Leap year.");
	}
	else if(p==0){
		printf("Your entered year is a Leap year.");
		}
		else
		printf("Your entered year isn't a Leap year.");
	
	return 0;
}
