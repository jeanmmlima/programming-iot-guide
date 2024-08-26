#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    // Exibe o menu de opções
    printf("Escolha uma operação matemática:\n");
    printf("1. Adição\n");
    printf("2. Subtração\n");
    printf("3. Multiplicação\n");
    printf("4. Divisão\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &opcao);

    // Solicita os números ao usuário
    printf("Digite o primeiro número: ");
    scanf("%f", &num1);
    printf("Digite o segundo número: ");
    scanf("%f", &num2);

    // Switch case para selecionar a operação
    switch (opcao) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado da adição: %.2f\n", resultado);
            break;
        case 2:
            resultado = num1 - num2;
            printf("Resultado da subtração: %.2f\n", resultado);
            break;
        case 3:
            resultado = num1 * num2;
            printf("Resultado da multiplicação: %.2f\n", resultado);
            break;
        case 4:
            if (num2 != 0) {
                resultado = num1 / num2;
                printf("Resultado da divisão: %.2f\n", resultado);
            } else {
                printf("Erro: Divisão por zero não é permitida.\n");
            }
            break;
        default:
            printf("Opção inválida! Por favor, escolha uma operação válida.\n");
            break;
    }

    return 0;
}