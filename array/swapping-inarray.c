#include<stdio.h>
int main(){
    int a[9];
    printf("Enter the numbers :");
    for(int i=0;i<9;i++){
        scanf("%d",&a[i]);
    }
    a[0]=a[0]+a[1];
    a[1]=a[0]-a[1];
    a[0]=a[0]-a[1];
    printf("After swapping :%d %d",a[0],a[1]);

    a[2]=a[2]+a[3];
    a[3]=a[2]-a[3];
    a[2]=a[2]-a[3];
    printf("After swapping :%d %d",a[2],a[3]);

    a[4]=a[4]+a[5];
    a[5]=a[4]-a[5];
    a[4]=a[4]-a[5];
    printf("After swapping :%d %d",a[4],a[5]);

    a[6]=a[6]+a[7];
    a[7]=a[6]-a[7];
    a[6]=a[6]-a[7];
    printf("After swapping :%d %d",a[6],a[7]);

    printf("Numbers are:%d%d%d%d%d%d%d%d%d",a[0],a[1],a[2],a[3],a[4],a[5],a[6],a[7],a[8]);

}