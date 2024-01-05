#include <stdio.h>

int main()
{

    printf("Enter the size of the array :");
    int n;
    scanf("%d",&n);
    int arr[n];

    printf("Enter  integers:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int min=arr[0];
    for(int i=1;i<n;i++){
        if(min>arr[i]){
            min=arr[i];
        }
    }

    printf("The minimum value in the given array is :%d",min);

    return 0;
}