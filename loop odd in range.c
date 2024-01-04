#include<stdio.h>
#include<conio.h>
int main(){
    int i,j,num;
    printf("Enter the first value: ");
    scanf("%d",&i);
    printf("Enter the last value: ");
    scanf("%d",&j);
    
    while(i<=j){
                  if(num%2 == 1){
                           printf("%d",num);
                           i++;
                           }
                  }
    getch();
    return 0;
    }
