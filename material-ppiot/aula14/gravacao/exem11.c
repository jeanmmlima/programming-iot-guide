#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas = 3, colunas = 4;
    int **matriz;

    // Aloca memória para as linhas
    matriz = (int**) malloc(linhas * sizeof(int*));

    // Aloca memória para as colunas de cada linha
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int*) malloc(colunas * sizeof(int));
    }

    // Preenchimento da matriz
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = (i + 1) * (j + 1); // Produto dos índices
        }
    }

    // Impressão
    printf("Matriz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Liberação de memória
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}