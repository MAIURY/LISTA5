#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int ada[6][6];

    
    srand(time(NULL));

    printf("Os elementos da matriz ada são:\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            ada[i][j] = (rand() % 101) - 50;  
            printf("%5d ", ada[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            if (i != j && i + j != 5 && ada[i][j] < 0) {
                ada[i][j] = 0; 
            }
        }
    }

    printf("Matriz após modificação:\n");
    for (int i = 0; i < 6; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%5d ", ada[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;
}
