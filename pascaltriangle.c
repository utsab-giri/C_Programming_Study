//Write a C program to print pascal triangle up to n rows using loop...
#include<stdio.h>
int main(){
    printf("Enter the value :");
    int n,i,j;
    scanf("%d",&j);
    i=1;
    n=1;
    while(n<=j){
        while(i<=n){
            printf("*\n");
            i++;
        }
        n++;
    }
    return 0;
}