#include <stdio.h>
#include <stdlib.h>

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

    soma = a + b;
    sub = a - b;
    mult = a * b;
    div = a / ((float) b);

    printf("Soma: %i\n", soma);
    printf("Subtracao: %i\n", sub);
    printf("Multiplicacao: %i\n", mult);
    printf("Divisão: %f\n", div);


    return 0;
}
