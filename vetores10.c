#include <stdio.h>

int main() {
    char numero[5]; 
    int i;

    
    printf("Digite um número de 5 dígitos: ");
    for (i = 0; i < 5; i++) {
        scanf(" %c", &numero[i]);  
    }

    printf("Número por extenso: ");
    for (i = 0; i < 5; i++) {
        switch (numero[i]) {
            case '0': printf("Zero "); break;
            case '1': printf("Um "); break;
            case '2': printf("Dois "); break;
            case '3': printf("Três "); break;
            case '4': printf("Quatro "); break;
            case '5': printf("Cinco "); break;
            case '6': printf("Seis "); break;
            case '7': printf("Sete "); break;
            case '8': printf("Oito "); break;
            case '9': printf("Nove "); break;
            default: 
                printf("Caractere inválido! ");
        }
    }
    printf("\n");

    return 0;
}
