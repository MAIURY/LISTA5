#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main (){
    int ada [20], X, finder= 0;
      srand(time(NULL));

     for (int i = 0; i < 20; i++) {
        ada[i] = rand() % 100;
    }
    
    printf("Digite o valor a ser encontrado: ");
    scanf("%d", &X);

    for (int i = 0; i < 20; i++) {
        if(ada [i] == X) {
            printf("X= %d foi encontra na posição ada [%d]", X, i);
            finder = 1;
            break;
        }
    } 
     if (!finder) {
        printf("O valor %d não se encontra no vetor.\n", X);
    }
    
    return 0;
}