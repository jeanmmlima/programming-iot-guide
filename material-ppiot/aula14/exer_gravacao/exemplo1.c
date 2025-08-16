#include <stdio.h>

int main()
{
    int idade = 25;

    int *ptr;

    ptr = &idade;

    printf("O valor da variavel: %i\n", idade);
    printf("O valor do ponteiro: %p\n", ptr);
    printf("O valor de idade através do ponteiro: %i\n", *ptr);
    printf("O valor do endereço de memória através da variável: %p\n", &idade);

    *ptr = 30;

    printf("O valor de idade através do ponteiro: %i\n", *ptr);
    printf("O valor da variavel: %i\n", idade);


    return 0;
}
