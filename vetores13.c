#include <stdio.h>
#include <stdlib.h>

int main (){
    int ada[10], i, j;
    int repetido = 0;

    for (i = 0; i < 10; i++){
        ada[i] = rand() % 10;
    }
    
    for (i = 0; i < 10; i++){
        for (j = i + 1; j < 10; j++){
            if (ada[i] == ada[j]){
                printf("Valor repetido no vetor: %d na posição %d e %d\n", ada[i], i, j);
                repetido = 1;
                break;  
            }
        }
    }

    
    if (!repetido) {
        printf("Não tem valores repetidos.\n");
    }

    return 0;
}
