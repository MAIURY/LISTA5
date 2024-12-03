#include <stdio.h>
#include <stdlib.h>


int main (){
    int ada1[9], ada2[9], ada3[9], adaresult[9], i;


    for(int i= 0; i<9; i++){
        ada1[i]= rand () % 100;
    }
        for (int i = 0; i < 9; i++) {
        printf(" vetor [%d]= %d\n", i, ada1[i]);
        }
        printf("\n");

            for(int i= 0; i<9; i++){
            ada2[i]= rand () % 100;
            }

            for (int i = 0; i < 9; i++) {
            printf(" vetor [%d]= %d\n", i, ada2[i]);
            }
            printf("\n");

            for(int i= 0; i<9; i++){
            ada3[i]= rand () % 100;
            } 

            for (int i = 0; i < 9; i++) {
            printf(" vetor [%d]= %d\n", i, ada3[i]);
            }
            printf("\n");


    int resultIndex = 0;
    for (i = 0; i < 3; i++) {
        adaresult[resultIndex++] = ada1[i];
    }
    for (i = 0; i < 3; i++) {
        adaresult[resultIndex++] = ada2[i];
    }
    for (i = 0; i < 3; i++) {
        adaresult[resultIndex++] = ada3[i];
    }

        printf("Vetor adaresult (mistura de ada1, ada2 e ada3):\n");
        for (int i = 0; i < 9; i++) {
        printf(" vetor [%d]= %d\n", i, adaresult[i]);
        }
    
    
    return 0;
}