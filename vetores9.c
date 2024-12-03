#include <stdio.h>
#include <stdlib.h>


    int main() {
    char frase[100];  
    char sem_espacos[100];  
    int i, j = 0;

    
    printf("Digite uma frase (max 100 caracteres): ");
    fgets(frase, sizeof(frase), stdin);  

    
    for (i = 0; frase[i] != '\0'; i++) {
        if (frase[i] != ' ') {  
            sem_espacos[j] = frase[i];  
            j++;
        }
    }

    sem_espacos[j] = '\0';  
    printf("Frase sem espaços: %s\n", sem_espacos);

   return 0;
}
