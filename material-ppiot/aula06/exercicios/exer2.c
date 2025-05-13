#include <stdio.h>

int main() {
    int num1, num2;

    // Solicita os dois números ao usuário
    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    // Verifica a ordem dos números e imprime-os ordenados
    if (num1 < num2) {
        printf("Números ordenados: %d, %d\n", num1, num2);
    } else {
        printf("Números ordenados: %d, %d\n", num2, num1);
    }

    return 0;
}