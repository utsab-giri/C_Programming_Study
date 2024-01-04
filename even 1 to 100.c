//Write a C program to print all even numbers between 1 to 100...
#include<stdio.h>
#include<conio.h>
int main(){
printf("All the even numbers between 1 to 100 are: ");
int a;
a=1;
while(a<=100){
              if(a/2!=0){
              printf("%d\n",a);
              }
              else
              printf("Isn't even.");
              a++;
                  }
getch();
return 0;
}
