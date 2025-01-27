#include <stdio.h>

int main() {
    int multiplos_de_cinco[5];  // Declaração do vetor sem inicialização
    
    // Atribuindo valores a posições específicas
    multiplos_de_cinco[0] = 5; 
    multiplos_de_cinco[1] = 10; 
    multiplos_de_cinco[2] = 15;
    multiplos_de_cinco[3] = 20;
    multiplos_de_cinco[4] = 25;

    // Exibindo os valores atribuídos
    printf("Valores do vetor:\n");
    for (int i = 0; i < 5; i++) {
        printf("Multiplos de Cinco[%d] = %d\n", i, multiplos_de_cinco[i]);
    }
    
    return 0;
}