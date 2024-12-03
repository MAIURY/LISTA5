#include <stdio.h>
#include <string.h>

#define SIZE 4

int isPalindrome(char matrix[SIZE][SIZE]) {
    int i, j;
    
    
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE / 2; j++) {
            
            if (matrix[i][j] != matrix[i][SIZE - 1 - j]) {
                return 0;
            }
            
            if (matrix[j][i] != matrix[SIZE - 1 - j][i]) {
                return 0;
            }
        }
    }

    return 1;
}

int main() {
    char matrix1[SIZE][SIZE], matrix2[SIZE][SIZE];
    int i, j;

    printf("Digite os elementos da primeira matriz 4x4:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            scanf(" %c", &matrix1[i][j]);
        }
    }

    printf("Digite os elementos da segunda matriz 4x4:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            scanf(" %c", &matrix2[i][j]);
        }
    }

    if (isPalindrome(matrix1)) {
        printf("A primeira matriz é um palíndromo.\n");
    } else {
        printf("A primeira matriz não é um palíndromo.\n");
    }

    if (isPalindrome(matrix2)) {
        printf("A segunda matriz é um palíndromo.\n");
    } else {
        printf("A segunda matriz não é um palíndromo.\n");
    }

    return 0;
}
