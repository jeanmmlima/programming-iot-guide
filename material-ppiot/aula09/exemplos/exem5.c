#include <stdio.h>

int main() {
    float precos[3];  // Declaração de um vetor de 3 valores float
    
    // Entrada de dados pelo usuário
    printf("Digite o valor para precos: ");
    scanf("%f", &precos[0]);  // Lê um valor para a posição 0

    // Entrada de dados pelo usuário
    printf("Digite o valor para precos: ");
    scanf("%f", &precos[1]);  // Lê um valor para a posição 0

    // Entrada de dados pelo usuário
    printf("Digite o valor para precos: ");
    scanf("%f", &precos[2]);  // Lê um valor para a posição 0

    
    // Exibição dos resultados
    printf("\nValores do vetor precos:\n");
    for (int i = 0; i < 3; i++) {
        printf("Precos [%i] = %f\n", i, precos[i]);
    }
    
    return 0;
}