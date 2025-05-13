#include <stdio.h>

int main() {
    char nome[50];  // Definição de um array de caracteres

    printf("Digite seu nome: ");
    scanf("%s", nome);  // Lê apenas uma palavra

    printf("Olá, %s!\n", nome);
    return 0;
}