#include<stdio.h> 
#include<conio.h> 
int main() 
{ 
 int basic_salary,gross_sal; 
 float da,hra; 
 printf("Enter basic salary :"); 
 scanf("%d",&basic_salary); 
 da=(basic_salary*40)/100; 
 hra=(basic_salary*20)/100; 
 gross_sal=da+hra+basic_salary; 
 printf(" Gross salary : %d",gross_sal); 
 return 0; 
     
}
