#include<stdio.h>
int main()
{
	int i,num1,num2;
	printf("Enter first limt :");
	scanf("%d",&num1);
	printf("Enter last limit :");
	scanf("%d",&num2);
	i=num1;
	while(i<num2){
		printf("%d\n",i);
		i--;
	}
	return 0;
}
