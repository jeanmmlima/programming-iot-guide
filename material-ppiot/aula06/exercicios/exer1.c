#include <stdio.h>

int main() {
    float a, b, resultado;

    // Solicita os números ao usuário
    printf("Digite o numerador (a): ");
    scanf("%f", &a);

    printf("Digite o denominador (b): ");
    scanf("%f", &b);

    // Verifica se o denominador é diferente de zero
    if (b != 0) {
        // Realiza a divisão
        resultado = a / b;
        printf("Resultado da divisão: %.2f\n", resultado);
    } else {
        // Informa que a divisão não pode ser feita
        printf("Erro: a divisão por zero não é permitida.\n");
    }

    return 0;
}