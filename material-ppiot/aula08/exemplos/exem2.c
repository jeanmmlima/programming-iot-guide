#include <stdio.h>

int main() {
    // Variável externa ao loop
    int valorInicial = 1;

    // Laço for onde a variável de controle é inicializada com 'valorInicial'
    // e o incremento é o dobro a cada iteração
    for (int i = valorInicial; i <= 100; i *= 2) {
        printf("Valor de i: %d\n", i);
    }

    return 0;
}