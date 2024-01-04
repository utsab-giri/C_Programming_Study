// Multiplication Table in Range...
#include<stdio.h>
int main()
{
	int n1,n2,i=1,result;
	printf("Enter the first and last value of muliplication table that you want :");
	scanf("%d%d",&n1,&n2);
	
	while(n1<=n2){
		while(i<=10){
		result=n1*i;
		printf("%d * %d= %d \n",n1,i,result);
		i++;
		}
		n1++;
	}
	return 0;
}
