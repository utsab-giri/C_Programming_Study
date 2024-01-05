#include<stdio.h>
int factorial(int *num){
    int number;
    number = *num;
    if(number == 1|| number == 0){
        return 1;
    }
    else{
        return(number * factorial(number - 1));
    }
}
int main(){
    int num;
    printf("Enter the number :");
    scanf("%d",&num);
    factorial(&num);
    printf("The factorial of %d is %d\n",num);
    return 0;
}