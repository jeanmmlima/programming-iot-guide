#include <stdio.h>

int main() {
    // Declaração da matriz
    float notas[3][3];

    // Atribuição direta sem usar for
    notas[0][0] = 10.0;
    notas[0][1] = 8.5;
    notas[0][2] = 7.5;

    notas[1][0] = 6.0;
    notas[1][1] = 4.2;
    notas[1][2] = 5.9;

    notas[2][0] = 7.3;
    notas[2][1] = 3.1;
    notas[2][2] = 0.0;

    // Exibir a matriz
    printf("Matriz notas:\n");
    printf("%.1f %.1f %.1f\n", notas[0][0], notas[0][1], notas[0][2]);
    printf("%.1f %.1f %.1f\n", notas[1][0], notas[1][1], notas[1][2]);
    printf("%.1f %.1f %.1f\n", notas[2][0], notas[2][1], notas[2][2]);

    return 0;
}