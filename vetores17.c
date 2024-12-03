#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define L 5 
#define C 5  

int main() {
    int ada[L][C];   
    srand(time(0)); 


    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            if (i == j) {
                ada[i][j] = 1; 
            } else {
                ada[i][j] = rand() % 9 + 1; 
            }
        }
    }

    
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            printf("%3d ", ada[i][j]);  
        }
        printf("\n");
    }

    return 0;
}
