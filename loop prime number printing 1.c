//C program to print all prime numbers in a user given range...
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter a range of number \n Enter first and last value:");
	scanf("%d%d",&a,&b);
		while(a<=b){
			if((a%2!=0)&&(a%3!=0)&&(a%5!=0)&&(a%7!=0)){
			printf("%d",a);
			a++;
			}
		}
	return 0;
}
