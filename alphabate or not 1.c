// A c program to check wheather a charecter is a alphabate or not.Clue:ASCII...
#include<stdio.h>
int main()
{
	char ch;
	printf("Enter the value of ch :");
	scanf("%c",&ch);
	if((ch>='A'&&ch<='z')||(ch>='a'&&ch<='z'))
	{
		printf("%c is a alphabate.");
	}
	else
	{
		printf("%ch is not a alphabate.");
	}
	return 0;
}
