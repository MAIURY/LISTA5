#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 4
#define C 4

int main() {
    int ada1[L][C], ada2[L][C];
    int ada3[L][C] = {0}, maior = 0, i, j;

    
    srand(time(NULL));

    printf("\nA matriz número 1 original:\n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            ada1[i][j] = rand() % 100 + 1;
            printf("%d ", ada1[i][j]);
        }
        printf("\n");
    }
    
    printf("\nA matriz número 2 original:\n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            ada2[i][j] = rand() % 100 + 1;
            printf("%d ", ada2[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            if (ada1[i][j] > ada2[i][j]) {
                ada3[i][j] = ada1[i][j];
            } else {
                ada3[i][j] = ada2[i][j];
            }
        }
    }

    
    printf("\nA matriz com os maiores elementos é:\n");
    for (i = 0; i < L; i++) {
        for (j = 0; j < C; j++) {
            printf("%d ", ada3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
