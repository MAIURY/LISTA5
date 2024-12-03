#include <stdio.h>
#include <stdlib.h>

int main (){
    int ada1[20],ada2[20],adaresult[20], i;

        for(int i= 0; i<20; i++){
        ada1[i]= rand () % 100;
     }

        for(int i= 0; i<20; i++){
        ada2[i]= rand () % 100;
    }

        printf("Vetor 1 original:\n");
        for (int i = 0; i < 20; i++) {
        printf("%d ", ada1[i]);
    }
        printf("\n");

        printf("Vetor 2 original:\n");
        for (int i = 0; i < 20; i++){
        printf("%d ", ada2[i]);
    }
    printf("\n");

    for (int i = 0; i < 20; i++){
        if (i % 2 == 0){
            adaresult[i]= ada2[i];
        } else {
            adaresult[i]= ada1[i];
        }
    }

    printf("Vetor resulta:\n");
    for (int i = 0; i < 20; i++) {
        printf("%d ", adaresult[i]);
    }
    printf("\n");

    return 0;
}