#include <stdio.h>

int main() {
    int inicio, fim, numeroAtual, totalPares = 0;

    // Leitura dos dois números
    printf("Digite o primeiro número: ");
    scanf("%d", &inicio);

    printf("Digite o segundo número: ");
    scanf("%d", &fim);

    numeroAtual = inicio;

    // Laço while para encontrar números pares entre o intervalo
    while (numeroAtual <= fim) {
        if (numeroAtual % 2 == 0) {
            printf("%d é par\n", numeroAtual);
            totalPares++;
        }
        numeroAtual++;
    }

    // Exibe o total de números pares encontrados
    printf("Total de números pares: %d\n", totalPares);

    return 0;
}