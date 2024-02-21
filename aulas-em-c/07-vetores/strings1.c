#include <stdio.h>

int main() {
    // Declarando uma string usando um array de caracteres
    char string1[] = "Olá, Mundo!";

    // Imprimindo a string
    printf("%s\n", string1);

    // Modificando a string
    string1[7] = 'F'; // Alterando 'M' para 'F'

    // Imprimindo a string modificada
    printf("%s\n", string1);

    return 0;
}
