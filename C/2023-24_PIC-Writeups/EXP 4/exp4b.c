#include <stdio.h>
int main() {
    int matrix[3][3];
    printf("Amandeep Singh\n16010123036\n");
    printf("Enter the 3x3 matrix:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Entered matrix:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Transpose of the matrix:\n");
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            printf("%d\t", matrix[j][i]);
        }
        printf("\n");
    }
    return 0;
}