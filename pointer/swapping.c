#include<stdio.h>
void swap(int *a,int *b){
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
int main(){
    int a,b;
    printf("Enter two numbers :");
    scanf("%d%d",&a,&b);
    swap(&a,&b);
    printf("After swap numbers are :%d and %d",a,b);
    return 0;
}