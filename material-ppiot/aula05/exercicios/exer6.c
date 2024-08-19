#include <stdio.h>

int main() {
    int numero;
    int resultado;

    // Solicita ao usuário que insira um número
    printf("Digite um número: ");
    scanf("%d", &numero);

    // Verifica se o número é par ou ímpar usando o operador %
    resultado = numero % 2 == 0;
    printf("Resultado: 1 - Numero é PAR! 0 - Número é IMPAR\n");
    printf("%i \n",resultado);

    return 0;
}