#include <stdio.h>
#include <string.h>

int main()
{
    char saudacao[] = "Ola!";

    printf("String inicial: %s\n", saudacao);

    saudacao[0] = 'A';
    saudacao[2] = 'o';

    printf("Nova string: %s\n", saudacao);

    char novaSaudacao[20];

    strcpy(novaSaudacao,saudacao);

    printf("Saudacao: %s\n", novaSaudacao);

    return 0;
}
