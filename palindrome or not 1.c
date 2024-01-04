/* A program to check a 3 digit number is Palindrome or not... */
#include<stdio.h>
int main()
{
	int num,i1,i2,i3;
	printf("Enter the number to check :");
	scanf("%d",num);
	i1=num%10;
	i3=num/10;
	i2=num%10;
	i3=num/10;
	int rev=(i1*100)+(i2*10)+i3;
	
	if(rev==num)
	printf("Your entered number is a palindrome.");
	else
	printf("Your entered number isn't a palindrome.");
	
	return 0;
}
