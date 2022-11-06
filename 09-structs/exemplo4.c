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
    struct cadastro c[4]; //array de cadastro 

    for(int i = 0; i < 4; i++){
        printf("\n====NOVO CADASTRO===\n");
        printf("Informe o nome: ");
        scanf("%s", &c[i].nome);

        printf("Informe a idade: ");
        scanf("%d", &c[i].idade);

        printf("Informe a rua: ");
        scanf("%s", &c[i].rua);

        printf("Informe o numero: ");
        scanf("%d", &c[i].numero);

        
    }

    for(int i = 0; i < 4; i++){
        printf("\n====PRINT DE CADASTROS===\n");
        printCadastro(c[i]);
    }

    

    

    return 0;
}
