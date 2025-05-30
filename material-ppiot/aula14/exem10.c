#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas = 3, colunas = 4;
    int *matriz;

    // Alocação de memória para uma matriz 3x4
    matriz = (int*) malloc(linhas * colunas * sizeof(int));

    if (matriz == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Preenchendo a matriz com o produto dos índices
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i * colunas + j] = i * j;
        }
    }

    // Exibindo a matriz formatada
    printf("Matriz resultante:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%3d ", matriz[i * colunas + j]);
        }
        printf("\n");
    }

    free(matriz);
    return 0;
}