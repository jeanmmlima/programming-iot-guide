#include <stdio.h>

int main() {
    char nome[50];

    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);  // Leitura segura com tamanho máximo

    printf("Olá, %s!\n", nome);
    return 0;
}