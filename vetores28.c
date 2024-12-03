#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L 20
#define C 20

int main() {
    int ada[L][C];
    int ada2[L][C];
    int impressos[100] = {0}; 

    srand(time(NULL)); 

    printf("Os elementos da matriz ada são:\n");
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            ada[i][j] = rand() % 100;
            printf("%3d ", ada[i][j]);
        }
        printf("\n");
    }

    printf("Os elementos da matriz ada2 são:\n");
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            ada2[i][j] = rand() % 100;
            printf("%3d ", ada2[i][j]);
        }
        printf("\n");
    }

    printf("Elementos da primeira matriz encontrados na segunda (em uma linha):\n");
    int encontrou = 0;
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            for (int k = 0; k < L; k++) {
                for (int l = 0; l < C; l++) {
                    if (ada[i][j] == ada2[k][l]) {
                        if (impressos[ada[i][j]] == 0) {
                            printf("%2d ", ada[i][j]); 
                            impressos[ada[i][j]] = 1; 
                            encontrou = 1; 
                        }
                        break; 
                    }
                }
            }
        }
    }
    
    if (!encontrou) {
        printf("Nenhum elemento encontrado da primeira matriz na segunda.\n");
    }
    
    printf("\n"); 

    return 0;
}
