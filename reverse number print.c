#include<stdio.h>
int main()
{
	int num;
	printf("Enter a four digit number : ");
	scanf("%d",&num);
	
	int r1=num % 10;
    int r2=num/10;
	int r2=r2 % 10;
	int r3=num/100;
	int r3=r3 %10;
	int r4=num/1000;
	int r4=r4 % 10;

	int sum;
	sum=((r1*1000)+(r2*100)+(r3*10)+r4);
	printf("The reverse number is :%d",sum);
 
return 0;
}
