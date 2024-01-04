// Factorial value of a number...
#include<stdio.h>
#include<conio.h>
int main()
{
	int num,i=1,result=1;
	printf("Enter the number to find the Value :");
	scanf("%d",&num);
	while(i<=num){
		result=result*i;
		i++;
	}
	printf("Factorial is %d",result);
	getch();
	return 0;
}
