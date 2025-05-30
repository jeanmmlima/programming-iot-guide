#include <stdio.h>

void inicializa(int **ptr) {
    int valor = 99;
    *ptr = &valor;
}

int main() {
    int *p;
    inicializa(&p);
    printf("Valor acessado via ponteiro retornado: %d\n", *p);  // imprime 99
    return 0;
}