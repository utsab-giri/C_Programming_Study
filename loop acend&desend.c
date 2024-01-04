#include<stdio.h>
int main()
{
  int a,b;
  printf("enter first and second number:\n");
  scanf("%d%d",&a,&b);
  if(a-b<0){
    while(a<=b){
      printf("%d",a);
      a++;
    }
  }
  else{
    while(a>=b){
      printf("%d",a);
      a--;
    }
  }
  
  return 0;
}
