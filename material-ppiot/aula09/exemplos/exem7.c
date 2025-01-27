#include <stdio.h>

int main() {
    int codigos[5];     // Vetor para armazenar os códigos identificadores dos jogadores
    int valores[5];     // Vetor para armazenar os valores obtidos no dado
    int i;

    // Leitura dos códigos identificadores dos jogadores
    printf("Digite o código identificador dos 5 jogadores:\n");
    for (i = 0; i < 5; i++) {
        printf("Código do jogador %d: ", i + 1);
        scanf("%d", &codigos[i]);
    }

    // Leitura dos valores obtidos ao lançar o dado
    printf("\nDigite os valores obtidos no dado (1 a 6):\n");
    for (i = 0; i < 5; i++) {
        printf("Valor do jogador com código %d: ", codigos[i]);
        scanf("%d", &valores[i]);
    }

    // Exibição dos códigos dos jogadores com valores maiores ou iguais a 5
    printf("\nJogadores que obtiveram valores maiores ou iguais a 5:\n");
    for (i = 0; i < 5; i++) {
        if (valores[i] >= 5) {
            printf("Jogador com código %d obteve o valor %d\n", codigos[i], valores[i]);
        }
    }

    return 0;
}