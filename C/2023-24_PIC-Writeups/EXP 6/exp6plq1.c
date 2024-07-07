#include <stdio.h>

int min(int arr[], int size) {
    int min_val = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min_val) {
            min_val = arr[i];
        }
    }
    return min_val;
}

int max(int arr[], int size) {
    int max_val = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] > max_val) {
            max_val = arr[i];
        }
    }
    return max_val;
}

int sum(int arr[], int size) {
    int sum_val = 0;
    for (int i = 0; i < size; ++i) {
        sum_val += arr[i];
    }
    return sum_val;
}

int main() {
    int arr[100], size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    printf("Enter %d elements of the array:\n", size);
    for (int i = 0; i < size; ++i) {
        scanf("%d", &arr[i]);
    }

    int min_val = min(arr, size);
    int max_val = max(arr, size);
    int sum_val = sum(arr, size);

    printf("Minimum element: %d\n", min_val);
    printf("Maximum element: %d\n", max_val);
    printf("Sum of elements: %d\n", sum_val);

    return 0;
}
