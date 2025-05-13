#include <stdio.h>

int main()
{
    int valorInicial;
    int valorLimite;
    
    printf("Inserir o valor inicial do laço: \n");
    scanf("%i",&valorInicial);

    printf("Inserir o valor limite do laço: \n");
    scanf("%i",&valorLimite);


    for(int i = valorInicial; i >= valorLimite; i = i - 1){
        printf("O valor de i é: %i\n", i);
    }
    return 0;
}
