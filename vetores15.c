#include <stdio.h>

int main() {
    
    int ada[9] = {5, 7, 6, 9, 2, 8, 4, 0, 3}; 
    
    int i = 0;  

    printf("Sequência de leitura: ");

    
    while (ada[i] != 0) {  
        printf("%d, ", i + 1);  // Exibe o índice (1-based, então i+1)
        i = ada[i] - 1;  // Atualiza o índice com o valor do próximo elemento
    }

    printf("0\n"); 

    return 0;
}
