#include <stdio.h>

int main() {
    int notas[6];  // Declaração de um vetor de 6 inteiros
    
    // Atribuições diretas de valores
    notas[5] = 15;                  // Atribui 15 à posição notas[5]
    notas[0] = 10;                  // Atribui 10 à posição notas[0]
    notas[1] = notas[5] + notas[0]; // Soma de notas[5] e notas[0], armazenada em notas[1]
    notas[2] = notas[1] * 2;        // Multiplica notas[1] por 2, resultado armazenado em notas[2]
    notas[3] = notas[2] - 5;        // Subtrai 5 de notas[2], resultado armazenado em notas[3]
    notas[4] = notas[3] / 2;        // Divide notas[3] por 2, resultado armazenado em notas[4]
    
    // Exibição dos valores do vetor
    printf("Valores do vetor:\n");
    for (int i = 0; i < 6; i++) {
        printf("notas[%d] = %d\n", i, notas[i]);
    }
    
    return 0;
}