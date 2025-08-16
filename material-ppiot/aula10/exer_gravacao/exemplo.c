#include <stdio.h>
#include <string.h>

int main()
{
    char palavras[] = "Programação";
    int tamanho = strlen(palavras);

    printf("O tamanho da string %s é: %i\n", palavras, tamanho);

    char origem[] = "Olá, Professor!";
    char destino[50];

    strcpy(destino,origem);

    printf("O conteudo da string destino é: %s\n",destino);

    char d[50] = "Olá, ";
    char o[] = "mundo!";

    strcat(d,o);

    printf("O conteudo da string destino é: %s\n",d);






    return 0;
}
