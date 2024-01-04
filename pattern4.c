/*5 4 3 2 1
4 3 2 1
3 2 1
2 1
1*///..
#include<stdio.h>
#include<conio.h>
int main(){
    printf("Enter the number :");
    int i,j ,n;     //i=row;j=coloumn..
    scanf("%d",&n);
    for(i=n;i>=1;i--){
        for(j=1;j>=i;j--){
            printf("%d",j);
        }
        printf("\n");
    }
    getch();
    return 0;

}