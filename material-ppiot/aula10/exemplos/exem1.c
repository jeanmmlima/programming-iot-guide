#include <stdio.h>

int main() {
    char palavra[] = "Ola Mundo!";

    printf("%c\n", palavra[0]); // Acessa 'O'
    printf("%c\n", palavra[15]); // Elemento não existe...

    return 0;
}