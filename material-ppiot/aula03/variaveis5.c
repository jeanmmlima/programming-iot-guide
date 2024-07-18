#include <stdio.h>

int main()
{
    int idade;
    int peso;

    idade = 30;

    printf("Idade: %i e Peso: %i \n", idade, peso); //o que será impresso em Peso: ?

    //perceba que peso só foi inicializada depois de ser usada pela função printf.
    peso = 40; 

    const int MAX_TENTATIVAS = 3;
    printf("O numero de tentativas sempre será: %i",MAX_TENTATIVAS);

    return 0;

}
