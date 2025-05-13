#include <stdio.h>

int main() {
    int numero, soma = 0;

    // Laço while para continuar lendo números enquanto a soma for menor que 21
    while (soma < 21) {
        printf("Digite um número: ");
        scanf("%d", &numero);

        soma += numero;  // Adiciona o número fornecido à soma

        printf("Soma atual: %d\n", soma);  // Exibe a soma atual
    }

    printf("A soma final é: %d. O jogo terminou!\n", soma);

    return 0;
}