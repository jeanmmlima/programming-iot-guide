#include <stdio.h>

int main() {
    int matriz[3][3]; // Declaração da matriz 3x3
    int soma_colunas[3] = {0, 0, 0}; // Vetor para armazenar a soma de cada coluna

    // Entrada dos elementos da matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calculando a soma dos elementos de cada coluna
    for (int j = 0; j < 3; j++) { // Percorre as colunas
        for (int i = 0; i < 3; i++) { // Soma os elementos de cada coluna
            soma_colunas[j] += matriz[i][j];
        }
    }

    // Exibindo a matriz digitada
    printf("\nMatriz 3x3 digitada:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }

    // Exibindo o array unidimensional com as somas das colunas
    printf("\nArray com a soma de cada coluna:\n");
    for (int j = 0; j < 3; j++) {
        printf("%d ", soma_colunas[j]);
    }
    printf("\n");

    return 0;
}