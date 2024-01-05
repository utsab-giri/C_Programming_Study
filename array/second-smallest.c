#include<stdio.h>
int main(){
    printf("Enter the size of array :");
    int n;
    scanf("%d",&n);
    int arr[n];
    printf("Enter the numbers of array :\n");
    for(int i=1;i<n;i++){
        scanf("%d",&arr[i]);
    }
    
}