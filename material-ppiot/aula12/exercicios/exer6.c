#include <stdio.h>

// Função para calcular o fatorial
int fatorial(int n) {
    int resultado = 1;

    for(int i = 1; i <= n; i++) {
        resultado *= i;
    }

    return resultado;
}

int main() {
    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Erro: número negativo não possui fatorial.\n");
    } else {
        int resultado = fatorial(numero);
        printf("O fatorial de %d é: %d\n", numero, resultado);
    }

    return 0;
}