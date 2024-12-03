#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int ada1[10][10], ada2[10][10], t;

    srand(time(NULL)); 
    
    printf("Os elementos da matriz ada1 são:\n");
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            ada1[i][j] = rand() % 100;
            printf("%3d ", ada1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    printf("Os elementos da matriz ada2 são:\n");
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            ada2[i][j] = rand() % 100;
            printf("%3d ", ada2[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if (i == j) {
                t = ada1[i][j];
                ada1[i][j] = ada2[i][9-j];
                ada2[i][9-j] = t;
            }
        }
    }
    printf("\n");

    printf("Matriz ada1 com as diagonais trocadas:\n");
    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            printf("%3d ", ada1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
