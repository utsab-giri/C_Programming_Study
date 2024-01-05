#include<stdio.h>
int main(){
    int a;
    printf("Enter the year :");
    scanf("%d",&a);
    int x=leapyear();
    return 0;
}
int leapyear(){

    if(((a%100==0)&&(a%400==0))||((a%100!=0)&&(a%4==0))){
        printf("It is a leap year");
    }
    else{
        printf("It is not leap year");
    }
    return 0;
}