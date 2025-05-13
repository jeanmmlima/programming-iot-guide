#include <stdio.h>

// Função com 3 parâmetros
float calcularMedia(int a, int b, int c) {
    float media = (a + b + c) / 3.0;
    return media;
}

int main() {
    int nota1 = 7, nota2 = 8, nota3 = 6;
    float resultado = calcularMedia(nota1, nota2, nota3);

    printf("A média das três notas é: %.2f\n", resultado);

    return 0;
}