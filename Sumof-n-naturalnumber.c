//Write a C program to find sum of all even numbers between 1 to n...
#include<stdio.h>
int main(){
    printf("Enter the value of'n' :");
    int i,a,sum=0;
    scanf("%d",&a);
    i=1;
    while(i<=a){
       if(i%2==0){
            sum=sum+i;
        }
        i++;
    }
    printf("The sum of 'n' even natural number is:%d",sum);
    return 0;
}