#include<stdio.h>
#include<conio.h> 
int main() 
{ 
    int i,j; 
    printf("Enter the frist number :"); 
    scanf("%d",&i); 
    printf("Enter the last number :"); 
    scanf("%d",&j); 
     
    while(i<=j){ 
        if(i%2==0){ 
  		printf("The number %d is even \n");
        i++; 
 		}
	}
	getch();
	return 0;
}
