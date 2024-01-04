//Write a C program to print all natural numbers from n. to 1 – using while loop...
#include<stdio.h>
int main(){
    printf("Enter the value :");
    int a,i;
    scanf("%d",&a);
    i=1;
    while(a>=i){
                printf("%d\n",a);
                a--;
                }
    return 0;
    }
