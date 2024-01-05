#include<stdio.h>
void swaping(int x,int y);

int main(){
    int a=4,b=5;
    swaping(a,b);
    return 0;
    }
    void swaping(int x,int y){
        x=x+y;
        y=x-y;
        x=x-y;
        printf("a=%d;b=%d",x,y);

    }