//Write a C program to print all odd number between 1 to 100...
#include<stdio.h>
int main(){
    printf("The odd numbers between 1 to 100 are:\n");
    int i;
    i=1;

    while(i<=100){
        if(i%2!=0){
            printf("%d\n",i);
        }
        i++;
    }
return 0;
}