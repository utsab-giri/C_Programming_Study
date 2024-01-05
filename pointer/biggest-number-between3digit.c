#include<stdio.h>

int largest(int *x,int *y,int *z){
    if(*x>=*y && *x>=*z){
        printf("%d is biggest number.",*x);
    }
    else if(*y>=*x && *y>=*z){
        printf("%d is biggest number.",*y);
    }
    else if(*z>=*x && *z>=*y){
        printf("%d is biggest number.",*z);
    }
    return 0;
}

int main(){
    int a,b,c;
    printf("Enter the three numbers to check : ");
    scanf("%d%d%d",&a,&b,&c);
    largest(&a,&b,&c);
    return 0;
}