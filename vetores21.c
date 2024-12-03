#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int ada[4][4], t;

    printf("Os elementos da matriz ada são:\n");
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            ada[i][j]= rand () % 100;
            printf("%5d ", ada[i][j]);
        }
        printf("\n");
    }
     printf("\n");


    for(int i=0; i<4; i++){
        t= ada[0][i];
        ada[0][i]= ada[i][3];
        ada[i][3]= t;
    }

    printf("Os elementos da matriz trocados são:\n");

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            printf("%5d ", ada[i][j]);
        }
        printf("\n");
    }
     printf("\n");
    
    return 0;
}