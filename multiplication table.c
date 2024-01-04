// Multiplication Table...
#include<stdio.h>
int main()
{
	printf("Enter the value of muliplication table that you want :");
	int val,i=1;
	int result;
	scanf("%d",&val);
	while(i<=10){
		result=val*i;
		printf("%d * %d= %d \n",val,i,result);
		i++;
	}
	
}
