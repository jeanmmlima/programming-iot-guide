#include <stdio.h>

int main() {
    // Declaração de variáveis individuais para os códigos e os valores dos jogadores
    int codigo1, codigo2, codigo3, codigo4, codigo5;
    int valor1, valor2, valor3, valor4, valor5;

    // Leitura do código e valor para o jogador 1
    printf("Digite o código do jogador 1: ");
    scanf("%d", &codigo1);
    printf("Digite o valor obtido pelo jogador %d (de 1 a 6): ", codigo1);
    scanf("%d", &valor1);

    // Leitura do código e valor para o jogador 2
    printf("\nDigite o código do jogador 2: ");
    scanf("%d", &codigo2);
    printf("Digite o valor obtido pelo jogador %d (de 1 a 6): ", codigo2);
    scanf("%d", &valor2);

    // Leitura do código e valor para o jogador 3
    printf("\nDigite o código do jogador 3: ");
    scanf("%d", &codigo3);
    printf("Digite o valor obtido pelo jogador %d (de 1 a 6): ", codigo3);
    scanf("%d", &valor3);

    // Leitura do código e valor para o jogador 4
    printf("\nDigite o código do jogador 4: ");
    scanf("%d", &codigo4);
    printf("Digite o valor obtido pelo jogador %d (de 1 a 6): ", codigo4);
    scanf("%d", &valor4);

    // Leitura do código e valor para o jogador 5
    printf("\nDigite o código do jogador 5: ");
    scanf("%d", &codigo5);
    printf("Digite o valor obtido pelo jogador %d (de 1 a 6): ", codigo5);
    scanf("%d", &valor5);

    // Exibição dos jogadores que obtiveram valor maior ou igual a 5
    printf("\nJogadores que obtiveram valor maior ou igual a 5:\n");

    if (valor1 >= 5) {
        printf("Jogador de código %d obteve o valor %d\n", codigo1, valor1);
    }

    if (valor2 >= 5) {
        printf("Jogador de código %d obteve o valor %d\n", codigo2, valor2);
    }

    if (valor3 >= 5) {
        printf("Jogador de código %d obteve o valor %d\n", codigo3, valor3);
    }

    if (valor4 >= 5) {
        printf("Jogador de código %d obteve o valor %d\n", codigo4, valor4);
    }

    if (valor5 >= 5) {
        printf("Jogador de código %d obteve o valor %d\n", codigo5, valor5);
    }

    return 0;
}