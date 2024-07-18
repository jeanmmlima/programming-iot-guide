#include <stdio.h>
#include <stdlib.h>

int main()
{

    unsigned char botao1, botao2, bomba;

    printf("Digite um estado do botão1 (1 - ligado, 0 - desligado):\n");
    scanf(" %c", &botao1); 

    printf("Digite um estado do botão2 (1 - ligado, 0 - desligado):\n");
    scanf(" %c", &botao2);

    bomba = botao1 & botao2; //E bit a bit

    //so vai retornar um 1 se botao1: 00000001 E botao2: 00000001, logo bomba: 00000001
    //qualquer outro cenário retorna bomba: 00000000

    printf("\nEstado da bomba: %c \n", bomba);
    
    return 0;
}
