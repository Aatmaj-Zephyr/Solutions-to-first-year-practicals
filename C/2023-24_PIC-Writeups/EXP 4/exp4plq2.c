#include <stdio.h>

// Function to modify the array elements by multiplying each element by 3
void modify(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        arr[i] *= 3;
    }
}

int main() {
    int arr[10];

    // Initializing the array in main
    printf("Enter 10 elements of the array:\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &arr[i]);
    }

    // Passing the array to the modify function
    modify(arr, 10);

    // Printing the modified array in main
    printf("Modified array elements:\n");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
