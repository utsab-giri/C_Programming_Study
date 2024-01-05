#include<stdio.h>
int main(){
    int a;
    a=10;
    int *p=&a;
    printf("p=%d\n",p);
    int *q=&a;
    printf("address of a is %d\n",q);
    printf("address of a is %d\n",&q);
    printf("address of a is %d\n",&a);
}