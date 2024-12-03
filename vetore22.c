#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

int ada[8][8], t;

    printf("Os elementos da matriz ada são:\n");
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            ada[i][j]= rand () % 100;
            printf("%5d ", ada[i][j]);
        }
        printf("\n");
    }
     printf("\n");
    

    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(i < j ){
                ada[i][j]= 0;
            }
        }
    }

    printf("Parte de acima da diagonal principal preenchida com 0:\n");
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            printf("%5d ", ada[i][j]);
        }
        printf("\n");
    }
     printf("\n");
    
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){printf("Parte de acima da diagonal principal preenchida com 0:\n");
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            printf("%5d ", ada[i][j]);
        }
        printf("\n");
    }
     printf("\n");
            if(i > j ){
                ada[i][j]= 0;
            }
        }
    }

    printf("Parte de acima e abaixo da diagonal principal preenchida com 0:\n");
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            printf("%5d ", ada[i][j]);
        }
        printf("\n");
    }
     printf("\n");
    
    return 0;
}