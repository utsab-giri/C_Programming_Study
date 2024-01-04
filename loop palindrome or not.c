#include<stdio.h>
int main(){
    int num,rem,reverse=0,original;
    printf("Enter the number :\n");
    scanf("%d",&num);

    printf("Original number is=%d",num);
    original=num;
    while(num!=0){
        rem=num%10;
        reverse=10*reverse+rem;
        num=num/10;
    }
    printf("\nReversed Number=%d",reverse);
    if(original==reverse){
        printf("\nNumber is palindrome.");
    }
    else
    printf("Number is not palindrome.");

    return 0;
}
