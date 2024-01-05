#include<stdio.h>
void leapyear(int x);
int main(){
    int a;
    printf("Enter the year :");
    scanf("%d",&a);
    leapyear(a);
    return 0;
}
void leapyear(int x){
    if(((x%100==0)&&(x%400==0))||((x%100!=0)&&(x%4==0))){
        printf("It is a leap year");
    }
    else{
        printf("It is not leap year");
    } 
}