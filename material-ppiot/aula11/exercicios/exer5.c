#include <stdio.h>

int main() {
    float matriz[3][6]; // Declaração da matriz 3x6
    float soma_colunas_impares = 0; // Variável para armazenar a soma das colunas ímpares
    float media_segunda_quarta = 0; // Variável para a média da segunda e quarta colunas

    // Entrada dos elementos da matriz
    printf("Digite os elementos da matriz 3x6:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%f", &matriz[i][j]);
        }
    }

    // 1. Calculando a soma de todos os elementos das colunas ímpares (índices 0, 2, 4)
    for (int i = 0; i < 3; i++) {
        soma_colunas_impares += matriz[i][0] + matriz[i][2] + matriz[i][4];
    }

    // 2. Calculando a média aritmética dos elementos da segunda (índice 1) e quarta (índice 3) colunas
    float soma_segunda_quarta = 0;
    for (int i = 0; i < 3; i++) {
        soma_segunda_quarta += matriz[i][1] + matriz[i][3];
    }
    media_segunda_quarta = soma_segunda_quarta / 6; // 6 elementos no total

    // 3. Substituindo os valores da sexta coluna (índice 5) pela soma dos valores das colunas 1 (índice 0) e 2 (índice 1)
    for (int i = 0; i < 3; i++) {
        matriz[i][5] = matriz[i][0] + matriz[i][1];
    }

    // Exibindo os resultados
    printf("\nSoma dos elementos das colunas ímpares: %.2f\n", soma_colunas_impares);
    printf("Média aritmética dos elementos da segunda e quarta colunas: %.2f\n", media_segunda_quarta);

    // 4. Exibindo a matriz modificada
    printf("\nMatriz modificada:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%.2f\t", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}