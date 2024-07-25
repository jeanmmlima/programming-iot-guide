#include <stdio.h>

int main() {
    // Declaração múltipla de variáveis inteiras
    int a = 5, b = 10, c = 15;

    // Declaração múltipla de variáveis float
    float x = 1.1, y = 2.2, z = 3.3;

    // Atribuição múltipla
    int p, q, r;
    p = q = r = 0;

    // Imprimindo os valores
    printf("Valores inteiros: a = %d, b = %d, c = %d\n", a, b, c);
    printf("Valores float: x = %.1f, y = %.1f, z = %.1f\n", x, y, z);
    printf("Valores após atribuição múltipla: p = %d, q = %d, r = %d\n", p, q, r);

    return 0;
}