#include <stdio.h>
#include <stdlib.h>


int main (){
    int ada[40], count=0, i;
     srand(time(NULL));

     for (int i = 0; i < 40; i++) {
        ada[i] = rand() % 100;
    }

    for (int i = 0; i < 40; i++) {
        if (ada[i] % 2 == 0) {
        printf(" O numero par %d foi encontra na posição ada [%d]\n", ada[i], i);
        count++;
    }
    }
 if (count > 0) {
        printf("A quantidade de pares encontrados foram %d .\n", count );
    } else {
        printf("O valor %d não foi encontrado no vetor.\n");
    }
    
    return 0;
}