/*a C program to input electricity unit charges and calculate total electricity bill according to the given condition:
For first 50 units Rs. 0.50/unit
For next 100 units Rs. 0.75/unit
For next 100 units Rs. 1.20/unit
For unit above 250 Rs. 1.50/unit
An additional surcharge of 20% is added to the bill*/
#include<stdio.h>
int main(){
    float a,sc,p,s,sc1,p1,s1,sc2,p2,s2,sc3,p3,s3;
    printf("Enter your electricity bill :");
    scanf("%f",&a);
    if(a<=50){
        p=(a*0.5);
        sc=(a*0.2);
        s=p+sc;
        printf("Your total electricity bill is:%f",s);
    }
    else if((a>50)&&(a<=100)){
        p1=(a*0.75);
        sc1=(a*0.2);
        s1=p1+sc1;
        printf("Your total electricity bill is:%f",s1);
    }
    else if((a>100)&&(a<=250)){
        p2=(a*1.20);
        sc2=(a*0.2);
        s2=p2+sc2;
        printf("Your total electricity bill is:%f",s2);
    }
    else if(a>250){
        p3=(a*1.50);
        sc3=(a*0.2);
        s3=p3+sc3;
        printf("Your total electricity bill is:%f",s3);
    }
    else
    printf("pls! Enter a proper value");
    
    return 0;
}
