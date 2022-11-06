#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cadastro {
    char nome[50];
    int idade;
    char rua[50];
    int numero;
};

void printCadastro(struct cadastro c){
    printf(" Nome: %s\n Idade: %i\n Rua: %s\n Numero: %i\n",c.nome,c.idade,c.rua,c.numero );
}

int main(int argc, char const *argv[])
{
    struct cadastro c = {"Usuario Fulano",20,"Avenida Brasil",1082};
    struct cadastro c2 = {"Carlos",18}; //texto com "" e numero inciado com zero

    printCadastro(c);
    printCadastro(c2);

    return 0;
}
