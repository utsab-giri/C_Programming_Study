#include<stdio.h>
int main(){
	int basic_salary,gross_salary;
    float da,hra;
    
    printf("Enter your basic salary: ");
    scanf("%d",&basic_salary);
    
    da=(basic_salary*0.4);
    hra=(basic_salary*0.2);
    gross_salary=da+hra+basic_salary;
    
    printf("Your gross salary is:%d",gross_salary);
    
    return 0;
}
