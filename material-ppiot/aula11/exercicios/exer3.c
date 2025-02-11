#include <stdio.h>

int main() {
    int matriz[3][3]; // Declaração da matriz 3x3
    int soma = 0; // Variável para armazenar a soma da diagonal principal

    // Entrada dos elementos da matriz
    printf("Digite os elementos da matriz 3x3:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    // Calculando a soma da diagonal principal
    for (int i = 0; i < 3; i++) {
        soma += matriz[i][i]; // Apenas os elementos em que i == j
    }

    // Exibindo a matriz
    printf("\nMatriz 3x3 digitada:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    // Exibindo o resultado da soma da diagonal principal
    printf("\nSoma da diagonal principal: %d\n", soma);

    return 0;
}