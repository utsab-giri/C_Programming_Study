#include<stdio.h>
void fibonacciSeries(int num)
{
   int a=0, b=1, fib;
   while (a<=num)
   {
     printf("%d\n", a);
     fib = a+b;
     a = b;
     b = fib;
   }
}
int main()
{
   int num;
   printf("Enter num: ");
   scanf("%d", &num);
   printf("The fibonacci series is: \n");
   fibonacciSeries(num);
   return 0;
}