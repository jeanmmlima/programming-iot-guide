#include <stdio.h>

int main() {
    int linhas = 4, colunas = 4;
    int matriz[4][4]; // Declaração da matriz fixa 4x4

    // Entrada dos elementos da matriz
    printf("Digite os elementos da matriz %dx%d:\n", linhas, colunas);
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Exibição da matriz formatada
    printf("\nMatriz digitada:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%4d ", matriz[i][j]); // %4d alinha os números
        }
        printf("\n");
    }

    return 0;
}