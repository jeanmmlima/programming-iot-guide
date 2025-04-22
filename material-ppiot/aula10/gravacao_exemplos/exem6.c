#include <stdio.h>

int main() {
    char nome[50];  // Definição de um array de caracteres

    printf("Digite seu nome: ");
    scanf("%s", nome);  // Lê apenas uma palavra
    //gets(nome);  // Inseguro, não deve ser usado
    //fgets(nome, sizeof(nome), stdin);  // Leitura segura com tamanho máximo

    printf("Olá, %s!\n", nome);
    return 0;
}