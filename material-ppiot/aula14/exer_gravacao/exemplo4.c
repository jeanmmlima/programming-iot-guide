#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *numeros;
    int qtd = 5;

    numeros = (int*) malloc(qtd * sizeof(int));

    for (int i = 0; i < qtd; i++)
    {
        printf("Insira o valor da posicao %i\n",i);
        scanf("%i", &numeros[i]);
    }

    for (int i = 0; i < qtd; i++)
    {
        printf("O valor do vetor numeros na posicao %i é de: %i \n", i, numeros[i]);
    }

    free(numeros);
    
    
    return 0;
}
