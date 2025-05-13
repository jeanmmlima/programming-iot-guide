#include <stdio.h>

int main()
{
    int codigos[5];
    int valores[5];

    for(int i = 0; i < 5; i++){
        printf("Inserir o código do jogador %i\n", i + 1);
        scanf("%i", &codigos[i]);
    }

    for(int i = 0; i < 5; i++){
        printf("Inserir o valor no dado (1 a 6) do jogador %i\n", codigos[i]);
        scanf("%i", &valores[i]);
    }

    for(int i = 0; i < 5; i++){
        if(valores[i] >= 5){
            printf("O jogador de código %i obteve valor no dado igual a %i \n", codigos[i], valores[i]);
        }
    }



    return 0;
}
