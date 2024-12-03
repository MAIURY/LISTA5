#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main () {
    int ada[40], temp;
    srand(time(NULL));

    for (int i= 0; i<40; i++){
        ada[i]= rand() % 101-50;
    }

    printf("Vetor original:\n");
    for (int i = 0; i < 40; i++) {
        printf("%d ", ada[i]);
    }
    printf("\n");

    for (int i = 0; i < 40 ; i++) { 
        if (ada [i] < 0) {
            ada [i] = 0;
        }
    }   
    
    printf("Vetor após a substituição dos negativos por 0:\n");
    for (int i = 0; i < 40; i++) {
        printf("%d ", ada[i]);
    
    }
    
    return 0;
}