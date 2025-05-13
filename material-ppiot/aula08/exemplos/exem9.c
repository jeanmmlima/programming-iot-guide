#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int setores = 3;        // Número de setores na estufa
    int areas = 4;          // Número de áreas em cada setor
    float umidade;          // Variável para armazenar a umidade simulada

    // Inicializa a semente do gerador de números aleatórios
    srand(time(0));

    // Laço externo para percorrer os setores da estufa
    for (int i = 1; i <= setores; i++) {
        printf("Setor %d:\n", i);
        
        // Laço interno para percorrer as áreas dentro de cada setor
        for (int j = 1; j <= areas; j++) {
            // Simula uma leitura de umidade aleatória entre 30.0% e 70.0%
            umidade = 30.0 + (rand() % 400) / 10.0;
            
            // Exibe a umidade registrada para a área atual
            printf("  Área %d: Umidade do solo = %.1f%%\n", j, umidade);
        }

        printf("\n");  // Separador entre os setores
    }

    return 0;
}