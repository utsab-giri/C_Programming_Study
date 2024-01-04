/*1
2  3
4  5  6
7  8  9  10
11 12 13 14 15*///...
#include<stdio.h>
int main(){
    int i,j,n;
    i=1;j=1;        //i=row;j=coloumn.
    printf("Enter the number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}