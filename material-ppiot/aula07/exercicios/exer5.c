#include <stdio.h>

int main() {
    int numero, fatorial = 1, i;

    // Leitura do número fornecido pelo usuário
    printf("Digite um número para calcular o fatorial: ");
    scanf("%d", &numero);

    i = numero;

    // Laço while para calcular o fatorial
    while (i > 0) {
        fatorial = fatorial * i;  // Multiplica o valor atual de fatorial por i
        i = i - 1;  // Decrementa o valor de i
    }

    // Exibe o fatorial calculado
    printf("O fatorial de %d é: %d\n", numero, fatorial);

    return 0;
}