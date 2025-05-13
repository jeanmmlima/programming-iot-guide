#include <stdio.h>

int main() {
    int N;

    // Lendo o tamanho da matriz
    printf("Digite um numero N para a matriz NxN: ");
    scanf("%d", &N);

    int matriz[N][N]; // Declarando a matriz NxN
    int contador = 1; // Inicializando contador

    // Preenchendo a matriz com números sequenciais
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            matriz[i][j] = contador;
            contador++;
        }
    }

    // Exibindo a matriz NxN
    printf("Matriz %dx%d:\n", N, N);
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            printf("%d\t", matriz[i][j]); // Usando tabulação para melhor visualização
        }
        printf("\n");
    }

    return 0;
}