#include <stdio.h>
#include <stdlib.h>

int main() {
    // Define as variáveis
    float temperaturas[10];  // Vetor para armazenar 10 leituras de temperatura
    float soma = 0.0;
    float limiteTemperatura = 30.0;  // Limite de temperatura
    int i;

    printf("Coletando 10 leituras de temperatura...\n");

    // Coleta 10 leituras de temperatura
    for (i = 0; i < 10; i++) {
        // Simula uma leitura de temperatura entre 20.0°C e 40.0°C
        temperaturas[i] = 20.0 + (rand() % 2000) / 100.0;
        printf("Leitura %d: %.2f°C\n", i + 1, temperaturas[i]);
        soma += temperaturas[i];  // Acumula as temperaturas para calcular a média
    }

    // Calcula a média
    float media = soma / 10;
    printf("\nMédia das temperaturas: %.2f°C\n", media);

    // Verifica se a média excede o limite
    if (media > limiteTemperatura) {
        printf("ALERTA: A média da temperatura ultrapassou o limite de %.2f°C!\n", limiteTemperatura);
    } else {
        printf("Temperatura dentro do limite seguro.\n");
    }

    return 0;
}