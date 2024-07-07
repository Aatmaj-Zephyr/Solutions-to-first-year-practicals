#include <stdio.h>
#include <stdlib.h>

void removeDuplicates(int arr[], int *n) {
    int i, j;

    for (i = 0; i < *n; i++) {
        for (j = i + 1; j < *n; j++) {
            if (arr[i] == arr[j]) {
                for (int k = j; k < *n - 1; k++) {
                    arr[k] = arr[k + 1];
                }
                (*n)--;
                j--;
            }
        }
    }
}

int main() {
    int n,i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements of the array:\n");
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    removeDuplicates(arr, &n);

    printf("The array with duplicate elements removed is:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}