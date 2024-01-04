//Write a C program to calculate factorial of a number...
#include<stdio.h>
int main(){
    printf("Enter the number :");
    int a;
    scanf("%d",&a);
    int p=1,i=1;
    while(i<=a){
        p=i*p;
        i++;
    }
    printf("Factorial of %d is:%d",a,p);
    return 0;
}