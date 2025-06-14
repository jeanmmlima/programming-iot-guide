#include <stdio.h>
#include <stdlib.h>

int main() {
    int linhas, colunas;
    int **matriz;

    // Solicita o número de linhas e colunas ao usuário
    printf("Digite a quantidade de linhas: ");
    scanf("%d", &linhas);

    printf("Digite a quantidade de colunas: ");
    scanf("%d", &colunas);

    // Aloca memória para o vetor de ponteiros (linhas)
    matriz = (int **) malloc(linhas * sizeof(int *));
    if (matriz == NULL) {
        printf("Erro ao alocar memória para as linhas.\n");
        return 1;
    }

    // Aloca memória para cada linha (colunas)
    for (int i = 0; i < linhas; i++) {
        matriz[i] = (int *) malloc(colunas * sizeof(int));
        if (matriz[i] == NULL) {
            printf("Erro ao alocar memória para a linha %d.\n", i);
            // Libera as linhas anteriores antes de sair
            for (int j = 0; j < i; j++) {
                free(matriz[j]);
            }
            free(matriz);
            return 1;
        }
    }

    // Preenche a matriz com o produto dos índices
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matriz[i][j] = i * j;
        }
    }

    // Imprime a matriz em formato tabular
    printf("Matriz resultante:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%4d", matriz[i][j]);
        }
        printf("\n");
    }

    // Libera a memória alocada
    for (int i = 0; i < linhas; i++) {
        free(matriz[i]);
    }
    free(matriz);

    return 0;
}