#include <stdio.h>

int main() {
    int matriz[5][5]; // Declaração da matriz 5x5

    // Preenchendo a matriz
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            if (i == j) {
                matriz[i][j] = 1; // Diagonal principal recebe 1
            } else {
                matriz[i][j] = 0; // Demais elementos recebem 0
            }
        }
    }

    // Exibindo a matriz 5x5
    printf("Matriz 5x5 resultante:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}