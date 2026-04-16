#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr, i, max;

    // allocate memory for 20 integers
    arr = (int *)malloc(20 * sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed");
        return 1;
    }

    // input 20 numbers
    printf("Enter 20 integers:\n");
    for (i = 0; i < 20; i++) {
        scanf("%d", &arr[i]);
    }

    // assume first element is largest
    max = arr[0];

    // find largest
    for (i = 1; i < 20; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }

    // display result
    printf("Largest number = %d", max);

    // free memory
    free(arr);

    return 0;
}