//Write a C program to print Fibonacci series up to n terms...
#include<stdio.h>
int main(){
    printf("Enter the last limit :");
    int n1=0,n2=1,i,sum,num;
    scanf("%d",&num);
    printf("%d\n%d",n1,n2);
    i=2;
    while(i<num){
        sum=n1+n2;
        printf("\n%d",sum);
        n1=n2;
        n2=sum;
        i++;
    }
    return 0;
}