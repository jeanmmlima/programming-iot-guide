#include <stdio.h>

int somar(int a, int b) { // definição
    return a + b;
}

int main() {
    printf("Vamos calcular a soma!\n");
    int resultado = somar(4, 5);
    printf("Resultado: %d\n", resultado);
    return 0;
}

