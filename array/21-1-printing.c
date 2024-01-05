#include<stdio.h>
int main(){
    int i,arr[20];
    for(i=0;i<=19;i++){
        arr[i]=i+1;
    }
    for(i=19;i>=0;i--){
        printf("%d\n",arr[i]);
    }
    return 0;
}