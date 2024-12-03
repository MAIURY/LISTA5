#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int ada[20][20], x, linha_find = -1, coluna_find = -1;
    srand(time(NULL));

    printf("Digite o valor para ser encontrado na matriz: ");
    scanf("%d", &x);

    printf("Os elementos da matriz ada são:\n");
    for (int i = 0; i < 20; i++) {
        for (int j = 0; j < 20; j++) {
            ada[i][j] = rand() % 100; 
            printf("%d ", ada[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    
    for (int i = 0; i < 20; i++) {  
        for (int j = 0; j < 20; j++) {
            if (ada[i][j] == x) {
                linha_find = i;
                coluna_find = j;
                break;  
            }
        }
        if (linha_find != -1) {  
            break;
        }
    }

    if (linha_find != -1) {
        printf("Valor %d encontrado na linha %d e coluna %d.\n", x, linha_find, coluna_find);
    } else {
        printf("Valor %d não encontrado na matriz.\n", x);
    }

    return 0;
}
