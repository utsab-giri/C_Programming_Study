#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
	printf("Enter a number :");
	scanf("%d",&a);
	if(a%2!=0){
		printf("Wired");
	}
	else if(1>=a&&a<=6){
		printf("Not wired");
		}
		else if(7>=a&&a<=21){
		printf("Wired");
		}
		else if(a>21){
		printf("Not Wired");
		}
	}
	getch();
	return 0;
}
