#include <stdio.h>

int main(){

    int numero;

    printf("Inserir o número: (digite 0 para sair)\n");
    scanf("%i",&numero);

    while(numero != 0){

        if(numero > 0){
            printf("O número informado é positivo: %i!\n",numero);
        } else {
            printf("Você informou um número negativo! Não vou mostrar\n");
        }

        printf("Inserir o número: (digite 0 para sair)\n");
        scanf("%i",&numero);

    }

    return 0;
}