#include <stdio.h>

int main()
{
    int numero;

    printf("Inserir o numero: \n");
    scanf("%i", &numero);

    if(numero > 0){
        printf("O número informado é MAIOR que zero!\n");
    }

    if(numero < 0){
        printf("O número informado é MENOR que zero!\n"); 
    }

    if(numero == 0){
        printf("O número informado é IGUAL a zero!\n"); 
    }

    printf("Fim do programa!\n");

    return 0;
}
