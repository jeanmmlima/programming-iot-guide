#include <stdio.h>

int main() {
    // Criando uma matriz 4x4
    int matriz[4][4];

    // Atribuindo valores diretos
    matriz[0][0] = 10;
    matriz[0][1] = 20;
    matriz[0][2] = 30;
    matriz[0][3] = 40;

    // Atribuindo valores baseados em elementos já atribuídos
    matriz[1][0] = matriz[0][0] + 5;   // 10 + 5 = 15
    matriz[1][1] = matriz[0][1] * 2;   // 20 * 2 = 40
    matriz[1][2] = matriz[0][2] / 3;   // 30 / 3 = 10
    matriz[1][3] = matriz[0][3] - 10;  // 40 - 10 = 30

    // Atribuindo valores com operações aritméticas diretas
    matriz[2][0] = matriz[1][0] + matriz[1][1];  // 15 + 40 = 55
    matriz[2][1] = matriz[1][2] * 2;             // 10 * 2 = 20
    matriz[2][2] = (matriz[1][3] + matriz[2][0]) / 2; // (30 + 55) / 2 = 42
    matriz[2][3] = matriz[1][1] - matriz[0][0];  // 40 - 10 = 30

    // Atribuindo valores mistos
    matriz[3][0] = 100; 
    matriz[3][1] = matriz[3][0] / 2;  // 100 / 2 = 50
    matriz[3][2] = matriz[3][1] + matriz[2][2]; // 50 + 42 = 92
    matriz[3][3] = matriz[3][2] - matriz[0][3]; // 92 - 40 = 52

    // Exibindo a matriz
    printf("Matriz 4x4 resultante:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}