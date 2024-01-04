#include<stdio.h>
#include<conio.h>
int main(){
    printf("Enter the value of multiplication table that you want :");
    int val,i=1;
    int result;
    scanf("%d",&val);
    while(i<11){
                result=val*i;
                printf("%d * %d = %d \n",val,i,result);
                i++;
                }
    getch();
    return 0;
}
