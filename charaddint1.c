#include<stdio.h>
int main(){
	printf("Enter a char : ");
	char a;
	scanf("%c",&a);
	printf("Enter a int : ");
	int b;
	scanf("%d",&b);
	scanf("%c%d",&a,&b);
	printf("you entered %c%d");
	return 0;
	
}
