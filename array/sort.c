#include<stdio.h>
#include<limits.h>
int main(){
    printf("Enter the size of array :");
    int n;
    scanf("%d",&n);

    int arr[n];
    printf("Enter the numbers of array :\n");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }

    int min=arr[0];
    for(int i=0;i<n;i++){
        if(min>arr[i]);
        min=arr[i];
    }
    printf("The minimum number is :%d",min);

    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if((arr[i]<min)&&(INT_MIN> min))
        if(min>arr[i]);
        min=arr[i];
        printf("The minimum is:%d\n",min);
        int min=INT_MAX;
    }
}