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
    int soma;
    soma = a + b;
    return soma;
}

int subtrair(int a, int b){
    printf("Dentro da função subtrair: \n");
    return a - b;
}

int multiplicar(int a, int b){
    printf("Dentro da função multiplicar: \n");
    return a * b;
}

float dividir(int a, int b){
    printf("Dentro da função dividir: \n");
    return a /((float) b);
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
    sub = subtrair(a,b);
    mult = multiplicar(a,b);
    div = dividir(a,b);

    printf("Soma: %i\n", soma);
    printf("Subtracao: %i\n", sub);
    printf("Multiplicacao: %i\n", mult);
    printf("Divisão: %f\n", div);


    return 0;
}
