#include <stdio.h>

void dobrar(int numero) {
    numero = numero * 2;
    printf("Dentro da função: %d\n", numero);
}

int main() {
    int x = 10;
    dobrar(x);
    printf("Fora da função: %d\n", x);
    return 0;
}