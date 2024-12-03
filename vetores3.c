#include <stdio.h>
#include <stdlib.h>


int main (){
    int ada[16], i, temp;

    printf("Digite os 16 valores do vetor: ");
    for( int i= 0; i<16; i ++){
    printf("Posição %d: ", i);
    scanf("%d", &ada[i]);
    }
        for (int i = 0; i < 8; i++) {
        temp = ada[i];
        ada[i] = ada[i + 8];
        ada[i + 8] = temp;
        }
    printf("\nVetor após a troca\n");
    for( int i= 0; i<16; i ++){
        printf(" vetor [%d]= %d\n", i, ada[i]);
    }

    return 0;
}