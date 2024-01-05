#include <stdio.h>

int main()
{

    printf("Enter the size of the array :");
    int n;
    scanf("%d",&n);
    int values[n];

    printf("Enter  integers: ");

    // taking input and storing it in an array
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &values[i]);
    }

    for(int i=0,j=1;j<n;){
        values[i]=values[i]+values[j];
        values[j]=values[i]-values[j];
        values[i]=values[i]-values[j];
        i+=2;
        j+=2;
    }

    printf("Displaying integers:\n ");
    // printing elements of an array
    for (int i = 0; i < n;i++)
    {
        printf("%d\n", values[i]);
    }
    return 0;
}