#include <stdio.h>

int main() {
    float temperatura = 45.0;  // Temperatura inicial simulada

    // Laço do-while para monitorar a temperatura até que ela esteja abaixo de 40 graus
    do {
        printf("Temperatura atual: %.2f°C\n", temperatura);

        if (temperatura >= 40) {
            printf("Temperatura alta! Aguardando resfriamento...\n");
        }

        temperatura -= 0.5;  // Simulando que a temperatura está caindo
    } while (temperatura >= 40);  // Continua enquanto a temperatura for maior ou igual a 40°C

    printf("Temperatura em nível seguro: %.2f°C. Operação normal retomada.\n", temperatura);

    return 0;
}