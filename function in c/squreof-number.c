#include<stdio.h>
void squre(int a);

int main(){
    printf("Enter the number :");
    int a;
    scanf("%d",&a);
    squre(a);
    return 0;
}

void squre(int a){
    int y;
    y=a*a;
    printf("Square of the number is :%d",y);
}