#include<stdio.h>

int add(int a,int b);
// void fibo(int n);
void fibo(int n,int a,int b);

int main()
{
    int n;
    char ch;
    printf("Enter a Number");  //   10    0 1 1 2 3 5 8 13 21 34
    scanf("%d",&n);  
    printf("do you want to give first two Numbers if yes press \"Y\" otherwise press \"N\" :\n");
    scanf("%c",&ch);
    scanf("%c",&ch);
    if(ch=='Y'){ 
        int a,b;
        printf("Enter two Numbers");
        scanf("%d%d",&a,&b);
        fibo(n,a,b);
    }
    else
        fibo(n);
    
    return 0;         
}

int add(int a,int b){
    return (a+b);
}

// void fibo(int n){
//     int a=0,b=1,c;
//     printf("%d\n",a);
//     printf("%d\n",b);
//     for(int i=0;i<n-2;i++){
//         c=add(a,b);
//         printf("%d\n",c);
//         a=b;
//         b=c;
//     }
    

// }

void fibo(int n,int a=0,int b=1){
    int c;
    printf("%d\n",a);
    printf("%d\n",b);
    for(int i=0;i<n-2;i++){
        c=add(a,b);
        printf("%d\n",c);
        a=b;
        b=c;
    }
    return 0;

}
