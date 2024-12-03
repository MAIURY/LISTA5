#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

int ada[8][8], maior=0,count=0 ;

    printf("Os elementos da matriz ada são:\n");
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            ada[i][j]= rand () % 100;
            printf("%5d ", ada[i][j]);
        }
        printf("\n");
    }
     printf("\n");
    

     for (int i = 0; i < 8; i++) {
        if (ada[i][i] > maior) {
            maior = ada[i][i];
        }
    }

     for (int i = 0; i < 8; i++) {
        int j = 7 - i; 
        count += ada[i][j]; 
    }

    printf("O maior valor da diagonal principal é: %d\n Soma da diagonal secudaria é: %d\n", maior,count);

    return 0;
}