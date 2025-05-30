#include <stdio.h>

int main() {
    int x = 20;      // Declara uma variável inteira e armazena o valor 20
    int *p;          // Declara um ponteiro para inteiro, mas ainda sem apontar para nada

    p = &x;          // Atribui ao ponteiro 'p' o endereço de memória da variável 'x'

    printf("%d\n", *p); // Acessa o valor armazenado no endereço que 'p' aponta (ou seja, o valor de x)
    
    return 0;
}