/*a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/
#include<stdio.h>
int main(){
    float a,sc,p,s;
    printf("Enter your electricity bill :");
    scanf("%f",&a);
    if(a<=50){
        p=(a*0.5);
        sc=(a*0.2);
        s=p+sc+a;
        printf("Your total electricity bill is:%f",s);
    }
    else if((a>50)&&(a<=100)){
        p=(a*0.75);
        sc=(a*0.2);
        s=p+sc+a;
        printf("Your total electricity bill is:%f",s);
    }
    else if((a>100)&&(a<=250)){
        p=(a*1.20);
        sc=(a*0.2);
        s=p+sc+a;
        printf("Your total electricity bill is:%f",s);
    }
    else if(a>250){
        p=(a*1.50);
        sc=(a*0.2);
        s=p+sc+a;
        printf("Your total electricity bill is:%f",s);
    }
    else
    printf("pls! Enter a proper value");
    
    return 0;
}
