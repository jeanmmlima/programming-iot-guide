#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct endereco{
    char rua[50];
    int numero;
};
struct cadastro {
    char nome[50];
    int idade;
    struct endereco ender;
    
};

int main(int argc, char const *argv[])
{
    struct cadastro c;

    printf("Informe o nome: ");
   scanf("%s", &c.nome);

    printf("Informe a idade: ");
    scanf("%d", &c.idade);

    printf("Informe a rua: ");
    scanf("%s", &c.ender.rua);

    printf("Informe o numero: ");
    scanf("%d", &c.ender.numero);

    printf(" Nome: %s\n Idade: %i\n Rua: %s\n Numero: %i\n",c.nome,c.idade,c.ender.rua,c.ender.numero );

    return 0;
}
