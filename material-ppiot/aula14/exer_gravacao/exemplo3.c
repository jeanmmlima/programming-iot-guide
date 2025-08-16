#include <stdio.h>

int main()
{
    int idade = 50;
    int *ptr;
    int **pp;

    ptr = &idade;
    pp = &ptr;

    printf("O valor da variavel é %i\n", idade);
    printf("O valor da variavel atraves do ponteiro %i\n", *ptr);
    printf("O valor da variavel via ponteiro para ponteiro: %i\n", **pp);

    return 0;
}
