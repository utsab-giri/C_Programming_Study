#include<stdio.h>
void swap(int x,int y);

int main(){
    int a=4,b=5;
    swap(a,b);
    return 0;
}
void swap(int x,int y){
    int z;
    z=x;
    x=y;
    y=z;
    printf("a=%d;b=%d",x,y);
}