#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int ada[6][6], count = 0, i, j;
    srand(time(NULL));

    
    printf("Os elementos da matriz são:\n");
    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            ada[i][j] = rand() % 100 + 1; 
            printf("%d ", ada[i][j]); 
        }
        printf("\n");  
    }

    for (i = 0; i < 6; i++) {
        for (j = 0; j < 6; j++) {
            if (ada[i][j] > 10) {
                count++;
            }
        }
    }

    
    printf("A matriz tem %d valores maiores que 10.\n", count);

    return 0;
}
