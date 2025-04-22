#include <stdio.h>

int main()
{
    char nome[50];
    printf("Inserir o seu nome: \n");
    fgets(nome, sizeof(nome),stdin);

    printf("O nome informado foi: %s", nome);
    return 0;
}
