#include <stdio.h>
#include <stdlib.h>


int main () {
 int ada [12], X, Y, soma=0;

    printf("Digite os 12 valores do vetor: ");
    for( int i= 0; i<12; i ++){
    printf("Posição %d: ", i);
    scanf("%d", &ada[i]);
}

    printf("Digite a posição X (entre 0 e 11): ");
    scanf("%d", &X);
    printf("Digite a posição Y (entre 0 e 11): ");
    scanf("%d", &Y);

    if (X < 0 || X > 11 || Y < 0 || Y > 11) {
         printf("Erro: as posições devem estar entre 0 e 11.\n");
        return 1;
    }

    soma = ada [X] + ada [Y];

    printf("A soma dos valores nas posições %d e %d é: %d\n", X, Y, soma);

    return 0;
}