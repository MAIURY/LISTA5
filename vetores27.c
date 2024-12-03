#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define L 50
#define C 2

int main() {
    int ada[L][C];
    int area[L];  

    srand(time(NULL)); 

    
    printf("Os elementos da matriz ada são:\n");
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            ada[i][j] = rand() % 10;
            printf("%5d ", ada[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < L; i++) {
        area[i] = (ada[i][0] * ada[i][1]) / 2;
    }

    printf("\nAs áreas dos triângulos são:\n");
    for (int i = 0; i < L; i++) {
        printf("Área do triângulo %d: %d\n", i+1, area[i]);
    }

    return 0;
}
