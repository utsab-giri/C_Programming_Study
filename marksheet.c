// A Program to calculate the sum and percentage of five subjectof a student.
#include<stdio.h>
int main()
{
	float a,b,c,d,e;
	
	printf("Enter the first number : \n",a);
	scanf("%f",&a);
	
	printf("Enter the second number : \n",b);
	scanf("%f",&b);
	
	printf("Enter the third number : \n",c);
	scanf("%f",&c);
	
	printf("Enter the fourth number : \n",d);
	scanf("%f",&d);
	
	printf("Enter the fifth number : \n",e);
	scanf("%f",&e);
	
	sum=(a+b+c+d+e);
	printf("The sum is :%f\n",sum);
	
	float x;
	printf("Give the total marks of one subject : \n",x);
	scanf("%f",&x);
	
	float p,q,r,s,t;
	
	p=((a/x)*100);
	q=((b/x)*100);
	r=((c/x)*100);
	s=((d/x)*100);
	t=((e/x)*100);
	
	printf("Total percentage in first subject is :%f\n",p);
	printf("Total percentage in second subject is :%f\n",q);
	printf("Total percentage in third subject is :%f\n",r);
	printf("Total percentage in fourth subject is :%f\n",s);
	printf("Total percentage in fifth subject is :%f\n",t);
	
	float z;
	z=((sum/(5*x))*100);
	printf("Total percentages of all subject is :%f",z);
	
	return 0;
}
