#include <stdio.h>

int main() {
    char nome[50];

    printf("Digite seu nome completo: ");
    gets(nome);  // Inseguro, não deve ser usado

    printf("Olá, %s!\n", nome);
    return 0;
}