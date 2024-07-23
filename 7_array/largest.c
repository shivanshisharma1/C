#include <stdio.h>

#define SIZE 5

int findLargest(int matrix[SIZE][SIZE]) {
    int largest = matrix[0][0]; 

    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < SIZE; j++) {
            if (matrix[i][j] > largest) {
             largest = matrix[i][j];
            }
        }
    }

    return largest;
}

int main() {
    int matrix[SIZE][SIZE] = {
        {3, 5, 2, 9, 4},
        {7, 1, 8, 6, 2},
        {4, 7, 1, 3, 5},
        {9, 6, 3, 8, 7},
        {5, 2, 8, 4, 9}
    };
        int largest=findLargest(matrix);
        printf (" the largest number in matrix is %d\n" , largest );
        return 0 ;
    }

