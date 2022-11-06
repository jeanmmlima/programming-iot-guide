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

    printf("Informe o nome: ");
   scanf("%s", &c.nome);

    printf("Informe a idade: ");
    scanf("%d", &c.idade);

    printf("Informe a rua: ");
    scanf("%s", &c.rua);

    printf("Informe o numero: ");
    scanf("%d", &c.numero);

    printf(" Nome: %s\n Idade: %i\n Rua: %s\n Numero: %i\n",c.nome,c.idade,c.rua,c.numero );

    return 0;
}
