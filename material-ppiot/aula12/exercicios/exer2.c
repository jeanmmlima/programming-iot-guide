#include <stdio.h>

// Função para verificar se o número é par
int ehPar(int n) {
    return n % 2 == 0;
}

int main() {
    int numero;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (ehPar(numero)) {
        printf("%d é par.\n", numero);
    } else {
        printf("%d é ímpar.\n", numero);
    }

    return 0;
}