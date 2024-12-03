#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int ada[5][5], t=0;

    srand(time(NULL)); 

    printf("Os elementos da matriz ada são:\n");
    for(int i=0; i< 5; i++){
        for(int j=0; j< 5; j++){
            ada[i][j]= rand () % 100;
            printf("%5d ", ada[i][j]);
        }
        printf("\n");
    }
     printf("\n");

     for(int i=0; i< 5; i++){
        for(int j=0; j< 5; j++){
            if (i==j){
                t= ada[i][j];
                ada[i][j]= ada[i][5-j-1];
                ada[i][5-j-1]= t;
    }
        }
           }


    printf("Matriz ada com as diagonais trocadas:\n");
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            printf("%5d ", ada[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    return 0;
}