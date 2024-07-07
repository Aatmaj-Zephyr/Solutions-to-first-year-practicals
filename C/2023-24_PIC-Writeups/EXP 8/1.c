#include <stdio.h>
#include <stdlib.h>

void transposeMatrix(int *matrix, int *transpose, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(transpose + j*rows + i) = *(matrix + i*cols + j);
        }
    }
}

int main() {
    int rows, cols;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int *matrix = (int *)malloc(rows * cols * sizeof(int));
    int *transpose = (int *)malloc(rows * cols * sizeof(int));

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", matrix + i*cols + j);
        }
    }

    transposeMatrix(matrix, transpose, rows, cols);

    printf("Transpose of the matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", *(transpose + i*rows + j));
        }
        printf("\n");
    }

    free(matrix);
    free(transpose);

    return 0;
}