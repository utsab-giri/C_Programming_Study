#include<stdio.h>
#include<conio.h>
int main()
{
    int a;
    printf("Enter the Value: ");
    scanf("%d",&a);
    if(a%2!=0){
               printf("Wired");
               }
               else if(a%2==0){
                    if(a>=1&&a<=6){
                                   printf("Not Wired");
                                   }
                    else if(a>=7&&a<=21){
                         printf("Wired");
                         }
                         else
                         printf("Not Wired");
    getch();
	return 0;
}
