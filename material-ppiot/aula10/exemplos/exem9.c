#include <stdio.h>

int main() {
    char frase[100];

    printf("Digite uma frase: ");
    scanf(" %[^\n]s", frase);  // Lê toda a linha até '\n'

    printf("Você digitou: %s!\n", frase);
    return 0;
}