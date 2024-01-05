#include<stdio.h>
void leapyear();
int main(){
    leapyear();
    return 0;
}
void leapyear(){
    int a;
    printf("Enter the year :");
    scanf("%d",&a);
    if(((a%100==0)&&(a%400==0))||((a%100!=0)&&(a%4==0))){
        printf("It is a leap year");
    }
    else{
        printf("It is not leap year");
    } 
}