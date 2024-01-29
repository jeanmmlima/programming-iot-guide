#include <stdio.h>
#define PRECO 1.99
int main()
{
   //declarando variáveis: tipo e nome e atribuindo o
    int quantidade = 3;
    char qualidade = 'A';
    float peso = 0.653;

    //exibindo o valor das variáveis
    printf("Quantidade %i de qualidade %c, pesando %f em quilos. \n",quantidade, qualidade, peso);
    printf("O preço por quilo é R$ %f, o total é R$ %f", PRECO, PRECO*peso);
    return 0;
}
