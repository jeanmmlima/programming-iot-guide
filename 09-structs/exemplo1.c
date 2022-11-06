#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro {
    char nome[50];
    int idade;
    char rua[50];
    int numero;
};

int main(int argc, char const *argv[])
{
    struct cadastro c;

    strcpy(c.nome, "Usuario Fulano");
    c.idade = 18;
    strcpy(c.rua, "Avenidade Exemplo");
    c.numero = 1000;

    printf(" Nome: %s\n Idade: %i\n Rua: %s\n Numero: %i\n",c.nome,c.idade,c.rua,c.numero );

    return 0;
}
