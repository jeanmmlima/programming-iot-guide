#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor;
    int quantidade;
    int soma = 0;
    float media;

    // Solicita a quantidade de números
    printf("Quantos números inteiros deseja armazenar? ");
    scanf("%d", &quantidade);

    // Aloca dinamicamente o vetor
    vetor = (int *) malloc(quantidade * sizeof(int));

    // Verifica se a alocação foi bem-sucedida
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    // Leitura dos valores e cálculo da soma
    for (int i = 0; i < quantidade; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
        soma += vetor[i];
    }

    // Cálculo da média
    media = (float)soma / quantidade;

    // Exibe a média
    printf("A média dos valores é: %.2f\n", media);

    // Libera a memória alocada
    free(vetor);

    return 0;
}