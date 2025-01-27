#include <stdio.h>
#include <string.h>

int main() {
    char nome[50];       // Variável para armazenar o nome digitado
    char copiaNome[50];  // Variável para armazenar a cópia do nome

    printf("Digite seu nome completo: ");
    fgets(nome, sizeof(nome), stdin);  // Lê o nome do usuário

    strcpy(copiaNome, nome);  // Copia o conteúdo da variável nome para copiaNome

    printf("\nNome original: %s", nome);
    printf("Nome copiado: %s", copiaNome);

    return 0;
}