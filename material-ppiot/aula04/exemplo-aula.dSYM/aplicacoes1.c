#include <stdio.h>

int main() {
    int a, b;
    int soma, subtracao, multiplicacao, divisao;

    // Pedir ao usuário para inserir dois valores inteiros
    printf("Insira o primeiro valor inteiro: ");
    scanf("%d", &a);

    printf("Insira o segundo valor inteiro: ");
    scanf("%d", &b);

    // Realizar as operações aritméticas
    soma = a + b;
    subtracao = a - b;
    multiplicacao = a * b;
    divisao = a / b;

    // Mostrar os resultados
    printf("Soma: %d\n", soma);
    printf("Subtração: %d\n", subtracao);
    printf("Multiplicação: %d\n", multiplicacao);
    printf("Divisão: %d\n", divisao);

    return 0;
}
