#include <stdio.h>

int main() {
    // Declaração de variáveis
    int a, b, c;
    float x, y;

    // Atribuição de valores
    a = 10;       // atribui o valor 10 à variável 'a'
    b = 20;       // atribui o valor 20 à variável 'b'
    c = a + b;    // atribui o resultado da soma de 'a' e 'b' à variável 'c'

    x = 5.5;      // atribui o valor 5.5 à variável 'x'
    y = x;    // atribui o valor de 'x' à variável 'y'

    // Impressão dos valores atribuídos
    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);
    printf("Valor de c (a + b): %d\n", c);
    printf("Valor de x: %.2f\n", x);
    printf("Valor de y (x): %.2f\n", y);

    return 0;
}