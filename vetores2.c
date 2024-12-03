#include <stdio.h>
#include <stdlib.h>


int main () {

    int ada [10], i;

    for( int i=1; i<=9; i++) {
        ada [i]= i * 2 + 1 ;
    }
    
    printf("Os 10 primeiros numeros impares são: ");
     for( int i=1; i<=9; i++) {
        printf("ada[%d]= %d\n", i, ada [i]);
    }
 return 0;
}