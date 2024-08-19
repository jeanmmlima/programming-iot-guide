#include <stdio.h>

int main() {
    float aresta, volume;

    // Solicita ao usuário que insira o valor da aresta do cubo
    printf("Digite o valor da aresta do cubo: ");
    scanf("%f", &aresta);

    // Calcula o volume do cubo
    volume = aresta * aresta * aresta;

    // Exibe o resultado
    printf("O volume do cubo é: %.2f\n", volume);

    return 0;
}