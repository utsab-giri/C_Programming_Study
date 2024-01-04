//Write a C program to print all natural numbers from 1 to n. – using while loop...
#include<stdio.h>
int main(){
    printf("Enter the value :");
    int a,i;
    scanf("%d",&a);
    i=1;
    while(i<=a){
                printf("%d\n",i);
                i++;
                }
    return 0;
    }
