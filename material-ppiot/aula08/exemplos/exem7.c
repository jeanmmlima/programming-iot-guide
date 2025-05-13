#include <stdio.h>

int main() {
    int i = 1, j;

    // Laço while externo (para as linhas)
    while (i <= 5) {
        // Laço for interno (para as colunas)
        for (j = 1; j <= 5; j++) {
            printf("%d\t", i * j);  // Imprime o produto da linha e coluna
        }
        printf("\n");  // Muda de linha após imprimir uma linha completa da tabela
        i++;  // Incrementa o contador do laço while
    }

    return 0;
}