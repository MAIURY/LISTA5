#include <stdio.h>
#include <stdlib.h>
#include <string.h> 


void ordenarString(char str[]) {
    char temp;
    for (int i = 0; i < strlen(str); i++) {
        for (int j = i + 1; j < strlen(str); j++) {
            if (str[i] > str[j]) {
                
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char ada1[5], ada2[5]; 
    int anagrama = 1; 

    printf("Digite 4 caracteres para a primeira palavra: ");
    for (int i = 0; i < 4; i++) {
        scanf(" %c", &ada1[i]);
    }
    ada1[4] = '\0'; 

    printf("Digite 4 caracteres para a segunda palavra: ");
    for (int i = 0; i < 4; i++) {
        scanf(" %c", &ada2[i]);
    }
    ada2[4] = '\0'; 

    
    ordenarString(ada1);
    ordenarString(ada2);

    
    if (strcmp(ada1, ada2) == 0) {
        printf("As palavras são anagramas.\n");
    } else {
        printf("As palavras não são anagramas.\n");
    }

    return 0;
}
