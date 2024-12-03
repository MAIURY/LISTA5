#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int ada[10][10], maior=0, linha_maior=0,  coluna_maior=0;
    srand(time(0));

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            ada[i][j] = rand() % 100 + 1;
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%3d ", ada[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (ada[i][j] > maior) {
                maior = ada[i][j];          
                linha_maior = i;              
                coluna_maior = j;             
            }
        }
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%3d ", ada[i][j]);
        }
        printf("\n");
    }

     printf("O maior valor da matriz é %d, encontrado na posição (%d, %d)\n", maior, linha_maior, coluna_maior);


    return 0;
}
