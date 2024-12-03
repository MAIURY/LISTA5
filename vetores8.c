#include <stdio.h>
#include <stdlib.h>

int main () {

   int ada1[40];

    for(int i= 0; i<40; i++){
    ada1[i]= rand () % 100;
    }

    printf("\nVetor original\n");
        for( int i= 0; i<40; i ++){
         printf(" vetor [%d]= %d\n", i, ada1[i]);
        }

    for(int i= 1; i<40; i++){
    ada1[i] += ada1[i - 1];
    }

        printf("\nVetor acomulado\n");
        for( int i= 0; i<40; i ++){
         printf(" vetor [%d]= %d\n", i, ada1[i]);
        }

    for(int i= 1; i<40; i++){
    ada1[i] += ada1[i - 1];
    }

        printf("\nVetor acomulado\n");
        for( int i= 0; i<40; i ++){
         printf(" vetor [%d]= %d\n", i, ada1[i]);
        }
    return 0;
}