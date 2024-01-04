#include<stdio.h>
int main()
{
	int num;
	printf("Enter a four digit number : ");
	scanf("%d",&num);
	
	int r1=num % 10;
    int r2=num/10;
	int r21=r2 % 10;
	int r3=num/100;
	int r31=r3 %10;
	int r4=num/1000;
	int r41=r4 % 10;

	int sum;
	sum=((r1*1000)+(r21*100)+(r31*10)+r41);
	printf("The reverse number is :%d",sum);
	return 0;
}
