#include<stdio.h>

int add(int a,int b);
void fibo(int n);
void fibo2(int,int,int);

int main()
{
    int n;
    printf("Enter a Number");  //   10    0 1 1 2 3 5 8 13 21 34
    scanf("%d",&n);
    printf("do you want to give first two Numbers if yes press \"Y\" otherwise press \"N\" :\n");
    char ch;
    scanf("%c", &ch);
    scanf("%c", &ch);
    if(ch == 'Y'){
        int a,b;
        printf("Enter two Numbers");
        scanf("%d%d",&a,&b);
        fibo2(n,a,b);
    }
    else
        fibo(n);
    
    return 0;         
}

int add(int a,int b){
    return (a+b);
}

void fibo(int n){
    int a=0,b=1,c;
    printf("%d\n",a);
    printf("%d\n",b);
    for(int i=0;i<n-2;i++){
        c=add(a,b);
        printf("%d\n",c);
        a=b;
        b=c;
    }
    

}

void fibo2(int n,int a,int b){
    int c;
    printf("%d\n",a);
    printf("%d\n",b);
    for(int i=0;i<n-2;i++){
        c=add(a,b);
        printf("%d\n",c);
        a=b;
        b=c;
    }
    

}