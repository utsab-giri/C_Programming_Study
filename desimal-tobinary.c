#include<stdio.h>
#include<math.h>
int convert_decimal_to_binary(int n){
    int binary=0;
    int i=0;
    while (n!=0)
    {
        int bits = n%2;
        binary = binary+bits*pow(10,i++);
        n/=2;  
    }
    return binary;
}
int main(){
int n;
printf("Enter the value of n : ");
scanf("%d",&n);
int ans = convert_decimal_to_binary(n);
printf("%d",ans);
}