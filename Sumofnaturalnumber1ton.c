//Write a C program to find sum of all natural numbers between 1 to n...
#include<stdio.h>
int main(){
    printf("Enter the value of'n' :");
    int i,a,sum=0;
    scanf("%d",&a);
    i=1;
    while(i<=a){
        sum=sum+i;
        i++;
    }
    printf("The sum of 'n' natural number is:%d",sum);
    return 0;
}