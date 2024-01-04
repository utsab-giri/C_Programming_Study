//Write a C program to enter a number and print its reverse....
#include<stdio.h>
int main(){
    printf("Enter a number for reverse :");
    int n,sum=0;
    scanf("%d",&n);
    while(n!=0){
        int num=n%10;
        sum=sum*10+num;
        n=n/10;
    }
    printf("The reverse number is :%d\n",sum);
}