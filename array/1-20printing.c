#include<stdio.h>
int main(){
    int a[20];
    int b=1;
    for(int i=0;i<20;i++){
        a[i]=b;
        b++;
    }
    for(int i=0;i<20;i++){
        printf("%d\n",a[i]);
    }
    return 0;
}