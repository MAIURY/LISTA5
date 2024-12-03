#include <stdio.h>
#include <stdlib.h>

int main (){
    int ada[50], i, control=0;

    for(i=0; i<50; i++){
        ada[i]= rand () % 10;
    }
    

    for (int i = 0; i < 50; i++) {
        if (ada[i] != 0) {
            ada[control] = ada[i];  
            if (i != control) {
                ada[i] = 0;  
            }
            control++;  
        }
    }
    
    for (i=control; i<50; i++){
        ada[i] = 0;
    }
    
    for (int i = 0; i < 50; i++) {
        printf("%d ", ada[i]);
    }
    printf("\n");
    
    
    return 0;
}