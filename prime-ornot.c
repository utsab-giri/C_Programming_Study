//Write a C program to check whether a number is Prime number or not...
#include<stdio.h>
int main(){
    printf("Enter the Number to check :");
    int a,counter=0;
    scanf("%d",&a);
    int i=2;
    while(a>i){
        if((a%i)==0){
            counter++;
        }
        i++;
    }
    if(counter==0){
        printf("This is a prime number.");
    }
    else
    printf("This isn't a prime number.");

    return 0;

}