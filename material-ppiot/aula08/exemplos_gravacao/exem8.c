#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i;
    float temperatura;  // Variável para armazenar a temperatura simulada
    
    // Inicializa a semente do gerador de números aleatórios
    srand(time(0));

    // Laço for para simular a coleta de temperatura de 5 sensores
    for (i = 1; i <= 5; i++) {
        // Gera uma temperatura aleatória entre 15.0 e 30.0 graus Celsius
        temperatura = 15.0 + (rand() % 150) / 10.0;
        
        // Exibe a temperatura simulada para cada sensor
        if (i == 1) {
            printf("Sensor 1 (Sala 1): %.1f°C\n", temperatura);
        } else if (i == 2) {
            printf("Sensor 2 (Sala 2): %.1f°C\n", temperatura);
        } else if (i == 3) {
            printf("Sensor 3 (Sala de Servidores): %.1f°C\n", temperatura);
        } else if (i == 4) {
            printf("Sensor 4 (Armazém): %.1f°C\n", temperatura);
        } else if (i == 5) {
            printf("Sensor 5 (Escritório): %.1f°C\n", temperatura);
        }
    }

    return 0;
}