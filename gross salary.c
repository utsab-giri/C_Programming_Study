#include<stdio.h>
int main(){
    float da,hra,basic_salary,gross_salary;
    printf("Enter your basic salary: ");
    scanf("%f",&basic_salary);
    da=basic_salary*0.4;
    hra=basic_salary*0.2;
    gross_salary=da+hra+basic_salary;
    printf("Your gross salary is:%d",gross_salary);
    return 0;

}
