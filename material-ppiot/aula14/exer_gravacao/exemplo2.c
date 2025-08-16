#include<stdio.h>

int main()
{
    int meuVetor[5] = {10,20,30,40,50};

    int *meuPonteiro = meuVetor;
    
    for (int i = 0; i < 5; i++)
    {
        printf("O meu Vetor na posição %i é de %i\n", i, meuVetor[i]);
        printf("O meuPonteiro na posição %i é de %i\n", i, meuPonteiro[i]);
        printf("O meuPonteiro na posição %i é de %i\n", i, *(meuPonteiro + i));

    }
    
    

    /* code */
    return 0;
}
