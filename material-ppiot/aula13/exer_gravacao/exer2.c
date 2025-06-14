#include <stdio.h>

union ExemploDados
{
    int valorInteiro;
    char valorChar;
};


int main()
{
    union ExemploDados meuExemplo;

    meuExemplo.valorInteiro = 1000;

    printf("O valor do inteiro é: %d\n", meuExemplo.valorInteiro);

    meuExemplo.valorChar = 'Z';

    printf("O valor do char é: %c\n", meuExemplo.valorChar);

    printf("O valor do inteiro é: %d\n", meuExemplo.valorInteiro);


    return 0;
}
