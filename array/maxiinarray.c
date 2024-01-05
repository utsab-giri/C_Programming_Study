#include <stdio.h>

int findMax(int arr[], int size) {
    int max = arr[0]; // Assume first element as max

    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i]; // Update max if current element is larger
        }
    }

    return max;
}

int main() {
    int arr[] = {5, 2, 9, 1, 7};
    int size = sizeof(arr) / sizeof(arr[0]);

    int max = findMax(arr, size);

    printf("Maximum value in the array is: %d\n", max);

    return 0;
}

