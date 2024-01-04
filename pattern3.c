/*1
22
333
4444
55555*///...
#include<stdio.h>
int main(){
    int i,j,n;      //i=row;jcoloumn..
    i=1;
    j=1;
    printf("Enter the number :");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",i);
        }
        printf("\n");
    }
    return 0;

}