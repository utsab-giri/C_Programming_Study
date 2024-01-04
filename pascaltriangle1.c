#include<stdio.h>
int main (){
    int n,i,j;
    printf("\nEnter the value:");
    scanf("%d",&j);
    for(n=1;n<=j;n++){
        i=1;
        while(i<=n){
            printf("*");
            i++;
            }
        printf("\n");
    }
    return 0;
}