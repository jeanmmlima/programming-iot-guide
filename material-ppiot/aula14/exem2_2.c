#include <stdio.h>

// Função que recebe o endereço de uma variável e altera seu valor
void dobrarValor(int *numero) {
    *numero = *numero * 2;  // acessa o conteúdo do endereço e altera
}

int main() {
    int x = 10;

    printf("Antes da função: x = %d\n", x);

    dobrarValor(&x);  // Passa o endereço de x

    printf("Depois da função: x = %d\n", x);

    return 0;
}