#include <stdio.h>

int main() {
    float velocidade_kmh, velocidade_ms;

    // Solicita ao usuário para inserir a velocidade em km/h
    printf("Insira a velocidade em quilômetros por hora (km/h): ");
    scanf("%f", &velocidade_kmh);

    // Converte a velocidade de km/h para m/s
    velocidade_ms = velocidade_kmh / 3.6;

    // Mostra a velocidade em m/s
    printf("A velocidade em metros por segundo (m/s) é: %.2f\n", velocidade_ms);

    return 0;
}
