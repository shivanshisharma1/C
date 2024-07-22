#include <stdio.h>

#define SIZE 4

void transposeMatrix(int matrix[SIZE][SIZE], int transpose[SIZE][SIZE]) {
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

int main() {
    int matrix[SIZE][SIZE] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    int transpose[SIZE][SIZE];

    transposeMatrix(matrix, transpose);

    printf("Original Matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nTransposed Matrix:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}

