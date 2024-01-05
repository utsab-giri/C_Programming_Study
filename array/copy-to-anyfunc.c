#include<stdio.h>
int main(){
    int a[5];
    a[0]=25;
    a[1]=30;
    a[2]=35;
    a[3]=40;
    a[4]=45;
    int *a2;
    a2=a;
    printf("%d\n",a);
    printf("%d\n",*a);
    printf("%d\n",a2[0]);
    a[0]=56;
    printf("%d\n",a2[0]);
    return 0;
}