/* A program to find the youngest person between 3 persons..*/
#include<stdio.h>
int main()
{
	int a1,a2,a3;
	printf("Enter the age of 3 person :");
	scanf("%d%d%d",&a1,&a2,&a3);
	if((a>b)||(b>c)){
		printf("%d is the youngest person of them.",a3);
	}
	else if((a>b)||(b<c)){
		printf("%d is the youngest person of them.",a2);
	}
	else if((a<b)||(b<c)){
		printf("%d is the youngest person of them.",a1);
	}
	return 0;
}
