#include <stdio.h>
#include <stdlib.h>

/*
Implementando funções

Estrutura: 
TIPO_DE_RETORNO NOME_FUNCAO(TIPO_PARAMETRO PARAMETRO)

Ex: int minhaIdade(int ano)
Ex: int soma(int a, int b);
Ex: float potencia(int a, int b);

fora da função main 
*/

int somar(int a, int b){
    printf("Dentro da função soma: \n");
    printf("Vou somar a e b passados como parametro: \n");
    return a + b;
}


//função main, funçao principal do código - entrada
int main(int argc, char const *argv[])
{
    int a,b;
    int soma;
    int sub;
    int mult;
    float div;

    printf("Informe a: \n");
    scanf("%i",&a);
    printf("Informe b: \n");
    scanf("%i",&b);

    //soma = a + b;
    //chamando funcao soma para realizar a soma

    soma = somar( a, b );

    sub = a - b;
    mult = a * b;
    div = a / ((float) b);

    printf("Soma: %i\n", soma);
    printf("Subtracao: %i\n", sub);
    printf("Multiplicacao: %i\n", mult);
    printf("Divisão: %f\n", div);


    return 0;
}
