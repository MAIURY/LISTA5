#include <stdio.h>
#include <stdlib.h>

#define L 6
#define C 6

int main() {
    int ada[L][C];

    
    char cidades[L][20] = {
        "Cidade 1", "Cidade 2", "Cidade 3", "Cidade 4", "Cidade 5", "Cidade 6"
    };

    
    for (int i = 0; i < L; i++) {
        for (int j = 0; j < C; j++) {
            if (i == j) {
                ada[i][j] = 0;
            } else {
                ada[i][j] = -1;  
            }
        }
    }

    
    for (int i = 0; i < L; i++) {
        for (int j = i + 1; j < C; j++) {  
            printf("Digite a distância de %s para %s: ", cidades[i], cidades[j]);
            scanf("%d", &ada[i][j]);
            ada[j][i] = ada[i][j];  
        }
    }

    printf("\nMatriz de distâncias:\n");

    printf("\t");  
    for (int i = 0; i < L; i++) {
        printf("%s\t", cidades[i]); 
    }
    printf("\n");

    for (int i = 0; i < L; i++) {
        printf("%s\t", cidades[i]);  
        for (int j = 0; j < C; j++) {
            printf("%d\t", ada[i][j]);  
        }
        printf("\n");
    }

    return 0;
}
