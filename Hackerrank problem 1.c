#include<stdio.h>
int main()
{
	int a;
	printf("Enter The Number :");
	scanf("%d",&a);
	if(a%2!=0){
		printf("Wired");
	}
	else if((a>=1)&&(a<=6)){
		printf("Not Wired");
	}
	else if(a>=7&&a<=21){
		printf("Wired");
	}
	else if(a>21){
		printf("Not Wired");
	}
	
	return 0;
}
