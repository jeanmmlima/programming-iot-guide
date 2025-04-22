#include <stdio.h>

int main()
{
    int idade;

    printf("Inserir a idade: \n");
    scanf("%i", &idade);

    if(idade >= 18){
        printf("Usuário é maior idade");
    } else if(idade >= 16){
        printf("Usuário é menor idade, mas pode votar!");
    } else {
        printf("Usuário é menor idade!");
    }

    return 0;
}
