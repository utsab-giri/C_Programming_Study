/* Entered number is prime or not...*/
#include<stdio.h>
int main()
{
	printf("Enter a number to check :");
	int num,counter=0;
	scanf("%d",&num);
	int i=2;
	while(num>i){
		if((num%i)==0){
			counter++;
		}
		i++;
	}
	if(counter==0){
		printf("This is a prime number.");
	}
	else
	printf("This is not a prime number.");
	
	return 0;
}
