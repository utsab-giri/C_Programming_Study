#include<stdio.h>
#include<conio.h>
int main(){
	int basic_salary,gross_salary;
    float da,hra;
    
    printf("Enter your basic salary: ");
    scanf("%d",&basic_salary);
    
    da=(basic_salary*40)/100;
    hra=(basic_salary*20)/100;
    gross_salary=da+hra+basic_salary;
    
    printf("Your gross salary is:%d",gross_salary);
    
    return 0;
}
